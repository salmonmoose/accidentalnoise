#include "implicitpow.h"
#include <math.h>

namespace anl
{
    CImplicitPow::CImplicitPow() : m_source(0), m_power(0){
        CImplicitModuleBase::registerNoiseInput(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource (n); },
            [this] () -> CImplicitModuleBase* { return this->getSource(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "Power",
            [this] (CImplicitModuleBase *n) { this->setSource (n); },
            [this] () -> CImplicitModuleBase* { return this->getSource(); }
        );
    }
    CImplicitPow::~CImplicitPow(){}

    void CImplicitPow::setSource(CImplicitModuleBase *m){ m_source = m; }
    CImplicitModuleBase *CImplicitPow::getSource() { return m_source; }

    void CImplicitPow::setPower(CImplicitModuleBase *m){ m_power = m; }
    CImplicitModuleBase *CImplicitPow::getPower() { return m_power; }

    double CImplicitPow::get(double x, double y)
    {
        double source, power;

        if (m_source) {
            source = m_source->get(x,y);
        } else {
            source = sqrt(x * x + y * y);
        }

        if (m_power) {
            power = m_power->get(x,y);
        } else {
            power = sqrt(x * x + y * y);
        }

        return pow(source, power);
    }
    double CImplicitPow::get(double x, double y, double z)
    {
        double source, power;

        if (m_source) {
            source = m_source->get(x,y,z);
        } else {
            source = sqrt(x * x + y * y + z * z);
        }

        if (m_power) {
            power = m_power->get(x,y,z);
        } else {
            power = sqrt(x * x + y * y + z * z);
        }

        return pow(source, power);
    }
    double CImplicitPow::get(double x, double y, double z, double w)
    {
        double source, power;

        if (m_source) {
            source = m_source->get(x,y,z,w);
        } else {
            source = sqrt(x * x + y * y + z * z + w * w);
        }

        if (m_power) {
            power = m_power->get(x,y,z,w);
        } else {
            power = sqrt(x * x + y * y + z * z + w * w);
        }

        return pow(source, power);
    }
    double CImplicitPow::get(double x, double y, double z, double w, double u, double v)
    {
        double source, power;

        if (m_source) {
            source = m_source->get(x,y,z,w,u,v);
        } else {
            source = sqrt(x * x + y * y + z * z + w * w + u * u + v * v);
        }

        if (m_power) {
            power = m_power->get(x,y,z,w,u,v);
        } else {
            power = sqrt(x * x + y * y + z * z + w * w + u * u + v * v);
        }

        return pow(source, power);
    }
};
