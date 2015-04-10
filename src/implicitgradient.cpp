#include "implicitgradient.h"
#include "utility.h"
#include <math.h>

namespace anl
{
CImplicitGradient::CImplicitGradient()
{
    CImplicitModuleBase::DoubleInputs.create(
        "X1",
        [this] (double d) { this->setX1 (d); },
        [this] () -> double { return this->getX1(); }
    );

    CImplicitModuleBase::DoubleInputs.create(
        "X2",
        [this] (double d) { this->setX2 (d); },
        [this] () -> double { return this->getX2(); }
    );

    CImplicitModuleBase::DoubleInputs.create(
        "Y1",
        [this] (double d) { this->setY1 (d); },
        [this] () -> double { return this->getY1(); }
    );

    CImplicitModuleBase::DoubleInputs.create(
        "Y2",
        [this] (double d) { this->setY2 (d); },
        [this] () -> double { return this->getY2(); }
    );

    CImplicitModuleBase::DoubleInputs.create(
        "Z1",
        [this] (double d) { this->setZ1 (d); },
        [this] () -> double { return this->getZ1(); }
    );

    CImplicitModuleBase::DoubleInputs.create(
        "Z2",
        [this] (double d) { this->setZ2 (d); },
        [this] () -> double { return this->getZ2(); }
    );

    CImplicitModuleBase::DoubleInputs.create(
        "W1",
        [this] (double d) { this->setW1 (d); },
        [this] () -> double { return this->getW1(); }
    );

    CImplicitModuleBase::DoubleInputs.create(
        "W2",
        [this] (double d) { this->setW2 (d); },
        [this] () -> double { return this->getW2(); }
    );

    CImplicitModuleBase::DoubleInputs.create(
        "U1",
        [this] (double d) { this->setU1 (d); },
        [this] () -> double { return this->getU1(); }
    );

    CImplicitModuleBase::DoubleInputs.create(
        "U2",
        [this] (double d) { this->setU2 (d); },
        [this] () -> double { return this->getU2(); }
    );

    CImplicitModuleBase::DoubleInputs.create(
        "V1",
        [this] (double d) { this->setV1 (d); },
        [this] () -> double { return this->getV1(); }
    );

    CImplicitModuleBase::DoubleInputs.create(
        "V2",
        [this] (double d) { this->setV2 (d); },
        [this] () -> double { return this->getV2(); }
    );


    setGradient(0,1,0,1,0,0,0,0,0,0,0,0);
}
CImplicitGradient::~CImplicitGradient(){}

void CImplicitGradient::setGradient(double x1, double x2, double y1, double y2, double z1, double z2,
    double w1, double w2, double u1, double u2, double v1, double v2)
{
    m_gx1=x1; m_gx2=x2;
    m_gy1=y1; m_gy2=y2;
    m_gz1=z1; m_gz2=z2;
    m_gw1=w1; m_gw2=w2;
    m_gu1=u1; m_gu2=u2;
    m_gv1=v1; m_gv2=v2;

    updateGradient();
}

void CImplicitGradient::setX1(double x1){ m_gx1 = x1; updateGradient(); }
void CImplicitGradient::setX2(double x2){ m_gx2 = x2; updateGradient(); }
void CImplicitGradient::setY1(double y1){ m_gy1 = y1; updateGradient(); }
void CImplicitGradient::setY2(double y2){ m_gy2 = y2; updateGradient(); }
void CImplicitGradient::setZ1(double z1){ m_gz1 = z1; updateGradient(); }
void CImplicitGradient::setZ2(double z2){ m_gz2 = z2; updateGradient(); }
void CImplicitGradient::setW1(double w1){ m_gw1 = w1; updateGradient(); }
void CImplicitGradient::setW2(double w2){ m_gw2 = w2; updateGradient(); }
void CImplicitGradient::setU1(double u1){ m_gu1 = u1; updateGradient(); }
void CImplicitGradient::setU2(double u2){ m_gu2 = u2; updateGradient(); }
void CImplicitGradient::setV1(double v1){ m_gv1 = v1; updateGradient(); }
void CImplicitGradient::setV2(double v2){ m_gv2 = v2; updateGradient(); }

double CImplicitGradient::getX1(){ return m_gx1; }
double CImplicitGradient::getX2(){ return m_gx2; }
double CImplicitGradient::getY1(){ return m_gy1; }
double CImplicitGradient::getY2(){ return m_gy2; }
double CImplicitGradient::getZ1(){ return m_gz1; }
double CImplicitGradient::getZ2(){ return m_gz2; }
double CImplicitGradient::getW1(){ return m_gw1; }
double CImplicitGradient::getW2(){ return m_gw2; }
double CImplicitGradient::getU1(){ return m_gu1; }
double CImplicitGradient::getU2(){ return m_gu2; }
double CImplicitGradient::getV1(){ return m_gv1; }
double CImplicitGradient::getV2(){ return m_gv2; }

void CImplicitGradient::updateGradient(){
    m_x = m_gx2 - m_gx1;
    m_y = m_gy2 - m_gy1;
    m_z = m_gz2 - m_gz1;
    m_w = m_gw2 - m_gw1;
    m_u = m_gu2 - m_gu1;
    m_v = m_gv2 - m_gv1;

    m_vlen=(m_x*m_x+m_y*m_y+m_z*m_z+m_w*m_w+m_u*m_u+m_v*m_v);
}

double CImplicitGradient::get(double x, double y)
{
    double dx=x-m_gx1;
    double dy=y-m_gy1;
    double dp=dx*m_x+dy*m_y;
    dp/=m_vlen;

    return dp;
}

double CImplicitGradient::get(double x, double y, double z)
{
    double dx=x-m_gx1;
    double dy=y-m_gy1;
    double dz=z-m_gz1;
    double dp=dx*m_x+dy*m_y+dz*m_z;
    dp/=m_vlen;

    return dp;
}

double CImplicitGradient::get(double x, double y, double z, double w)
{
    double dx=x-m_gx1;
    double dy=y-m_gy1;
    double dz=z-m_gz1;
    double dw=w-m_gw1;
    double dp=dx*m_x+dy*m_y+dz*m_z+dw*m_w;
    dp/=m_vlen;

    return dp;
}

double CImplicitGradient::get(double x, double y, double z, double w, double u, double v)
{
    double dx=x-m_gx1;
    double dy=y-m_gy1;
    double dz=z-m_gz1;
    double dw=w-m_gw1;
    double du=u-m_gu1;
    double dv=v-m_gv1;
    double dp=dx*m_x+dy*m_y+dz*m_z+dw*m_w+du*m_u+dv*m_v;
    dp/=m_vlen;

    return dp;
}
};
