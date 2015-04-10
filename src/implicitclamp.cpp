#include "implicitclamp.h"

namespace anl
{
    CImplicitClamp::CImplicitClamp() : m_source(0), m_low(0.25), m_high(0.75){
        CImplicitModuleBase::NoiseInputs.create(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource(n); },
            [this] () -> CImplicitModuleBase* { return this->getSource(); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "High",
            [this] (double n) { this->setHigh(n); },
            [this] () -> double { return this->getHigh(); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "Low",
            [this] (double n) { this->setLow(n); },
            [this] () -> double { return this->getLow(); }
        );
    }

    CImplicitClamp::~CImplicitClamp(){}

    void CImplicitClamp::setRange(double low, double high) { setHigh(high); setLow(low); }

    void CImplicitClamp::setHigh(double high) { m_high = high; }
    double CImplicitClamp::getHigh() { return m_high; }

    void CImplicitClamp::setLow(double low) { m_low = low; }
    double CImplicitClamp::getLow() { return m_low; }

    void CImplicitClamp::setSource(CImplicitModuleBase *b){ m_source=b; }
    CImplicitModuleBase *CImplicitClamp::getSource() { return m_source; }

    double CImplicitClamp::get(double x, double y)
    {
        double value;

        if(m_source) {
            value = m_source->get(x,y);
        } else {
            value = sqrt(x * x + y * y);
        }

        return clamp(value, m_low, m_high);
    }

    double CImplicitClamp::get(double x, double y, double z)
    {
        double value;

        if(m_source) {
            value = m_source->get(x,y,z);
        } else {
            value = sqrt(x * x + y * y + z * z);
        }

        return clamp(value, m_low, m_high);
    }

    double CImplicitClamp::get(double x, double y, double z, double w)
    {
        double value;

        if(m_source) {
            value = m_source->get(x,y,z,w);
        } else {
            value = sqrt(x * x + y * y + z * z + w * w);
        }

        return clamp(value, m_low, m_high);
    }

    double CImplicitClamp::get(double x, double y, double z, double w, double u, double v)
    {
        double value;

        if(m_source) {
            value = m_source->get(x,y,z,w,u,v);
        } else {
            value = sqrt(x * x + y * y + z * z + w * w + u * u + v * v);
        }

        return clamp(value, m_low, m_high);
    }
};
