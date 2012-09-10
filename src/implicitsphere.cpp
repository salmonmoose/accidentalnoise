#include "implicitsphere.h"
#include <iostream>
#include <functional>

namespace anl
{
    bool Sphere_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitSphere>("Sphere");

    CImplicitSphere::CImplicitSphere() : CImplicitModuleBase(),m_source(0), m_cx(0), m_cy(0), m_cz(0), m_cw(0), m_cu(0), m_cv(0), m_radius(1) {
        CImplicitModuleBase::registerDoubleInput("Radius",[this] (double d) { this->setRadius (d); });
        CImplicitModuleBase::registerNoiseInput("Radius", [this] (CImplicitModuleBase *n) { this->setRadius (n); });

        CImplicitModuleBase::registerDoubleInput("CenterX",[this] (double v) { this->setCenterX (v); });
        CImplicitModuleBase::registerDoubleInput("CenterY",[this] (double v) { this->setCenterY (v); });
        CImplicitModuleBase::registerDoubleInput("CenterZ",[this] (double v) { this->setCenterZ (v); });
        CImplicitModuleBase::registerDoubleInput("CenterU",[this] (double v) { this->setCenterU (v); });
        CImplicitModuleBase::registerDoubleInput("CenterV",[this] (double v) { this->setCenterV (v); });
        CImplicitModuleBase::registerDoubleInput("CenterW",[this] (double v) { this->setCenterW (v); });

        CImplicitModuleBase::registerNoiseInput("CenterX",[this] (CImplicitModuleBase *n) { this->setCenterX (n); });
        CImplicitModuleBase::registerNoiseInput("CenterY",[this] (CImplicitModuleBase *n) { this->setCenterY (n); });
        CImplicitModuleBase::registerNoiseInput("CenterZ",[this] (CImplicitModuleBase *n) { this->setCenterZ (n); });
        CImplicitModuleBase::registerNoiseInput("CenterU",[this] (CImplicitModuleBase *n) { this->setCenterU (n); });
        CImplicitModuleBase::registerNoiseInput("CenterV",[this] (CImplicitModuleBase *n) { this->setCenterV (n); });
        CImplicitModuleBase::registerNoiseInput("CenterW",[this] (CImplicitModuleBase *n) { this->setCenterW (n); });
    }
    
    CImplicitSphere::~CImplicitSphere(){}

    void CImplicitSphere::setCenter(double cx,double cy,double cz,double cw,double cu,double cv)
    {
        m_cx=cx; m_cy=cy; m_cz=cz; m_cw=cw; m_cu=cu; m_cv=cv;
    }
    void CImplicitSphere::setCenterX(double cx){m_cx.set(cx);}
    void CImplicitSphere::setCenterY(double cy){m_cy.set(cy);}
    void CImplicitSphere::setCenterZ(double cz){m_cz.set(cz);}
    void CImplicitSphere::setCenterW(double cw){m_cw.set(cw);}
    void CImplicitSphere::setCenterU(double cu){m_cu.set(cu);}
    void CImplicitSphere::setCenterV(double cv){m_cv.set(cv);}
    void CImplicitSphere::setCenterX(CImplicitModuleBase *cx){m_cx.set(cx);}
    void CImplicitSphere::setCenterY(CImplicitModuleBase *cy){m_cy.set(cy);}
    void CImplicitSphere::setCenterZ(CImplicitModuleBase *cz){m_cz.set(cz);}
    void CImplicitSphere::setCenterW(CImplicitModuleBase *cw){m_cw.set(cw);}
    void CImplicitSphere::setCenterU(CImplicitModuleBase *cu){m_cu.set(cu);}
    void CImplicitSphere::setCenterV(CImplicitModuleBase *cv){m_cv.set(cv);}
    
    void CImplicitSphere::setRadius(double r){m_radius.set(r);}
    void CImplicitSphere::setRadius(CImplicitModuleBase *r){m_radius.set(r);}

    double CImplicitSphere::get(double x, double y)
    {
        double dx=x-m_cx.get(x,y), dy=y-m_cy.get(x,y);
        double len=sqrt(dx*dx+dy*dy);
        double radius=m_radius.get(x,y);
        double i=(radius-len)/radius;
        if(i<0) i=0;
        if(i>1) i=1;

        return i;
    }

    double CImplicitSphere::get(double x, double y, double z)
    {
        double dx=x-m_cx.get(x,y,z), dy=y-m_cy.get(x,y,z), dz=z-m_cz.get(x,y,z);
        double len=sqrt(dx*dx+dy*dy+dz*dz);
        double radius=m_radius.get(x,y,z);
        double i=(radius-len)/radius;
        if(i<0) i=0;
        if(i>1) i=1;

        return i;
    }

    double CImplicitSphere::get(double x, double y, double z, double w)
    {
        double dx=x-m_cx.get(x,y,z,w), dy=y-m_cy.get(x,y,z,w), dz=z-m_cz.get(x,y,z,w), dw=w-m_cw.get(x,y,z,w);
        double len=sqrt(dx*dx+dy*dy+dz*dz+dw*dw);
        double radius=m_radius.get(x,y,z,w);
        double i=(radius-len)/radius;
        if(i<0) i=0;
        if(i>1) i=1;

        return i;
    }

    double CImplicitSphere::get(double x, double y, double z, double w, double u, double v)
    {
        double dx=x-m_cx.get(x,y,z,w,u,v), dy=y-m_cy.get(x,y,z,w,u,v), dz=z-m_cz.get(x,y,z,w,u,v), dw=w-m_cw.get(x,y,z,w,u,v),
            du=u-m_cu.get(x,y,z,w,u,v), dv=v-m_cv.get(x,y,z,w,u,v);
        double len=sqrt(dx*dx+dy*dy+dz*dz+dw*dw+du*du+dv*dv);
        double radius=m_radius.get(x,y,z,w,u,v);
        double i=(radius-len)/radius;
        if(i<0) i=0;
        if(i>1) i=1;

        return i;
    }
};
