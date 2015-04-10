#include "implicittranslatedomain.h"

namespace anl
{
    CImplicitTranslateDomain::CImplicitTranslateDomain() : m_source(0), m_ax(0), m_ay(0), m_az(0), m_aw(0), m_au(0), m_av(0)
    {
        CImplicitModuleBase::DoubleInputs.create(
            "TranslateX",
            [this] (double d) { this->setXAxisSource (d); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "TranslateY",
            [this] (double d) { this->setYAxisSource (d); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "TranslateZ",
            [this] (double d) { this->setZAxisSource (d); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "TranslateW",
            [this] (double d) { this->setWAxisSource (d); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "TranslateU",
            [this] (double d) { this->setUAxisSource (d); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "TranslateV",
            [this] (double d) { this->setVAxisSource (d); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "Source",
            [this] (double d) { this->setSource (d); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "TranslateX",
            [this] (CImplicitModuleBase *n) { this->setXAxisSource (n); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "TranslateY",
            [this] (CImplicitModuleBase *n) { this->setYAxisSource (n); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "TranslateZ",
            [this] (CImplicitModuleBase *n) { this->setZAxisSource (n); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "TranslateW",
            [this] (CImplicitModuleBase *n) { this->setWAxisSource (n); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "TranslateU",
            [this] (CImplicitModuleBase *n) { this->setUAxisSource (n); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "TranslateV",
            [this] (CImplicitModuleBase *n) { this->setVAxisSource (n); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource (n); }
        );
    }
    CImplicitTranslateDomain::~CImplicitTranslateDomain(){}

    void CImplicitTranslateDomain::setXAxisSource(CImplicitModuleBase *m) { m_ax.set(m); }
    void CImplicitTranslateDomain::setYAxisSource(CImplicitModuleBase *m) { m_ay.set(m); }
    void CImplicitTranslateDomain::setZAxisSource(CImplicitModuleBase *m) { m_az.set(m); }
    void CImplicitTranslateDomain::setWAxisSource(CImplicitModuleBase *m) { m_aw.set(m); }
    void CImplicitTranslateDomain::setUAxisSource(CImplicitModuleBase *m) { m_au.set(m); }
    void CImplicitTranslateDomain::setVAxisSource(CImplicitModuleBase *m) { m_av.set(m); }
    void CImplicitTranslateDomain::setXAxisSource(double v) { m_ax.set(v); }
    void CImplicitTranslateDomain::setYAxisSource(double v) { m_ay.set(v); }
    void CImplicitTranslateDomain::setZAxisSource(double v) { m_az.set(v); }
    void CImplicitTranslateDomain::setWAxisSource(double v) { m_aw.set(v); }
    void CImplicitTranslateDomain::setUAxisSource(double v) { m_au.set(v); }
    void CImplicitTranslateDomain::setVAxisSource(double v) { m_av.set(v); }

    void CImplicitTranslateDomain::setSource(CImplicitModuleBase *m) { m_source.set(m); }
    void CImplicitTranslateDomain::setSource(double v) { m_source.set(v); }

    double CImplicitTranslateDomain::get(double x, double y)
    {
        return m_source.get(x+m_ax.get(x,y), y+m_ay.get(x,y));
    }
    double CImplicitTranslateDomain::get(double x, double y, double z)
    {
        return m_source.get(x+m_ax.get(x,y,z), y+m_ay.get(x,y,z), z+m_az.get(x,y,z));
    }
    double CImplicitTranslateDomain::get(double x, double y, double z, double w)
    {
        return m_source.get(x+m_ax.get(x,y,z,w), y+m_ay.get(x,y,z,w), z+m_az.get(x,y,z,w), w+m_aw.get(x,y,z,w));
    }
    double CImplicitTranslateDomain::get(double x, double y, double z, double w, double u, double v)
    {
        return m_source.get(x+m_ax.get(x,y,z,w,u,v), y+m_ay.get(x,y,z,w,u,v), z+m_az.get(x,y,z,w,u,v),
            w+m_aw.get(x,y,z,w,u,v), u+m_au.get(x,y,z,w,u,v), v+m_av.get(x,y,z,w,u,v));
    }
};
