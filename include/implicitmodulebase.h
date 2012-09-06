#ifndef IMPLICIT_MODULE_BASE_H
#define IMPLICIT_MODULE_BASE_H
#include <iostream>
#include <typeinfo>
#include <functional>
#include <map>

// Base class of implicit (2D, 4D, 6D) noise functions
#define MaxSources 20
namespace anl
{
    class CImplicitModuleBase
    {
    public:
    	CImplicitModuleBase(){}
    	virtual ~CImplicitModuleBase(){}

        typedef std::function<void(double)> double_v;

    	virtual void setSeed(unsigned int seed){}

    	virtual double get(double x, double y)=0;
    	virtual double get(double x, double y, double z)=0;
    	virtual double get(double x, double y, double z, double w)=0;
    	virtual double get(double x, double y, double z, double w, double u, double v)=0;

        bool registerInput(std::string const& key, double_v const& input) {
            functions[key] = input;
        }
        
        void setInput(std::string key, double value) {
            auto fit = functions.find(key);
            if (fit == functions.end()) return;

            fit->second(value);
        }

    protected:

    private:
        std::map<std::string, double_v> functions;
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
};


#endif
