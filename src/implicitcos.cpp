#include "implicitcos.h"
#include <math.h>

namespace anl
{
    CImplicitCos::CImplicitCos() : m_source(0){}
    CImplicitCos::~CImplicitCos(){}

    void CImplicitCos::setSource(CImplicitModuleBase *m){ m_source = m; }

    double CImplicitCos::get(double x, double y)
    {
        if (m_source) {
            return cos(m_source->get(x,y));
        } else {
            return cos(sqrt(x * x + y * y));
        }
    }
    double CImplicitCos::get(double x, double y, double z)
    {
        if (m_source) {
            return cos(m_source->get(x,y,z));
        } else {
            return cos(sqrt(x * x + y * y + z * z));
        }
    }
    double CImplicitCos::get(double x, double y, double z, double w)
    {
        if (m_source) {
            return cos(m_source->get(x,y,z,w));
        } else {
            return cos(sqrt(x * x + y * y + z * z + w * w));
        }
    }
    double CImplicitCos::get(double x, double y, double z, double w, double u, double v)
    {
        if (m_source) {
            return cos(m_source->get(x,y,z,w,u,v));
        } else {
            return cos(sqrt(x * x + y * y + z * z + w * w + u * u + v * v));
        }
    }
};
