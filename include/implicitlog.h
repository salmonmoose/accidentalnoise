#ifndef IMPLICIT_LOG_H
#define IMPLICIT_LOG_H
#include "implicitmodulebase.h"

namespace anl
{
    class CImplicitLog : public CImplicitModuleBase
    {
        public:
        CImplicitLog();
        ~CImplicitLog();

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
