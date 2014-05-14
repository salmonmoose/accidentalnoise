#ifndef IMPLICIT_MODULE_BASE_H
#define IMPLICIT_MODULE_BASE_H
#include <iostream>
#include <typeinfo>
#include <functional>
#include <map>
#include "factory.h"

// Base class of implicit (2D, 4D, 6D) noise functions
#define MaxSources 20
namespace anl
{
    class CImplicitModuleBase
    {
    public:
    	CImplicitModuleBase(){}
    	virtual ~CImplicitModuleBase(){}

        typedef std::function<void(int)> int_set_function;
        typedef std::function<void(double)> double_set_function;
        typedef std::function<void(anl::CImplicitModuleBase*)> noise_set_function;

        typedef std::function<int()> int_get_function;
        typedef std::function<double()> double_get_function;
        typedef std::function<anl::CImplicitModuleBase*()> noise_get_function;


    	virtual void setSeed(unsigned int seed){}

    	virtual double get(double x, double y)=0;
    	virtual double get(double x, double y, double z)=0;
    	virtual double get(double x, double y, double z, double w)=0;
    	virtual double get(double x, double y, double z, double w, double u, double v)=0;


        //TODO: these could all realistically be templated;
        bool registerDoubleInput(std::string const& key, double_set_function const& input, double_get_function const& output) {
            doubleSetFunctions[key] = input;
            doubleGetFunctions[key] = output;
            return true;
        }

        bool registerIntInput(std::string const& key, int_set_function const& input, int_get_function const& output) {
            intSetFunctions[key] = input;
            intGetFunctions[key] = output;
            return true;
        }

        bool registerNoiseInput(std::string const& key, noise_set_function const& input, noise_get_function const& output) {
            noiseSetFunctions[key] = input;
            noiseGetFunctions[key] = output;
            return true;
        }

        void setDoubleInput(std::string key, double value) {
            auto fit = doubleSetFunctions.find(key);
            if (fit == doubleSetFunctions.end()) return;

            fit->second(value);
        }

        double getDoubleInput(std::string key) {
            auto fit = doubleGetFunctions.find(key);
            if (fit == doubleGetFunctions.end()) return 0;

            return fit->second();
        }

        void setIntInput(std::string key, int value) {
            auto fit = intSetFunctions.find(key);
            if (fit == intSetFunctions.end()) return;

            fit->second(value);
        }

        int getIntInput(std::string key) {
            auto fit = intGetFunctions.find(key);
            if (fit == intGetFunctions.end()) return 0;

            return fit->second();
        }

        void setNoiseInput(std::string key, anl::CImplicitModuleBase* value) {
            auto fit = noiseSetFunctions.find(key);
            if(fit == noiseSetFunctions.end()) return;

            fit->second(value);
        }

        anl::CImplicitModuleBase * getNoiseInput(std::string key) {
            auto fit = noiseGetFunctions.find(key);
            if (fit == noiseGetFunctions.end()) return 0;

            return fit->second();
        }

        std::vector<std::string> getDoubleInputs() {
            std::vector<std::string> key_list;

            for(typename std::map<std::string, double_set_function>::iterator it = doubleSetFunctions.begin(); it != doubleSetFunctions.end(); ++it)
            {
                key_list.push_back(it->first);
            }

            return key_list;
        }

        std::vector<std::string> getIntInputs() {
            std::vector<std::string> key_list;

            for(typename std::map<std::string, int_set_function>::iterator it = intSetFunctions.begin(); it != intSetFunctions.end(); ++it)
            {
                key_list.push_back(it->first);
            }

            return key_list;
        }

        std::vector<std::string> getNoiseInputs() {
            std::vector<std::string> key_list;

            for(typename std::map<std::string, noise_set_function>::iterator it = noiseSetFunctions.begin(); it != noiseSetFunctions.end(); ++it)
            {
                key_list.push_back(it->first);
            }

            return key_list;
        }

    protected:

    private:
        std::map<std::string, double_set_function> doubleSetFunctions;
        std::map<std::string, int_set_function> intSetFunctions;
        std::map<std::string, noise_set_function> noiseSetFunctions;

        std::map<std::string, double_get_function> doubleGetFunctions;
        std::map<std::string, int_get_function> intGetFunctions;
        std::map<std::string, noise_get_function> noiseGetFunctions;
    };

    // Scalar parameter class
    class CScalarParameter
    {
        public:
        CScalarParameter(double v) : m_val(v), m_source(0){}
        ~CScalarParameter(){}

        void set(double v)
        {
            m_source=0;
            m_val=v;
        }

        void set(CImplicitModuleBase *m)
        {
            m_source=m;
        }

        double getDouble()
        {
            return m_val;
        }

        CImplicitModuleBase * getNoise()
        {
            return m_source;
        }

        double get(double x, double y)
        {
            if(m_source) return m_source->get(x,y);
            else return m_val;
        }

        double get(double x, double y, double z)
        {
            if(m_source) {
                return m_source->get(x,y,z);
            } else {
                return m_val;
            }
        }

        double get(double x, double y, double z, double w)
        {
            if(m_source) return m_source->get(x,y,z,w);
            else return m_val;
        }

        double get(double x, double y, double z, double w, double u, double v)
        {
            if(m_source) return m_source->get(x,y,z,w,u,v);
            else return m_val;
        }

        protected:
        double m_val;
        CImplicitModuleBase *m_source;
    };

    struct CImplicitModuleFactory : generic_factory<std::string, anl::CImplicitModuleBase> {
        static CImplicitModuleFactory & instance()
        {
            static CImplicitModuleFactory sInstance;
            return sInstance;
        }
    };
};


#endif
