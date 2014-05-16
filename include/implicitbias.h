#ifndef IMPLICIT_BIAS_H
#define IMPLICIT_BIAS_H
#include "implicitmodulebase.h"
#include "utility.h"

namespace anl
{
    class CImplicitBias : public CImplicitModuleBase
{
    public:
    CImplicitBias();
    ~CImplicitBias();

    void setSource(CImplicitModuleBase *m);
    CImplicitModuleBase *getSource();
    void setOffset(CImplicitModuleBase *m);
    CImplicitModuleBase *getOffset();

    double get(double x, double y);
    double get(double x, double y, double z);
    double get(double x, double y, double z, double w);
    double get(double x, double y, double z, double w, double u, double v);

    protected:
    CImplicitModuleBase *m_source;
    CImplicitModuleBase *m_offset;
};
};

#endif
