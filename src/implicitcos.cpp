#include "implicitcos.h"
#include <math.h>

namespace anl
{
    CImplicitCos::CImplicitCos() : m_source(0){}
    CImplicitCos::~CImplicitCos(){}

    void CImplicitCos::setSource(double v){m_source.set(v);}
    void CImplicitCos::setSource(CImplicitModuleBase *m){m_source.set(m);}

    double CImplicitCos::get(double x, double y)
    {
//        if (m_source != 0) {
//            return cos(m_source.get(x,y));
//        } else {
//            return cos((x + y) / 2);
//        }

        return cos((x + y) / 2);
    }
    double CImplicitCos::get(double x, double y, double z)
    {
//        if (m_source != 0) {
//            return cos(m_source.get(x,y,z));
//        } else {
//            return cos((x + y + z) / 3);
//        }

        return cos((x + y + z) / 3);
    }
    double CImplicitCos::get(double x, double y, double z, double w)
    {
//        if (m_source != 0) {
//            return cos(m_source.get(x,y,z,w));
//        } else {
//            return cos((x + y + z + w) / 4);
//        }

        return cos((x + y + z + w) / 4);
    }
    double CImplicitCos::get(double x, double y, double z, double w, double u, double v)
    {
//        if (m_source != 0) {
//            return cos(m_source.get(x,y,z,w,u,v));
//        } else {
//            return cos((x + y + z + w + u + v) / 6);
//        }

        return cos((x + y + z + w + u + v) / 6);
    }
};
