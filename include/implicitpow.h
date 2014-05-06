#ifndef IMPLICIT_Pow_H
#define IMPLICIT_Pow_H
#include "implicitmodulebase.h"

namespace anl
{
    class CImplicitPow : public CImplicitModuleBase
    {
        public:
        CImplicitPow();
        ~CImplicitPow();

        void setSource(CImplicitModuleBase *m);
        void setPower(CImplicitModuleBase *m);

        double get(double x, double y);
        double get(double x, double y, double z);
        double get(double x, double y, double z, double w);
        double get(double x, double y, double z, double w, double u, double v);


        protected:
        CImplicitModuleBase *m_source;
        CImplicitModuleBase *m_power;
    };
};

#endif
