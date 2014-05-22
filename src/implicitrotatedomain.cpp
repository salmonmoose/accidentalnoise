#include "implicitrotatedomain.h"
#include <cmath>

namespace anl
{
    CImplicitRotateDomain::CImplicitRotateDomain() : m_ax(0), m_ay(0), m_az(0), m_angledeg(0), m_source(0)
    {
        CImplicitModuleBase::registerNoiseInput(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource(n); },
            [this] () -> CImplicitModuleBase *{ return this->getSource(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "AxisX",
            [this] (double d) { this->setAxisX(d); },
            [this] () -> double { return this->getDoubleAxisX(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "AxisY",
            [this] (double d) { this->setAxisY(d); },
            [this] () -> double { return this->getDoubleAxisY(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "AxisZ",
            [this] (double d) { this->setAxisZ(d); },
            [this] () -> double { return this->getDoubleAxisZ(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "AxisX",
            [this] (CImplicitModuleBase *n) { this->setAxisX(n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseAxisX(); }
        );
        CImplicitModuleBase::registerNoiseInput(
            "AxisY",
            [this] (CImplicitModuleBase *n) { this->setAxisY(n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseAxisY(); }
        );
        CImplicitModuleBase::registerNoiseInput(
            "AxisZ",
            [this] (CImplicitModuleBase *n) { this->setAxisZ(n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseAxisZ(); }
        );

        CImplicitModuleBase::registerDoubleInput(
            "Angle",
            [this] (double d) { this->setAngle(d); },
            [this] () -> double { return this->getDoubleAngle(); }
        );
        CImplicitModuleBase::registerNoiseInput(
            "Angle",
            [this] (CImplicitModuleBase *n) { this->setAngle(n); },
            [this] () -> CImplicitModuleBase *{ return this->getNoiseAngle(); }
        );

    }

    CImplicitRotateDomain::~CImplicitRotateDomain(){}

    void CImplicitRotateDomain::setSource(CImplicitModuleBase *m){ m_source = m; }
    CImplicitModuleBase *CImplicitRotateDomain::getSource() { return m_source; }

    void CImplicitRotateDomain::calculateRotMatrix(double x, double y)
    {
        double angle=m_angledeg.get(x,y)*360.0 * 3.14159265/180.0;
        double ax=m_ax.get(x,y);
        double ay=m_ay.get(x,y);
        double az=m_az.get(x,y);

        double cosangle=cos(angle);
        double sinangle=sin(angle);

        m_rotmatrix[0][0] = 1.0 + (1.0-cosangle)*(ax*ax-1.0);
        m_rotmatrix[1][0] = -az*sinangle+(1.0-cosangle)*ax*ay;
        m_rotmatrix[2][0] = ay*sinangle+(1.0-cosangle)*ax*az;

        m_rotmatrix[0][1] = az*sinangle+(1.0-cosangle)*ax*ay;
        m_rotmatrix[1][1] = 1.0 + (1.0-cosangle)*(ay*ay-1.0);
        m_rotmatrix[2][1] = -ax*sinangle+(1.0-cosangle)*ay*az;

        m_rotmatrix[0][2] = -ay*sinangle+(1.0-cosangle)*ax*az;
        m_rotmatrix[1][2] = ax*sinangle+(1.0-cosangle)*ay*az;
        m_rotmatrix[2][2] = 1.0 + (1.0-cosangle)*(az*az-1.0);
    }

    void CImplicitRotateDomain::calculateRotMatrix(double x, double y, double z)
    {
        double angle=m_angledeg.get(x,y,z)*360.0 * 3.14159265/180.0;
        double ax=m_ax.get(x,y,z);
        double ay=m_ay.get(x,y,z);
        double az=m_az.get(x,y,z);

        double cosangle=cos(angle);
        double sinangle=sin(angle);

        m_rotmatrix[0][0] = 1.0 + (1.0-cosangle)*(ax*ax-1.0);
        m_rotmatrix[1][0] = -az*sinangle+(1.0-cosangle)*ax*ay;
        m_rotmatrix[2][0] = ay*sinangle+(1.0-cosangle)*ax*az;

        m_rotmatrix[0][1] = az*sinangle+(1.0-cosangle)*ax*ay;
        m_rotmatrix[1][1] = 1.0 + (1.0-cosangle)*(ay*ay-1.0);
        m_rotmatrix[2][1] = -ax*sinangle+(1.0-cosangle)*ay*az;

        m_rotmatrix[0][2] = -ay*sinangle+(1.0-cosangle)*ax*az;
        m_rotmatrix[1][2] = ax*sinangle+(1.0-cosangle)*ay*az;
        m_rotmatrix[2][2] = 1.0 + (1.0-cosangle)*(az*az-1.0);
    }
    void CImplicitRotateDomain::calculateRotMatrix(double x, double y, double z, double w)
    {
        double angle=m_angledeg.get(x,y,z,w)*360.0 * 3.14159265/180.0;
        double ax=m_ax.get(x,y,z,w);
        double ay=m_ay.get(x,y,z,w);
        double az=m_az.get(x,y,z,w);

        double cosangle=cos(angle);
        double sinangle=sin(angle);

        m_rotmatrix[0][0] = 1.0 + (1.0-cosangle)*(ax*ax-1.0);
        m_rotmatrix[1][0] = -az*sinangle+(1.0-cosangle)*ax*ay;
        m_rotmatrix[2][0] = ay*sinangle+(1.0-cosangle)*ax*az;

        m_rotmatrix[0][1] = az*sinangle+(1.0-cosangle)*ax*ay;
        m_rotmatrix[1][1] = 1.0 + (1.0-cosangle)*(ay*ay-1.0);
        m_rotmatrix[2][1] = -ax*sinangle+(1.0-cosangle)*ay*az;

        m_rotmatrix[0][2] = -ay*sinangle+(1.0-cosangle)*ax*az;
        m_rotmatrix[1][2] = ax*sinangle+(1.0-cosangle)*ay*az;
        m_rotmatrix[2][2] = 1.0 + (1.0-cosangle)*(az*az-1.0);
    }
    void CImplicitRotateDomain::calculateRotMatrix(double x, double y, double z, double w, double u, double v)
    {
        double angle=m_angledeg.get(x,y,z,w,u,v)*360.0 * 3.14159265/180.0;
        double ax=m_ax.get(x,y,z,w,u,v);
        double ay=m_ay.get(x,y,z,w,u,v);
        double az=m_az.get(x,y,z,w,u,v);

        double cosangle=cos(angle);
        double sinangle=sin(angle);

        m_rotmatrix[0][0] = 1.0 + (1.0-cosangle)*(ax*ax-1.0);
        m_rotmatrix[1][0] = -az*sinangle+(1.0-cosangle)*ax*ay;
        m_rotmatrix[2][0] = ay*sinangle+(1.0-cosangle)*ax*az;

        m_rotmatrix[0][1] = az*sinangle+(1.0-cosangle)*ax*ay;
        m_rotmatrix[1][1] = 1.0 + (1.0-cosangle)*(ay*ay-1.0);
        m_rotmatrix[2][1] = -ax*sinangle+(1.0-cosangle)*ay*az;

        m_rotmatrix[0][2] = -ay*sinangle+(1.0-cosangle)*ax*az;
        m_rotmatrix[1][2] = ax*sinangle+(1.0-cosangle)*ay*az;
        m_rotmatrix[2][2] = 1.0 + (1.0-cosangle)*(az*az-1.0);
    }

    void CImplicitRotateDomain::setAxisX(double ax) { m_ax.set(ax); }
    void CImplicitRotateDomain::setAxisY(double ay) { m_ay.set(ay); }
    void CImplicitRotateDomain::setAxisZ(double az) { m_az.set(az); }
    double CImplicitRotateDomain::getDoubleAxisX() { return m_ax.getDouble(); }
    double CImplicitRotateDomain::getDoubleAxisY() { return m_ay.getDouble(); }
    double CImplicitRotateDomain::getDoubleAxisZ() { return m_az.getDouble(); }

    void CImplicitRotateDomain::setAxisX(CImplicitModuleBase *ax) { m_ax.set(ax); }
    void CImplicitRotateDomain::setAxisY(CImplicitModuleBase *ay) { m_ay.set(ay); }
    void CImplicitRotateDomain::setAxisZ(CImplicitModuleBase *az) { m_az.set(az); }
    CImplicitModuleBase *CImplicitRotateDomain::getNoiseAxisX() { return m_ax.getNoise(); }
    CImplicitModuleBase *CImplicitRotateDomain::getNoiseAxisY() { return m_ay.getNoise(); }
    CImplicitModuleBase *CImplicitRotateDomain::getNoiseAxisZ() { return m_az.getNoise(); }

    void CImplicitRotateDomain::setAngle(double a) { m_angledeg.set(a); }
    double CImplicitRotateDomain::getDoubleAngle() { return m_angledeg.getDouble(); }
    void CImplicitRotateDomain::setAngle(CImplicitModuleBase *a) { m_angledeg.set(a); }
    CImplicitModuleBase *CImplicitRotateDomain::getNoiseAngle() { return m_angledeg.getNoise(); }

    double CImplicitRotateDomain::get(double x, double y)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        double nx,ny;
        double angle=m_angledeg.get(x,y)*360.0 * 3.14159265/180.0;
        double cos2d=cos(angle);
        double sin2d=sin(angle);
        nx = x*cos2d-y*sin2d;
        ny = y*cos2d+x*sin2d;
        return source->get(nx,ny);
    }

    double CImplicitRotateDomain::get(double x, double y, double z)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        calculateRotMatrix(x,y,z);
        double nx, ny, nz;
        nx = (m_rotmatrix[0][0]*x) + (m_rotmatrix[1][0]*y) + (m_rotmatrix[2][0]*z);
        ny = (m_rotmatrix[0][1]*x) + (m_rotmatrix[1][1]*y) + (m_rotmatrix[2][1]*z);
        nz = (m_rotmatrix[0][2]*x) + (m_rotmatrix[1][2]*y) + (m_rotmatrix[2][2]*z);
        return source->get(nx,ny,nz);
    }
    double CImplicitRotateDomain::get(double x, double y, double z, double w)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        calculateRotMatrix(x,y,z,w);
        double nx, ny, nz;
        nx = (m_rotmatrix[0][0]*x) + (m_rotmatrix[1][0]*y) + (m_rotmatrix[2][0]*z);
        ny = (m_rotmatrix[0][1]*x) + (m_rotmatrix[1][1]*y) + (m_rotmatrix[2][1]*z);
        nz = (m_rotmatrix[0][2]*x) + (m_rotmatrix[1][2]*y) + (m_rotmatrix[2][2]*z);
        return source->get(nx,ny,nz,w);
    }
    double CImplicitRotateDomain::get(double x, double y, double z, double w, double u, double v)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        calculateRotMatrix(x,y,z,w,u,v);
        double nx, ny, nz;
        nx = (m_rotmatrix[0][0]*x) + (m_rotmatrix[1][0]*y) + (m_rotmatrix[2][0]*z);
        ny = (m_rotmatrix[0][1]*x) + (m_rotmatrix[1][1]*y) + (m_rotmatrix[2][1]*z);
        nz = (m_rotmatrix[0][2]*x) + (m_rotmatrix[1][2]*y) + (m_rotmatrix[2][2]*z);
        return source->get(nx,ny,nz,w,u,v);
    }
};
