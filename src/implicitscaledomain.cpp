#include "implicitscaledomain.h"

namespace anl
{
    bool ScaleDomain_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitScaleDomain>("ScaleDomain");

    CImplicitScaleDomain::CImplicitScaleDomain() : m_source(0),m_sx(1),m_sy(1),m_sz(1),m_sw(1),m_su(1),m_sv(1)
    {
        CImplicitModuleBase::registerDoubleInput("ScaleX",[this] (double d) { this->setXScale (d); });
        CImplicitModuleBase::registerDoubleInput("ScaleY",[this] (double d) { this->setYScale (d); });
        CImplicitModuleBase::registerDoubleInput("ScaleZ",[this] (double d) { this->setZScale (d); });
        CImplicitModuleBase::registerDoubleInput("ScaleW",[this] (double d) { this->setWScale (d); });
        CImplicitModuleBase::registerDoubleInput("ScaleU",[this] (double d) { this->setUScale (d); });
        CImplicitModuleBase::registerDoubleInput("ScaleV",[this] (double d) { this->setVScale (d); });
        CImplicitModuleBase::registerDoubleInput("Source",[this] (double d) { this->setSource (d); });

        CImplicitModuleBase::registerNoiseInput("ScaleX",[this] (CImplicitModuleBase *n) { this->setXScale (n); });
        CImplicitModuleBase::registerNoiseInput("ScaleY",[this] (CImplicitModuleBase *n) { this->setYScale (n); });
        CImplicitModuleBase::registerNoiseInput("ScaleZ",[this] (CImplicitModuleBase *n) { this->setZScale (n); });
        CImplicitModuleBase::registerNoiseInput("ScaleW",[this] (CImplicitModuleBase *n) { this->setWScale (n); });
        CImplicitModuleBase::registerNoiseInput("ScaleU",[this] (CImplicitModuleBase *n) { this->setUScale (n); });
        CImplicitModuleBase::registerNoiseInput("ScaleV",[this] (CImplicitModuleBase *n) { this->setVScale (n); });
        CImplicitModuleBase::registerNoiseInput("Source",[this] (CImplicitModuleBase *n) { this->setSource (n); });
    }

    CImplicitScaleDomain::CImplicitScaleDomain(double x, double y, double z, double w, double u, double v):m_source(0),
        m_sx(x),m_sy(y),m_sz(z),m_sw(w),m_su(u),m_sv(v){}

    void CImplicitScaleDomain::setScale(double x, double y, double z, double w, double u, double v)
    {
        m_sx.set(x); m_sy.set(y); m_sz.set(z); m_sw.set(w); m_su.set(u); m_sv.set(v);
    }

    void CImplicitScaleDomain::setXScale(double x){m_sx.set(x);}
    void CImplicitScaleDomain::setYScale(double x){m_sy.set(x);}
    void CImplicitScaleDomain::setZScale(double x){m_sz.set(x);}
    void CImplicitScaleDomain::setWScale(double x){m_sw.set(x);}
    void CImplicitScaleDomain::setUScale(double x){m_su.set(x);}
    void CImplicitScaleDomain::setVScale(double x){m_sv.set(x);}
    void CImplicitScaleDomain::setXScale(CImplicitModuleBase *x){m_sx.set(x);}
    void CImplicitScaleDomain::setYScale(CImplicitModuleBase *y){m_sy.set(y);}
    void CImplicitScaleDomain::setZScale(CImplicitModuleBase *z){m_sz.set(z);}
    void CImplicitScaleDomain::setWScale(CImplicitModuleBase *w){m_sw.set(w);}
    void CImplicitScaleDomain::setUScale(CImplicitModuleBase *u){m_su.set(u);}
    void CImplicitScaleDomain::setVScale(CImplicitModuleBase *v){m_sv.set(v);}


    void CImplicitScaleDomain::setSource(CImplicitModuleBase *m)
    {
        m_source.set(m);
    }

    void CImplicitScaleDomain::setSource(double v)
    {
        m_source.set(v);
    }

    double CImplicitScaleDomain::get(double x, double y)
    {
        return m_source.get(x*m_sx.get(x,y), y*m_sy.get(x,y));
    }

    double CImplicitScaleDomain::get(double x, double y, double z)
    {
        return m_source.get(x*m_sx.get(x,y,z), y*m_sy.get(x,y,z), z*m_sz.get(x,y,z));
    }

    double CImplicitScaleDomain::get(double x, double y, double z, double w)
    {
        return m_source.get(x*m_sx.get(x,y,z,w), y*m_sy.get(x,y,z,w), z*m_sz.get(x,y,z,w), w*m_sw.get(x,y,z,w));
    }

    double CImplicitScaleDomain::get(double x, double y, double z, double w, double u, double v)
    {
        return m_source.get(x*m_sx.get(x,y,z,w,u,v), y*m_sy.get(x,y,z,w,u,v), z*m_sz.get(x,y,z,w,u,v),
            w*m_sw.get(x,y,z,w,u,v), u*m_su.get(x,y,z,w,u,v), v*m_sv.get(x,y,z,w,u,v));
    }
};
