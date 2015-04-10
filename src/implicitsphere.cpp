#include "implicitsphere.h"
#include <iostream>
#include <functional>

namespace anl
{
    CImplicitSphere::CImplicitSphere() : CImplicitModuleBase(),m_source(0), m_cx(0), m_cy(0), m_cz(0), m_cw(0), m_cu(0), m_cv(0), m_radius(1) {
        CImplicitModuleBase::DoubleInputs.create(
            "Radius",
            [this] (double d) { this->setRadius(d); },
            [this] () -> double { return this->getDoubleRadius(); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "Radius",
            [this] (CImplicitModuleBase *n) { this->setRadius (n); },
            [this] () -> CImplicitModuleBase* { return this->getNoiseRadius(); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "CenterX",
            [this] (double v) { this->setCenterX (v); },
            [this] () -> double { return this->getDoubleCenterX(); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "CenterY",
            [this] (double v) { this->setCenterY (v); },
            [this] () -> double { return this->getDoubleCenterY(); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "CenterZ",
            [this] (double v) { this->setCenterZ (v); },
            [this] () -> double { return this->getDoubleCenterZ(); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "CenterU",
            [this] (double v) { this->setCenterU (v); },
            [this] () -> double { return this->getDoubleCenterU(); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "CenterV",
            [this] (double v) { this->setCenterV (v); },
            [this] () -> double { return this->getDoubleCenterV(); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "CenterW",
            [this] (double v) { this->setCenterW (v); },
            [this] () -> double { return this->getDoubleCenterW(); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "CenterX",
            [this] (CImplicitModuleBase *n) { this->setCenterX (n); },
            [this] () -> CImplicitModuleBase* { return this->getNoiseCenterX(); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "CenterY",
            [this] (CImplicitModuleBase *n) { this->setCenterY (n); },
            [this] () -> CImplicitModuleBase* { return this->getNoiseCenterY(); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "CenterZ",
            [this] (CImplicitModuleBase *n) { this->setCenterZ (n); },
            [this] () -> CImplicitModuleBase* { return this->getNoiseCenterZ(); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "CenterU",
            [this] (CImplicitModuleBase *n) { this->setCenterU (n); },
            [this] () -> CImplicitModuleBase* { return this->getNoiseCenterU(); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "CenterV",
            [this] (CImplicitModuleBase *n) { this->setCenterV (n); },
            [this] () -> CImplicitModuleBase* { return this->getNoiseCenterV(); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "CenterW",
            [this] (CImplicitModuleBase *n) { this->setCenterW (n); },
            [this] () -> CImplicitModuleBase* { return this->getNoiseCenterW(); }
        );

    }

    CImplicitSphere::~CImplicitSphere(){}

    void CImplicitSphere::setCenter(double cx,double cy,double cz,double cw,double cu,double cv)
    {
        m_cx=cx; m_cy=cy; m_cz=cz; m_cw=cw; m_cu=cu; m_cv=cv;
    }
    void CImplicitSphere::setCenterX(double cx){ m_cx.set(cx); }
    void CImplicitSphere::setCenterY(double cy){ m_cy.set(cy); }
    void CImplicitSphere::setCenterZ(double cz){ m_cz.set(cz); }
    void CImplicitSphere::setCenterW(double cw){ m_cw.set(cw); }
    void CImplicitSphere::setCenterU(double cu){ m_cu.set(cu); }
    void CImplicitSphere::setCenterV(double cv){ m_cv.set(cv); }

    double CImplicitSphere::getDoubleCenterX() { return m_cx.getDouble(); }
    double CImplicitSphere::getDoubleCenterY() { return m_cy.getDouble(); }
    double CImplicitSphere::getDoubleCenterZ() { return m_cz.getDouble(); }
    double CImplicitSphere::getDoubleCenterW() { return m_cw.getDouble(); }
    double CImplicitSphere::getDoubleCenterU() { return m_cu.getDouble(); }
    double CImplicitSphere::getDoubleCenterV() { return m_cv.getDouble(); }

    void CImplicitSphere::setCenterX(CImplicitModuleBase *cx){m_cx.set(cx);}
    void CImplicitSphere::setCenterY(CImplicitModuleBase *cy){m_cy.set(cy);}
    void CImplicitSphere::setCenterZ(CImplicitModuleBase *cz){m_cz.set(cz);}
    void CImplicitSphere::setCenterW(CImplicitModuleBase *cw){m_cw.set(cw);}
    void CImplicitSphere::setCenterU(CImplicitModuleBase *cu){m_cu.set(cu);}
    void CImplicitSphere::setCenterV(CImplicitModuleBase *cv){m_cv.set(cv);}

    CImplicitModuleBase *CImplicitSphere::getNoiseCenterX() { return m_cx.getNoise(); }
    CImplicitModuleBase *CImplicitSphere::getNoiseCenterY() { return m_cy.getNoise(); }
    CImplicitModuleBase *CImplicitSphere::getNoiseCenterZ() { return m_cz.getNoise(); }
    CImplicitModuleBase *CImplicitSphere::getNoiseCenterW() { return m_cw.getNoise(); }
    CImplicitModuleBase *CImplicitSphere::getNoiseCenterU() { return m_cu.getNoise(); }
    CImplicitModuleBase *CImplicitSphere::getNoiseCenterV() { return m_cv.getNoise(); }

    void CImplicitSphere::setRadius(double r) { m_radius.set(r); }

    double CImplicitSphere::getDoubleRadius() { return m_radius.getDouble(); }

    void CImplicitSphere::setRadius(CImplicitModuleBase *r) { m_radius.set(r); }

    CImplicitModuleBase *CImplicitSphere::getNoiseRadius() { return m_radius.getNoise(); }

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
