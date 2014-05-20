#include "implicitinvert.h"

namespace anl
{
    CImplicitInvert::CImplicitInvert():m_source(0)
    {
        CImplicitModuleBase::registerNoiseInput(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource(n); },
            [this] () -> CImplicitModuleBase* { return this->getSource(); }
        );
    }
    
    CImplicitInvert::~CImplicitInvert(){}

    void CImplicitInvert::setSource(CImplicitModuleBase *m){ m_source=m; }
    CImplicitModuleBase *CImplicitInvert::getSource() { return m_source; }

    double CImplicitInvert::get(double x, double y)
    {
        if(!m_source) return 0;
        return -m_source->get(x,y);
    }

    double CImplicitInvert::get(double x, double y, double z)
    {
        if(!m_source) return 0;
        return -m_source->get(x,y,z);
    }

    double CImplicitInvert::get(double x, double y, double z, double w)
    {
        if(!m_source) return 0;
        return -m_source->get(x,y,z,w);
    }

    double CImplicitInvert::get(double x, double y, double z, double w, double u, double v)
    {
        if(!m_source) return 0;
        return -m_source->get(x,y,z,w,u,v);
    }
};
