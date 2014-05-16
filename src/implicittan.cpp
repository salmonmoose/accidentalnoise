#include "implicittan.h"
#include <math.h>

namespace anl
{
    CImplicitTan::CImplicitTan() : m_source(0){
        CImplicitModuleBase::registerNoiseInput(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource (n); },
            [this] () -> CImplicitModuleBase* { return this->getSource(); }
        );
    }
    CImplicitTan::~CImplicitTan(){}

    void CImplicitTan::setSource(CImplicitModuleBase *m){ m_source = m; }
    CImplicitModuleBase *CImplicitTan::getSource() { return m_source; }

    double CImplicitTan::get(double x, double y)
    {
        if (m_source) {
            return tan(m_source->get(x,y));
        } else {
            return tan(sqrt(x * x + y * y));
        }
    }
    double CImplicitTan::get(double x, double y, double z)
    {
        if (m_source) {
            return tan(m_source->get(x,y,z));
        } else {
            return tan(sqrt(x * x + y * y + z * z));
        }
    }
    double CImplicitTan::get(double x, double y, double z, double w)
    {
        if (m_source) {
            return tan(m_source->get(x,y,z,w));
        } else {
            return tan(sqrt(x * x + y * y + z * z + w * w));
        }
    }
    double CImplicitTan::get(double x, double y, double z, double w, double u, double v)
    {
        if (m_source) {
            return tan(m_source->get(x,y,z,w,u,v));
        } else {
            return tan(sqrt(x * x + y * y + z * z + w * w + u * u + v * v));
        }
    }
};
