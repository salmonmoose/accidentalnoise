#ifndef IMPLICIT_SIN_H
#define IMPLICIT_SIN_H
#include "implicitmodulebase.h"

namespace anl
{
    class CImplicitSin : public CImplicitModuleBase
    {
        public:
        CImplicitSin();
        ~CImplicitSin();

        void setSource(CImplicitModuleBase *m);

        double get(double x, double y);
        double get(double x, double y, double z);
        double get(double x, double y, double z, double w);
        double get(double x, double y, double z, double w, double u, double v);

        protected:
        CImplicitModuleBase *m_source;
    };
};

#endif

