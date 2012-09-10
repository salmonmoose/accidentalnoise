#include "implicitscaleoffset.h"

namespace anl
{
    bool ScaleOffset_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitScaleOffset>("ScaleOffset");

    CImplicitScaleOffset::CImplicitScaleOffset():m_source(0), m_scale(1), m_offset(0)
    {
        CImplicitModuleBase::registerDoubleInput("Source",[this] (double d) { this->setSource (d); });
        CImplicitModuleBase::registerDoubleInput("Scale",[this] (double d) { this->setScale (d); });
        CImplicitModuleBase::registerDoubleInput("Offset",[this] (double d) { this->setOffset (d); });

        CImplicitModuleBase::registerNoiseInput("Source",[this] (CImplicitModuleBase *n) { this->setSource (n); });
        CImplicitModuleBase::registerNoiseInput("Scale",[this] (CImplicitModuleBase *n) { this->setScale (n); });
        CImplicitModuleBase::registerNoiseInput("Offset",[this] (CImplicitModuleBase *n) { this->setOffset (n); });
    }
    CImplicitScaleOffset::~CImplicitScaleOffset(){}

    void CImplicitScaleOffset::setSource(double v){m_source.set(v);}
    void CImplicitScaleOffset::setScale(double scale) { m_scale.set(scale); }
    void CImplicitScaleOffset::setOffset(double offset) { m_offset.set(offset); }

    void CImplicitScaleOffset::setSource(CImplicitModuleBase *b){m_source.set(b);}
    void CImplicitScaleOffset::setScale(CImplicitModuleBase *scale) { m_scale.set(scale); }
    void CImplicitScaleOffset::setOffset(CImplicitModuleBase *offset) { m_offset.set(offset); }

    double CImplicitScaleOffset::get(double x, double y)
    {

        return m_source.get(x,y)*m_scale.get(x,y)+m_offset.get(x,y);
    }

    double CImplicitScaleOffset::get(double x, double y, double z)
    {


        return m_source.get(x,y,z)*m_scale.get(x,y,z)+m_offset.get(x,y,z);
    }

    double CImplicitScaleOffset::get(double x, double y, double z, double w)
    {


        return m_source.get(x,y,z,w)*m_scale.get(x,y,z,w)+m_offset.get(x,y,z,w);
    }

    double CImplicitScaleOffset::get(double x, double y, double z, double w, double u, double v)
    {


        return m_source.get(x,y,z,w,u,v)*m_scale.get(x,y,z,w,u,v)+m_offset.get(x,y,z,w,u,v);
    }
};
