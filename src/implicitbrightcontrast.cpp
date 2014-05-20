#include "implicitbrightcontrast.h"

namespace anl
{
    CImplicitBrightContrast::CImplicitBrightContrast() : m_source(0), m_bright(0), m_threshold(0), m_factor(0){
        CImplicitModuleBase::registerNoiseInput(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource(n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseSource(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "Brightness",
            [this] (CImplicitModuleBase *n) { this->setBrightness(n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseBrightness(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "ContrastThreshold",
            [this] (CImplicitModuleBase *n) { this->setContrastThreshold(n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseContrastThreshold(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "ContrastFactor",
            [this] (CImplicitModuleBase *n) { this->setContrastFactor(n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseContrastFactor(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "Source",
            [this] (double d) { this->setSource(d); },
            [this] () -> double { return this->getDoubleSource(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "Brightness",
            [this] (double d) { this->setBrightness(d); },
            [this] () -> double { return this->getDoubleBrightness(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "ContrastThreshold",
            [this] (double d) { this->setContrastThreshold(d); },
            [this] () -> double { return this->getDoubleContrastThreshold(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "ContrastFactor",
            [this] (double d) { this->setContrastFactor(d); },
            [this] () -> double { return this->getDoubleContrastFactor(); }
        );
    }
    CImplicitBrightContrast::~CImplicitBrightContrast(){}

    void CImplicitBrightContrast::setSource(CImplicitModuleBase *m) { m_source.set(m); }
    CImplicitModuleBase *CImplicitBrightContrast::getNoiseSource() { return m_source.getNoise(); }

    void CImplicitBrightContrast::setBrightness(CImplicitModuleBase *b) { m_bright.set(b); }
    CImplicitModuleBase *CImplicitBrightContrast::getNoiseBrightness() { return m_bright.getNoise(); }

    void CImplicitBrightContrast::setContrastThreshold(CImplicitModuleBase *t) { m_threshold.set(t); }
    CImplicitModuleBase *CImplicitBrightContrast::getNoiseContrastThreshold() { return m_threshold.getNoise(); }

    void CImplicitBrightContrast::setContrastFactor(CImplicitModuleBase *t) { m_factor.set(t); }
    CImplicitModuleBase *CImplicitBrightContrast::getNoiseContrastFactor() { return m_factor.getNoise(); }

    void CImplicitBrightContrast::setSource(double v) { m_source.set(v); }
    double CImplicitBrightContrast::getDoubleSource() { return m_source.getDouble(); }

    void CImplicitBrightContrast::setBrightness(double b) { m_bright.set(b); }
    double CImplicitBrightContrast::getDoubleBrightness() { return m_bright.getDouble(); }

    void CImplicitBrightContrast::setContrastThreshold(double t) { m_threshold.set(t); }
    double CImplicitBrightContrast::getDoubleContrastThreshold() { return m_threshold.getDouble(); }

    void CImplicitBrightContrast::setContrastFactor(double t){ m_factor.set(t); }
    double CImplicitBrightContrast::getDoubleContrastFactor() { return m_factor.getDouble(); }

    double CImplicitBrightContrast::get(double x, double y)
    {
        double v=m_source.get(x,y);
        // Apply brightness
        v+=m_bright.get(x,y);

        // Subtract threshold, scale by factor, add threshold
        double threshold=m_threshold.get(x,y);
        v-=threshold;
        v*=m_factor.get(x,y);
        v+=threshold;
        return v;
    }

    double CImplicitBrightContrast::get(double x, double y, double z)
    {
        double v=m_source.get(x,y,z);
        // Apply brightness
        v+=m_bright.get(x,y,z);

        // Subtract threshold, scale by factor, add threshold
        double threshold=m_threshold.get(x,y,z);
        v-=threshold;
        v*=m_factor.get(x,y,z);
        v+=threshold;
        return v;
    }

    double CImplicitBrightContrast::get(double x, double y, double z, double w)
    {
        double v=m_source.get(x,y,z,w);
        // Apply brightness
        v+=m_bright.get(x,y,z,w);

        // Subtract threshold, scale by factor, add threshold
        double threshold=m_threshold.get(x,y,z,w);
        v-=threshold;
        v*=m_factor.get(x,y,z,w);
        v+=threshold;
        return v;
    }

    double CImplicitBrightContrast::get(double x, double y, double z, double w, double u, double v)
    {
        double c=m_source.get(x,y,z,w,u,v);
        // Apply brightness
        c+=m_bright.get(x,y,z,w,u,v);

        // Subtract threshold, scale by factor, add threshold
        double threshold=m_threshold.get(x,y,z,w,u,v);
        c-=threshold;
        c*=m_factor.get(x,y,z,w,u,v);
        c+=threshold;
        return c;
    }
};
