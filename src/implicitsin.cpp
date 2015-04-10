#include "implicitsin.h"
#include <math.h>

namespace anl
{
    CImplicitSin::CImplicitSin() : m_source(0){
        CImplicitModuleBase::NoiseInputs.create(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource (n); },
            [this] () -> CImplicitModuleBase* { return this->getSource(); }
        );
    }
    CImplicitSin::~CImplicitSin(){}

    void CImplicitSin::setSource(CImplicitModuleBase *m){ m_source = m; }
    CImplicitModuleBase *CImplicitSin::getSource() { return m_source; }

    double CImplicitSin::get(double x, double y)
    {
        if (m_source) {
            return sin(m_source->get(x,y));
        } else {
            return sin(sqrt(x * x + y * y));
        }
    }
    double CImplicitSin::get(double x, double y, double z)
    {
        if (m_source) {
            return sin(m_source->get(x,y,z));
        } else {
            return sin(sqrt(x * x + y * y + z * z));
        }
    }
    double CImplicitSin::get(double x, double y, double z, double w)
    {
        if (m_source) {
            return sin(m_source->get(x,y,z,w));
        } else {
            return sin(sqrt(x * x + y * y + z * z + w * w));
        }
    }
    double CImplicitSin::get(double x, double y, double z, double w, double u, double v)
    {
        if (m_source) {
            return sin(m_source->get(x,y,z,w,u,v));
        } else {
            return sin(sqrt(x * x + y * y + z * z + w * w + u * u + v * v));
        }
    }
};

