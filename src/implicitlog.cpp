#include "implicitlog.h"
#include <math.h>

namespace anl
{
    CImplicitLog::CImplicitLog() : m_source(0){
        CImplicitModuleBase::NoiseInputs.create(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource (n); },
            [this] () -> CImplicitModuleBase* { return this->getSource(); }
        );
    }
    CImplicitLog::~CImplicitLog(){}

    void CImplicitLog::setSource(CImplicitModuleBase *m){ m_source = m; }
    CImplicitModuleBase *CImplicitLog::getSource() { return m_source; }

    double CImplicitLog::get(double x, double y)
    {
        if (m_source) {
            return log(m_source->get(x,y));
        } else {
            return log(sqrt(x * x + y * y));
        }
    }
    double CImplicitLog::get(double x, double y, double z)
    {
        if (m_source) {
            return log(m_source->get(x,y,z));
        } else {
            return log(sqrt(x * x + y * y + z * z));
        }
    }
    double CImplicitLog::get(double x, double y, double z, double w)
    {
        if (m_source) {
            return log(m_source->get(x,y,z,w));
        } else {
            return log(sqrt(x * x + y * y + z * z + w * w));
        }
    }
    double CImplicitLog::get(double x, double y, double z, double w, double u, double v)
    {
        if (m_source) {
            return log(m_source->get(x,y,z,w,u,v));
        } else {
            return log(sqrt(x * x + y * y + z * z + w * w + u * u + v * v));
        }
    }
};
