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

        typedef std::function<void(int)> int_function;
        typedef std::function<void(double)> double_function;

        typedef std::function<void(anl::CImplicitModuleBase*)> noise_function;


    	virtual void setSeed(unsigned int seed){}

    	virtual double get(double x, double y)=0;
    	virtual double get(double x, double y, double z)=0;
    	virtual double get(double x, double y, double z, double w)=0;
    	virtual double get(double x, double y, double z, double w, double u, double v)=0;


        //TODO: these could all realistically be templated;
        bool registerDoubleInput(std::string const& key, double_function const& input) {
            doubleFunctions[key] = input;
            return true;
        }

        bool registerIntInput(std::string const& key, int_function const& input) {
            intFunctions[key] = input;
            return true;
        }

        bool registerNoiseInput(std::string const& key, noise_function const& input) {
            noiseFunctions[key] = input;
            return true;
        }

        void setDoubleInput(std::string key, double value) {
            auto fit = doubleFunctions.find(key);
            if (fit == doubleFunctions.end()) return;

            fit->second(value);
        }

        void setIntInput(std::string key, int value) {
            auto fit = intFunctions.find(key);
            if (fit == intFunctions.end()) return;

            fit->second(value);
        }

        void setNoiseInput(std::string key, anl::CImplicitModuleBase* value) {
            auto fit = noiseFunctions.find(key);
            if(fit == noiseFunctions.end()) return;

            fit->second(value);
        }

        std::vector<std::string> getDoubleInputs() {
            std::vector<std::string> key_list;

            for(typename std::map<std::string, double_function>::iterator it = doubleFunctions.begin(); it != doubleFunctions.end(); ++it)
            {
                key_list.push_back(it->first);
            }

            return key_list;
        }

        std::vector<std::string> getIntInputs() {
            std::vector<std::string> key_list;

            for(typename std::map<std::string, int_function>::iterator it = intFunctions.begin(); it != intFunctions.end(); ++it)
            {
                key_list.push_back(it->first);
            }

            return key_list;
        }

        std::vector<std::string> getNoiseInputs() {
            std::vector<std::string> key_list;

            for(typename std::map<std::string, noise_function>::iterator it = noiseFunctions.begin(); it != noiseFunctions.end(); ++it)
            {
                key_list.push_back(it->first);
            }

            return key_list;
        }

    protected:

    private:
        std::map<std::string, double_function> doubleFunctions;
        std::map<std::string, int_function> intFunctions;
        std::map<std::string, noise_function> noiseFunctions;
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
