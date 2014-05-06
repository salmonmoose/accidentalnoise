#ifndef IMPLICIT_TAN_H
#define IMPLICIT_TAN_H
#include "implicitmodulebase.h"

namespace anl
{
    class CImplicitTan : public CImplicitModuleBase
    {
        public:
        CImplicitTan();
        ~CImplicitTan();

        void setSource(CImplicitModuleBase *m);

        double get(double x, double y);
        double get(double x, double y, double z);
        double get(double x, double y, double z, double w);
        double get(double x, double y, double z, double w, double u, double v);

        protected:
        CImplicitModuleBase *m_source;
    };
};

#endif //IMPLICIT_TAN_H
