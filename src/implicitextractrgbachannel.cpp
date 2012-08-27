#include "implicitextractrgbachannel.h"

namespace anl
{
    CImplicitExtractRGBAChannel::CImplicitExtractRGBAChannel() : m_source(0,0,0,0), m_channel(RED){}
    CImplicitExtractRGBAChannel::CImplicitExtractRGBAChannel(int channel) : m_source(0,0,0,0), m_channel(channel){}

    void CImplicitExtractRGBAChannel::setSource(CRGBAModuleBase *m)
    {
        m_source.set(m);
    }
    void CImplicitExtractRGBAChannel::setSource(float r, float g, float b, float a)
    {
        m_source.set(r,g,b,a);
    }
    void CImplicitExtractRGBAChannel::setChannel(int channel)
    {
        m_channel=channel;
        if(channel<RED) channel=RED;
        if(channel>ALPHA) channel=ALPHA;
    }
    double CImplicitExtractRGBAChannel::get(double x, double y)
    {
        SRGBA s=m_source.get(x,y);

        return s.rgba[m_channel];
    }

    double CImplicitExtractRGBAChannel::get(double x, double y, double z)
    {
        SRGBA s=m_source.get(x,y,z);

        return s.rgba[m_channel];
    }
    double CImplicitExtractRGBAChannel::get(double x, double y, double z, double w)
    {
        SRGBA s=m_source.get(x,y,z,w);

        return s.rgba[m_channel];
    }
    double CImplicitExtractRGBAChannel::get(double x, double y, double z, double w, double u, double v)
    {
        SRGBA s=m_source.get(x,y,z,w,u,v);

        return s.rgba[m_channel];
    }
};
