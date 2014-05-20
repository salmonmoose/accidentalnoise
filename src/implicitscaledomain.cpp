#include "implicitscaledomain.h"

namespace anl
{
    CImplicitScaleDomain::CImplicitScaleDomain() : m_source(0),m_sx(1),m_sy(1),m_sz(1),m_sw(1),m_su(1),m_sv(1)
    {
        CImplicitModuleBase::registerDoubleInput(
            "ScaleX",
            [this] (double d) { this->setXScale (d); },
            [this] () -> double { return this->getDoubleXScale(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "ScaleY",
            [this] (double d) { this->setYScale (d); },
            [this] () -> double { return this->getDoubleYScale(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "ScaleZ",
            [this] (double d) { this->setZScale (d); },
            [this] () -> double { return this->getDoubleZScale(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "ScaleW",
            [this] (double d) { this->setWScale (d); },
            [this] () -> double { return this->getDoubleWScale(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "ScaleU",
            [this] (double d) { this->setUScale (d); },
            [this] () -> double { return this->getDoubleUScale(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "ScaleV",
            [this] (double d) { this->setVScale (d); },
            [this] () -> double { return this->getDoubleVScale(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "ScaleX",
            [this] (CImplicitModuleBase *n) { this->setXScale (n); },
            [this] () -> CImplicitModuleBase * { return this->getNoiseXScale(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "ScaleY",
            [this] (CImplicitModuleBase *n) { this->setYScale (n); },
            [this] () -> CImplicitModuleBase * { return this->getNoiseYScale(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "ScaleZ",
            [this] (CImplicitModuleBase *n) { this->setZScale (n); },
            [this] () -> CImplicitModuleBase * { return this->getNoiseZScale(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "ScaleW",
            [this] (CImplicitModuleBase *n) { this->setWScale (n); },
            [this] () -> CImplicitModuleBase * { return this->getNoiseWScale(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "ScaleU",
            [this] (CImplicitModuleBase *n) { this->setUScale (n); },
            [this] () -> CImplicitModuleBase * { return this->getNoiseUScale(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "ScaleV",
            [this] (CImplicitModuleBase *n) { this->setVScale (n); },
            [this] () -> CImplicitModuleBase * { return this->getNoiseVScale(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource (n); },
            [this] () -> CImplicitModuleBase * { return this->getSource(); }
        );

    }

    CImplicitScaleDomain::CImplicitScaleDomain(double x, double y, double z, double w, double u, double v):m_source(0),
        m_sx(x),m_sy(y),m_sz(z),m_sw(w),m_su(u),m_sv(v){}

    void CImplicitScaleDomain::setScale(double x, double y, double z, double w, double u, double v)
    {
        m_sx.set(x); m_sy.set(y); m_sz.set(z); m_sw.set(w); m_su.set(u); m_sv.set(v);
    }

    void CImplicitScaleDomain::setXScale(double x){ m_sx.set(x); }
    void CImplicitScaleDomain::setYScale(double x){ m_sy.set(x); }
    void CImplicitScaleDomain::setZScale(double x){ m_sz.set(x); }
    void CImplicitScaleDomain::setWScale(double x){ m_sw.set(x); }
    void CImplicitScaleDomain::setUScale(double x){ m_su.set(x); }
    void CImplicitScaleDomain::setVScale(double x){ m_sv.set(x); }

    double CImplicitScaleDomain::getDoubleXScale(){ return m_sx.getDouble(); }
    double CImplicitScaleDomain::getDoubleYScale(){ return m_sy.getDouble(); }
    double CImplicitScaleDomain::getDoubleZScale(){ return m_sz.getDouble(); }
    double CImplicitScaleDomain::getDoubleWScale(){ return m_sw.getDouble(); }
    double CImplicitScaleDomain::getDoubleUScale(){ return m_su.getDouble(); }
    double CImplicitScaleDomain::getDoubleVScale(){ return m_sv.getDouble(); }

    void CImplicitScaleDomain::setXScale(CImplicitModuleBase *x){ m_sx.set(x); }
    void CImplicitScaleDomain::setYScale(CImplicitModuleBase *y){ m_sy.set(y); }
    void CImplicitScaleDomain::setZScale(CImplicitModuleBase *z){ m_sz.set(z); }
    void CImplicitScaleDomain::setWScale(CImplicitModuleBase *w){ m_sw.set(w); }
    void CImplicitScaleDomain::setUScale(CImplicitModuleBase *u){ m_su.set(u); }
    void CImplicitScaleDomain::setVScale(CImplicitModuleBase *v){ m_sv.set(v); }

    CImplicitModuleBase *CImplicitScaleDomain::getNoiseXScale(){ return m_sx.getNoise(); }
    CImplicitModuleBase *CImplicitScaleDomain::getNoiseYScale(){ return m_sy.getNoise(); }
    CImplicitModuleBase *CImplicitScaleDomain::getNoiseZScale(){ return m_sz.getNoise(); }
    CImplicitModuleBase *CImplicitScaleDomain::getNoiseWScale(){ return m_sw.getNoise(); }
    CImplicitModuleBase *CImplicitScaleDomain::getNoiseUScale(){ return m_su.getNoise(); }
    CImplicitModuleBase *CImplicitScaleDomain::getNoiseVScale(){ return m_sv.getNoise(); }

    void CImplicitScaleDomain::setSource(CImplicitModuleBase *m) { m_source = m; }
    CImplicitModuleBase *CImplicitScaleDomain::getSource() { return m_source; }

    double CImplicitScaleDomain::get(double x, double y)
    {
        return m_source->get(x*m_sx.get(x,y), y*m_sy.get(x,y));
    }

    double CImplicitScaleDomain::get(double x, double y, double z)
    {
        return m_source->get(x*m_sx.get(x,y,z), y*m_sy.get(x,y,z), z*m_sz.get(x,y,z));
    }

    double CImplicitScaleDomain::get(double x, double y, double z, double w)
    {
        return m_source->get(x*m_sx.get(x,y,z,w), y*m_sy.get(x,y,z,w), z*m_sz.get(x,y,z,w), w*m_sw.get(x,y,z,w));
    }

    double CImplicitScaleDomain::get(double x, double y, double z, double w, double u, double v)
    {
        return m_source->get(x*m_sx.get(x,y,z,w,u,v), y*m_sy.get(x,y,z,w,u,v), z*m_sz.get(x,y,z,w,u,v),
            w*m_sw.get(x,y,z,w,u,v), u*m_su.get(x,y,z,w,u,v), v*m_sv.get(x,y,z,w,u,v));
    }
};
