#include "rgbablend.h"

namespace anl
{
    CRGBABlend::CRGBABlend() : m_low(0,0,0,0), m_high(0,0,0,0), m_control(0){}
    CRGBABlend::~CRGBABlend(){}

    void CRGBABlend::setLowSource(CRGBAModuleBase *m)
    {
        m_low.set(m);
    }

    void CRGBABlend::setHighSource(CRGBAModuleBase *m)
    {
        m_high.set(m);
    }

    void CRGBABlend::setLowSource(float r, float g, float b, float a)
    {
        m_low.set(r,g,b,a);
    }

    void CRGBABlend::setHighSource(float r, float g, float b, float a)
    {
        m_high.set(r,g,b,a);
    }

    void CRGBABlend::setControlSource(CImplicitModuleBase *m)
    {
        m_control.set(m);
    }

    void CRGBABlend::setControlSource(double v)
    {
        m_control.set(v);
    }

    SRGBA CRGBABlend::get(double x, double y)
    {
        SRGBA low=m_low.get(x,y);
        SRGBA high=m_high.get(x,y);
        double control=m_control.get(x,y);

        return SRGBA(
            (float)(low.rgba[0]+control*(high.rgba[0]-low.rgba[0])),
            (float)(low.rgba[1]+control*(high.rgba[1]-low.rgba[1])),
            (float)(low.rgba[2]+control*(high.rgba[2]-low.rgba[2])),
            (float)(low.rgba[3]+control*(high.rgba[3]-low.rgba[3])));
    }

    SRGBA CRGBABlend::get(double x, double y, double z)
    {
        SRGBA low=m_low.get(x,y,z);
        SRGBA high=m_high.get(x,y,z);
        double control=m_control.get(x,y,z);

        return SRGBA(
            (float)(low.rgba[0]+control*(high.rgba[0]-low.rgba[0])),
            (float)(low.rgba[1]+control*(high.rgba[1]-low.rgba[1])),
            (float)(low.rgba[2]+control*(high.rgba[2]-low.rgba[2])),
            (float)(low.rgba[3]+control*(high.rgba[3]-low.rgba[3])));
    }

    SRGBA CRGBABlend::get(double x, double y, double z, double w)
    {
        SRGBA low=m_low.get(x,y,z,w);
        SRGBA high=m_high.get(x,y,z,w);
        double control=m_control.get(x,y,z,w);

        return SRGBA(
            (float)(low.rgba[0]+control*(high.rgba[0]-low.rgba[0])),
            (float)(low.rgba[1]+control*(high.rgba[1]-low.rgba[1])),
            (float)(low.rgba[2]+control*(high.rgba[2]-low.rgba[2])),
            (float)(low.rgba[3]+control*(high.rgba[3]-low.rgba[3])));
    }
    SRGBA CRGBABlend::get(double x, double y, double z, double w, double u, double v)
    {
        SRGBA low=m_low.get(x,y,z,w,u,v);
        SRGBA high=m_high.get(x,y,z,w,u,v);
        double control=m_control.get(x,y,z,w,u,v);

        return SRGBA(
            (float)(low.rgba[0]+control*(high.rgba[0]-low.rgba[0])),
            (float)(low.rgba[1]+control*(high.rgba[1]-low.rgba[1])),
            (float)(low.rgba[2]+control*(high.rgba[2]-low.rgba[2])),
            (float)(low.rgba[3]+control*(high.rgba[3]-low.rgba[3])));
    }
};
