#ifndef IMPLICIT_MODULE_BASE_H
#define IMPLICIT_MODULE_BASE_H

#include "modulebase.h"
#include "factory.h"

// Base class of implicit (2D, 4D, 6D) noise functions
#define MaxSources 20
namespace anl
{
    struct SCellularCache
    {
        double f[4]={};
        double d[4]={};
        double x,y,z,w,u,v=0;
        bool valid;

        SCellularCache()
        {
            valid=false;
        }
    };

    class CCellularGenerator
    {
        public:
        CCellularGenerator();
        ~CCellularGenerator();

        void setName(std::string nName) { name = nName; }
        std::string getName() { return name; }

        SCellularCache &get(double x, double y);
        SCellularCache &get(double x, double y, double z);
        SCellularCache &get(double x, double y, double z, double w);
        SCellularCache &get(double x, double y, double z, double w, double u, double v);

        void setSeed(unsigned int seed);

        protected:
        unsigned int m_seed;

        std::string name;
        SCellularCache m_cache2, m_cache3, m_cache4, m_cache6;
    };

    class CImplicitModuleBase : public ModuleBase
    {
    public:
    	CImplicitModuleBase(){}
    	virtual ~CImplicitModuleBase(){}



    	virtual void setSeed(unsigned int seed){}

    	virtual double get(double x, double y)=0;
    	virtual double get(double x, double y, double z)=0;
    	virtual double get(double x, double y, double z, double w)=0;
    	virtual double get(double x, double y, double z, double w, double u, double v)=0;

        
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
