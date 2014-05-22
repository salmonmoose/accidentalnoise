#ifndef IMPLICIT_SCALEOFFSET_H
#define IMPLICIT_SCALEOFFSET_H
#include "implicitmodulebase.h"

namespace anl
{
    class CImplicitScaleOffset : public CImplicitModuleBase
{
    public:
    CImplicitScaleOffset();
    ~CImplicitScaleOffset();

    void setSource(CImplicitModuleBase *b);
    CImplicitModuleBase *getSource();

    void setScale(double scale);
    double getDoubleScale();
    void setOffset(double offset);
    double getDoubleOffset();
    
    void setScale(CImplicitModuleBase *scale);
    CImplicitModuleBase *getNoiseScale();
    void setOffset(CImplicitModuleBase *offset);
    CImplicitModuleBase *getNoiseOffset();

    double get(double x, double y);
    double get(double x, double y, double z);
    double get(double x, double y, double z, double w);
    double get(double x, double y, double z, double w, double u, double v);

    protected:
    CImplicitModuleBase *m_source;
    CScalarParameter m_scale, m_offset;
};
};

#endif
