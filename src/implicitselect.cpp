#include "implicitselect.h"
#include "utility.h"

namespace anl
{
    CImplicitSelect::CImplicitSelect() : CImplicitModuleBase(), m_low(0), m_high(0), m_control(0), m_threshold(0.0), m_falloff(0.0)
    {
        CImplicitModuleBase::registerNoiseInput(
            "Low",
            [this] (CImplicitModuleBase *n) { this->setLowSource (n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseLowSource(); }
        );
        CImplicitModuleBase::registerNoiseInput(
            "High",
            [this] (CImplicitModuleBase *n) { this->setHighSource (n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseHighSource(); }
        );
        CImplicitModuleBase::registerNoiseInput(
            "Control",
            [this] (CImplicitModuleBase *n) { this->setControlSource (n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseControlSource(); }
        );
        CImplicitModuleBase::registerNoiseInput(
            "Threshold",
            [this] (CImplicitModuleBase *n) { this->setThreshold (n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseThreshold(); }
        );
        CImplicitModuleBase::registerNoiseInput(
            "Falloff",
            [this] (CImplicitModuleBase *n) { this->setFalloff (n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseFalloff(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "Low",
            [this] (double d) { this->setLowSource (d); },
            [this] () -> double { return this->getDoubleLowSource(); }
        );
        CImplicitModuleBase::registerDoubleInput(
            "High",
            [this] (double d) { this->setHighSource (d); },
            [this] () -> double { return this->getDoubleHighSource(); }
        );
        CImplicitModuleBase::registerDoubleInput(
            "Control",
            [this] (double d) { this->setControlSource (d); },
            [this] () -> double { return this->getDoubleControlSource(); }
        );
        CImplicitModuleBase::registerDoubleInput(
            "Threshold",
            [this] (double d) { this->setThreshold (d); },
            [this] () -> double { return this->getDoubleThreshold(); }
        );
        CImplicitModuleBase::registerDoubleInput(
            "Falloff",
            [this] (double d) { this->setFalloff (d); },
            [this] () -> double { return this->getDoubleFalloff(); }
        );
    }

    CImplicitSelect::~CImplicitSelect(){}

    void CImplicitSelect::setLowSource(CImplicitModuleBase *b) { m_low.set(b); }
    void CImplicitSelect::setHighSource(CImplicitModuleBase *b) { m_high.set(b); }
    void CImplicitSelect::setControlSource(CImplicitModuleBase *b) { m_control.set(b); }
    void CImplicitSelect::setThreshold(CImplicitModuleBase *m) { m_threshold.set(m); }
    void CImplicitSelect::setFalloff(CImplicitModuleBase *m) { m_falloff.set(m); }
    CImplicitModuleBase *CImplicitSelect::getNoiseLowSource() { return m_low.getNoise(); }
    CImplicitModuleBase *CImplicitSelect::getNoiseHighSource() { return m_high.getNoise(); }
    CImplicitModuleBase *CImplicitSelect::getNoiseControlSource() { return m_control.getNoise(); }
    CImplicitModuleBase *CImplicitSelect::getNoiseThreshold() { return m_threshold.getNoise(); }
    CImplicitModuleBase *CImplicitSelect::getNoiseFalloff() { return m_falloff.getNoise(); }

    void CImplicitSelect::setLowSource(double b) { m_low.set(b); }
    void CImplicitSelect::setHighSource(double b) { m_high.set(b); }
    void CImplicitSelect::setControlSource(double b) { m_control.set(b); }
    void CImplicitSelect::setThreshold(double t) { m_threshold.set(t); }
    void CImplicitSelect::setFalloff(double f) { m_falloff.set(f); }
    double CImplicitSelect::getDoubleLowSource() { return m_low.getDouble(); }
    double CImplicitSelect::getDoubleHighSource() { return m_high.getDouble(); }
    double CImplicitSelect::getDoubleControlSource() { return m_control.getDouble(); }
    double CImplicitSelect::getDoubleThreshold() { return m_threshold.getDouble(); }
    double CImplicitSelect::getDoubleFalloff() { return m_falloff.getDouble(); }

    double CImplicitSelect::get(double x, double y)
    {
        double control=m_control.get(x,y);
        double falloff=m_falloff.get(x,y);
        double threshold=m_threshold.get(x,y);

        if(falloff>0.0)
        {
            if(control < (threshold-falloff))
            {
                // Lies outside of falloff area below threshold, return first source
                return m_low.get(x,y);
            }
            else if(control > (threshold+falloff))
            {
                // Lise outside of falloff area above threshold, return second source
                return m_high.get(x,y);
            }
            else
            {
                // Lies within falloff area.
                double lower=threshold-falloff;
                double upper=threshold+falloff;
                double blend=quintic_blend((control-lower)/(upper-lower));
                return lerp(blend,m_low.get(x,y),m_high.get(x,y));
            }
        }
        else
        {
            if(control<threshold) return m_low.get(x,y);
            else return m_high.get(x,y);
        }
    }

    double CImplicitSelect::get(double x, double y, double z)
    {
        double control=m_control.get(x,y,z);
        double falloff=m_falloff.get(x,y,z);
        double threshold=m_threshold.get(x,y,z);

        if(falloff>0.0)
        {
            if(control < (threshold-falloff))
            {
                // Lies outside of falloff area below threshold, return first source
                return m_low.get(x,y,z);
            }
            else if(control > (threshold+falloff))
            {
                // Lise outside of falloff area above threshold, return second source
                return m_high.get(x,y,z);
            }
            else
            {
                // Lies within falloff area.
                double lower=threshold-falloff;
                double upper=threshold+falloff;
                double blend=quintic_blend((control-lower)/(upper-lower));
                return lerp(blend,m_low.get(x,y,z),m_high.get(x,y,z));
            }
        }
        else
        {
            if(control<threshold) return m_low.get(x,y,z);
            else return m_high.get(x,y,z);
        }
    }

    double CImplicitSelect::get(double x, double y, double z, double w)
    {
        double control=m_control.get(x,y,z,w);
        double falloff=m_falloff.get(x,y,z,w);
        double threshold=m_threshold.get(x,y,z,w);

        if(falloff>0.0)
        {
            if(control < (threshold-falloff))
            {
                // Lies outside of falloff area below threshold, return first source
                return m_low.get(x,y,z,w);
            }
            else if(control > (threshold+falloff))
            {
                // Lise outside of falloff area above threshold, return second source
                return m_high.get(x,y,z,w);
            }
            else
            {
                // Lies within falloff area.
                double lower=threshold-falloff;
                double upper=threshold+falloff;
                double blend=quintic_blend((control-lower)/(upper-lower));
                return lerp(blend,m_low.get(x,y,z,w),m_high.get(x,y,z,w));
            }
        }
        else
        {
            if(control<threshold) return m_low.get(x,y,z,w);
            else return m_high.get(x,y,z,w);
        }
    }

    double CImplicitSelect::get(double x, double y, double z, double w, double u, double v)
    {
        double control=m_control.get(x,y,z,w,u,v);
        double falloff=m_falloff.get(x,y,z,w,u,v);
        double threshold=m_threshold.get(x,y,z,w,u,v);

        if(falloff>0.0)
        {
            if(control < (threshold-falloff))
            {
                // Lies outside of falloff area below threshold, return first source
                return m_low.get(x,y,z,w,u,v);
            }
            else if(control > (threshold+falloff))
            {
                // Lise outside of falloff area above threshold, return second source
                return m_high.get(x,y,z,w,u,v);
            }
            else
            {
                // Lies within falloff area.
                double lower=threshold-falloff;
                double upper=threshold+falloff;
                double blend=quintic_blend((control-lower)/(upper-lower));
                return lerp(blend,m_low.get(x,y,z,w,u,v),m_high.get(x,y,z,w,u,v));
            }
        }
        else
        {
            if(control<threshold) return m_low.get(x,y,z,w,u,v);
            else return m_high.get(x,y,z,w,u,v);
        }
    }
};
