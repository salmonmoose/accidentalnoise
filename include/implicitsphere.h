#ifndef IMPLICIT_SPHERE_H
#define IMPLICIT_SPHERE_H
#include "implicitmodulebase.h"
#include <cmath>

namespace anl
{
class CImplicitSphere : public CImplicitModuleBase
{
    public:
    CImplicitSphere();
    ~CImplicitSphere();
    void setCenter(double cx,double cy,double cz=0,double cw=0,double cu=0,double cv=0);
    void setCenterX(double cx);
    void setCenterY(double cy);
    void setCenterZ(double cz);
    void setCenterW(double cw);
    void setCenterU(double cu);
    void setCenterV(double cv);

    double getDoubleCenterX();
    double getDoubleCenterY();
    double getDoubleCenterZ();
    double getDoubleCenterW();
    double getDoubleCenterU();
    double getDoubleCenterV();

    void setCenterX(CImplicitModuleBase *cx);
    void setCenterY(CImplicitModuleBase *cy);
    void setCenterZ(CImplicitModuleBase *cz);
    void setCenterW(CImplicitModuleBase *cw);
    void setCenterU(CImplicitModuleBase *cu);
    void setCenterV(CImplicitModuleBase *cv);

    CImplicitModuleBase *getNoiseCenterX();
    CImplicitModuleBase *getNoiseCenterY();
    CImplicitModuleBase *getNoiseCenterZ();
    CImplicitModuleBase *getNoiseCenterW();
    CImplicitModuleBase *getNoiseCenterU();
    CImplicitModuleBase *getNoiseCenterV();

    void setRadius(double r);

    double getDoubleRadius();

    void setRadius(CImplicitModuleBase *r);

    CImplicitModuleBase *getNoiseRadius();

    virtual double get(double x, double y);
    virtual double get(double x, double y, double z);
    virtual double get(double x, double y, double z, double w);
    virtual double get(double x, double y, double z, double w, double u, double v);

    protected:
    CImplicitModuleBase *m_source;
    CScalarParameter m_cx, m_cy, m_cz, m_cw, m_cu, m_cv;
    CScalarParameter m_radius;
};
};

#endif
