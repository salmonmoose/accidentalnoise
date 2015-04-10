#include "implicittiers.h"
#include "utility.h"
#include <math.h>

namespace anl
{
    CImplicitTiers::CImplicitTiers() : m_source(0), m_numtiers(0), m_smooth(true) 
    {
        CImplicitModuleBase::NoiseInputs.create(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource(n); },
            [this] () -> CImplicitModuleBase *{ return this->getSource(); }
        );

        CImplicitModuleBase::IntInputs.create(
            "Tiers",
            [this] (int i) { this->setNumTiers(i); },
            [this] () -> int { return this->getNumTiers(); }
        );

        //TODO Need Bool Type
    }

    CImplicitTiers::CImplicitTiers(int numtiers, bool smooth) : m_source(0), m_numtiers(numtiers), m_smooth(smooth){}
    CImplicitTiers::~CImplicitTiers(){}

    void CImplicitTiers::setSource(CImplicitModuleBase *m) { m_source = m; }
    CImplicitModuleBase *CImplicitTiers::getSource() { return m_source; }

    void CImplicitTiers::setNumTiers(int numtiers) { m_numtiers = numtiers; }
    int CImplicitTiers::getNumTiers() { return m_numtiers; }

    void CImplicitTiers::setSmooth(bool smooth) { m_smooth = smooth; }
    bool CImplicitTiers::getSmooth() { return m_smooth; }

    double CImplicitTiers::get(double x, double y)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        int numsteps=m_numtiers;
        if(m_smooth) --numsteps;
        double val=source->get(x,y);
        double Tb=floor(val*(double)(numsteps));
        double Tt=Tb+1.0;
        double t=val*(double)(numsteps)-Tb;
        Tb/=(double)(numsteps);
        Tt/=(double)(numsteps);
        double u;
        if(m_smooth) u=quintic_blend(t);
        else u=0.0;
        return Tb+u*(Tt-Tb);
    }
    double CImplicitTiers::get(double x, double y, double z)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        int numsteps=m_numtiers;
        if(m_smooth) --numsteps;
        double val=source->get(x,y,z);
        double Tb=floor(val*(double)(numsteps));
        double Tt=Tb+1.0;
        double t=val*(double)(numsteps)-Tb;
        Tb/=(double)(numsteps);
        Tt/=(double)(numsteps);
        double u;
        if(m_smooth) u=quintic_blend(t);
        else u=0.0;
        return Tb+u*(Tt-Tb);
    }
    double CImplicitTiers::get(double x, double y, double z, double w)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        int numsteps=m_numtiers;
        if(m_smooth) --numsteps;
        double val=source->get(x,y,z,w);
        double Tb=floor(val*(double)(numsteps));
        double Tt=Tb+1.0;
        double t=val*(double)(numsteps)-Tb;
        Tb/=(double)(numsteps);
        Tt/=(double)(numsteps);
        double u;
        if(m_smooth) u=quintic_blend(t);
        else u=0.0;
        return Tb+u*(Tt-Tb);
    }

    double CImplicitTiers::get(double x, double y, double z, double w, double u, double v)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        int numsteps=m_numtiers;
        if(m_smooth) --numsteps;
        double val=source->get(x,y,z,w,u,v);
        double Tb=floor(val*(double)(numsteps));
        double Tt=Tb+1.0;
        double t=val*(double)(numsteps)-Tb;
        Tb/=(double)(numsteps);
        Tt/=(double)(numsteps);
        double s;
        if(m_smooth) s=quintic_blend(t);
        else s=0.0;
        return Tb+s*(Tt-Tb);
    }
};
