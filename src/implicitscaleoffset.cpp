#include "implicitscaleoffset.h"

namespace anl
{
    CImplicitScaleOffset::CImplicitScaleOffset():m_source(0), m_scale(1), m_offset(0)
    {
        CImplicitModuleBase::registerNoiseInput(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource (n); },
            [this] () -> CImplicitModuleBase *{ return this->getSource(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "Scale",
            [this] (double d) { this->setScale (d); },
            [this] () -> double { return this->getDoubleScale(); }
        );
        CImplicitModuleBase::registerDoubleInput(
            "Offset",
            [this] (double d) { this->setOffset (d); },
            [this] () -> double { return this->getDoubleOffset(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "Scale",
            [this] (CImplicitModuleBase *n) { this->setScale (n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseScale(); }
        );
        CImplicitModuleBase::registerNoiseInput(
            "Offset",
            [this] (CImplicitModuleBase *n) { this->setOffset (n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseOffset(); }
        );
    }
    CImplicitScaleOffset::~CImplicitScaleOffset(){}

    void CImplicitScaleOffset::setSource(CImplicitModuleBase *b) { m_source = b; }
    CImplicitModuleBase *CImplicitScaleOffset::getSource() { return m_source; }

    void CImplicitScaleOffset::setScale(double scale) { m_scale.set(scale); }
    double CImplicitScaleOffset::getDoubleScale() { return m_scale.getDouble(); }

    void CImplicitScaleOffset::setOffset(double offset) { m_offset.set(offset); }
    double CImplicitScaleOffset::getDoubleOffset() { return m_offset.getDouble(); }

    void CImplicitScaleOffset::setScale(CImplicitModuleBase *scale) { m_scale.set(scale); }
    CImplicitModuleBase *CImplicitScaleOffset::getNoiseScale() { return m_scale.getNoise(); }

    void CImplicitScaleOffset::setOffset(CImplicitModuleBase *offset) { m_offset.set(offset); }
    CImplicitModuleBase *CImplicitScaleOffset::getNoiseOffset() { return m_offset.getNoise(); }

    double CImplicitScaleOffset::get(double x, double y)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        return source->get(x,y)*m_scale.get(x,y)+m_offset.get(x,y);
    }

    double CImplicitScaleOffset::get(double x, double y, double z)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        return source->get(x,y,z)*m_scale.get(x,y,z)+m_offset.get(x,y,z);
    }

    double CImplicitScaleOffset::get(double x, double y, double z, double w)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        return source->get(x,y,z,w)*m_scale.get(x,y,z,w)+m_offset.get(x,y,z,w);
    }

    double CImplicitScaleOffset::get(double x, double y, double z, double w, double u, double v)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        return source->get(x,y,z,w,u,v)*m_scale.get(x,y,z,w,u,v)+m_offset.get(x,y,z,w,u,v);
    }
};
