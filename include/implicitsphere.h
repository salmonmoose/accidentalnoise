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
    void setCenterX(CImplicitModuleBase *cx);
    void setCenterY(CImplicitModuleBase *cy);
    void setCenterZ(CImplicitModuleBase *cz);
    void setCenterW(CImplicitModuleBase *cw);
    void setCenterU(CImplicitModuleBase *cu);
    void setCenterV(CImplicitModuleBase *cv);

    void setRadius(double r);
    void setRadius(CImplicitModuleBase *r);

    double get(double x, double y);
    double get(double x, double y, double z);
    double get(double x, double y, double z, double w);
    double get(double x, double y, double z, double w, double u, double v);

    protected:
    CImplicitModuleBase *m_source;
    CScalarParameter m_cx, m_cy, m_cz, m_cw, m_cu, m_cv;
    CScalarParameter m_radius;

};
};

#endif
