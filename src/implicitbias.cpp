#include "implicitbias.h"

namespace anl
{
    CImplicitBias::CImplicitBias() : m_source(0), m_offset(0){
        CImplicitModuleBase::NoiseInputs.create(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource(n); },
            [this] () -> CImplicitModuleBase* { return this->getSource(); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "Offset",
            [this] (CImplicitModuleBase *n) { this->setOffset(n); },
            [this] () -> CImplicitModuleBase* { return this->getOffset(); }
        );
    }
    CImplicitBias::~CImplicitBias(){}

    void CImplicitBias::setSource(CImplicitModuleBase *m) { m_source = m; }
    CImplicitModuleBase *CImplicitBias::getSource() { return m_source; }

    void CImplicitBias::setOffset(CImplicitModuleBase *m) { m_offset = m;}
    CImplicitModuleBase *CImplicitBias::getOffset() { return m_offset; }

    double CImplicitBias::get(double x, double y)
    {
        double source, offset;

        if (m_source) {
            source = m_source->get(x,y);
        } else {
            source = sqrt(x * x + y * y);
        }

        if (m_offset) {
            offset = m_offset->get(x,y);
        } else {
            offset = sqrt(x * x + y * y);
        }

        return bias(offset, source);
    }

    double CImplicitBias::get(double x, double y, double z)
    {
        double source, offset;

        if (m_source) {
            source = m_source->get(x,y,z);
        } else {
            source = sqrt(x * x + y * y + z * z);
        }

        if (m_offset) {
            offset = m_offset->get(x,y,z);
        } else {
            offset = sqrt(x * x + y * y + z * z);
        }

        return bias(offset, source);
    }

    double CImplicitBias::get(double x, double y, double z, double w)
    {
        double source, offset;

        if (m_source) {
            source = m_source->get(x,y,z,w);
        } else {
            source = sqrt(x * x + y * y + z * z + w * w);
        }

        if (m_offset) {
            offset = m_offset->get(x,y,z,w);
        } else {
            offset = sqrt(x * x + y * y + z * z + w * w);
        }

        return bias(offset, source);
    }

    double CImplicitBias::get(double x, double y, double z, double w, double u, double v)
    {
        double source, offset;

        if (m_source) {
            source = m_source->get(x,y,z,w,u,v);
        } else {
            source = sqrt(x * x + y * y + z * z + w * w + u * u + v * v);
        }

        if (m_offset) {
            offset = m_offset->get(x,y,z,w,u,v);
        } else {
            offset = sqrt(x * x + y * y + z * z + w * w + u * u + v * v);
        }

        return bias(offset, source);
    }
};
