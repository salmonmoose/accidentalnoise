#include "implicitscaleoffset.h"

namespace anl
{
    CImplicitScaleOffset::CImplicitScaleOffset(double scale, double offset):m_source(0), m_scale(scale), m_offset(offset){}
    CImplicitScaleOffset::~CImplicitScaleOffset(){}

    void CImplicitScaleOffset::setSource(CImplicitModuleBase *b){m_source.set(b);}
    void CImplicitScaleOffset::setSource(double v){m_source.set(v);}

    void CImplicitScaleOffset::setScale(double scale)
    {
        m_scale.set(scale);
    }
    void CImplicitScaleOffset::setOffset(double offset)
    {
        m_offset.set(offset);
    }
    void CImplicitScaleOffset::setScale(CImplicitModuleBase *scale)
    {
        m_scale.set(scale);
    }
    void CImplicitScaleOffset::setOffset(CImplicitModuleBase *offset)
    {
        m_offset.set(offset);
    }

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
