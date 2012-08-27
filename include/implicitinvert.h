#ifndef IMPLICIT_INVERT_H
#define IMPLICIT_INVERT_H
#include "implicitmodulebase.h"

namespace anl
{
    class CImplicitInvert : public CImplicitModuleBase
    {
        public:
        CImplicitInvert();
        ~CImplicitInvert();

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
