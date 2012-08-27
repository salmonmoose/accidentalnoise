#include "rgbanormalize.h"

#include <math.h>

namespace anl
{
    CRGBANormalize::CRGBANormalize() : m_source(0,0,0,0){}
    CRGBANormalize::~CRGBANormalize(){}

    void CRGBANormalize::setSource(CRGBAModuleBase *m){m_source.set(m);}
    void CRGBANormalize::setSource(float r, float g, float b, float a){m_source.set(r,g,b,a);}

    SRGBA CRGBANormalize::get(double x, double y)
    {
        SRGBA s=m_source.get(x,y);
        float len=s.rgba[0]*s.rgba[0] + s.rgba[1]*s.rgba[1] + s.rgba[2]*s.rgba[2];
        if(len==0.0)
        {
            return SRGBA(0,0,0,0);
        }
        len=sqrtf(len);
        return SRGBA(s.rgba[0]/len, s.rgba[1]/len, s.rgba[2]/len, s.rgba[3]);
    }
    SRGBA CRGBANormalize::get(double x, double y, double z)
    {
        SRGBA s=m_source.get(x,y,z);
        float len=s.rgba[0]*s.rgba[0] + s.rgba[1]*s.rgba[1] + s.rgba[2]*s.rgba[2];
        if(len==0.0)
        {
            return SRGBA(0,0,0,0);
        }
        len=sqrtf(len);
        return SRGBA(s.rgba[0]/len, s.rgba[1]/len, s.rgba[2]/len, s.rgba[3]);
    }
    SRGBA CRGBANormalize::get(double x, double y, double z, double w)
    {
        SRGBA s=m_source.get(x,y,z,w);
        float len=s.rgba[0]*s.rgba[0] + s.rgba[1]*s.rgba[1] + s.rgba[2]*s.rgba[2];
        if(len==0.0)
        {
            return SRGBA(0,0,0,0);
        }
        len=sqrtf(len);
        return SRGBA(s.rgba[0]/len, s.rgba[1]/len, s.rgba[2]/len, s.rgba[3]);
    }
    SRGBA CRGBANormalize::get(double x, double y, double z, double w, double u, double v)
    {
        SRGBA s=m_source.get(x,y,z,w,u,v);
        float len=s.rgba[0]*s.rgba[0] + s.rgba[1]*s.rgba[1] + s.rgba[2]*s.rgba[2];
        if(len==0.0)
        {
            return SRGBA(0,0,0,0);
        }
        len=sqrtf(len);
        return SRGBA(s.rgba[0]/len, s.rgba[1]/len, s.rgba[2]/len, s.rgba[3]);
    }
};
