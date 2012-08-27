#ifndef IMPLICIT_ROTATEDOMAIN_H
#define IMPLICIT_ROTATEDOMAIN_H
#include "implicitmodulebase.h"

namespace anl
{
    /*
Given angle r in radians and unit vector u = ai + bj + ck or [a,b,c]', define:

q0 = cos(r/2),  q1 = sin(r/2) a,  q2 = sin(r/2) b,  q3 = sin(r/2) c

and construct from these values the rotation matrix:

     (q0� + q1� - q2� - q3�)      2(q1q2 - q0q3)          2(q1q3 + q0q2)

Q  =      2(q2q1 + q0q3)     (q0� - q1� + q2� - q3�)      2(q2q3 - q0q1)

          2(q3q1 - q0q2)          2(q3q2 + q0q1)     (q0� - q1� - q2� + q3�)

Multiplication by Q then effects the desired rotation, and in particular:

Q u = u
*/

class CImplicitRotateDomain : public CImplicitModuleBase
{
    public:
    CImplicitRotateDomain(double ax, double ay, double az, double angle_deg);
    ~CImplicitRotateDomain();
    void setSource(CImplicitModuleBase *m);
    void setSource(double v);
    void setAxis(double ax, double ay, double az);
    void setAxis(CImplicitModuleBase *ax, CImplicitModuleBase *ay, CImplicitModuleBase *az);
    void setAxisX(double ax);
    void setAxisY(double ay);
    void setAxisZ(double az);
    void setAxisX(CImplicitModuleBase *ax);
    void setAxisY(CImplicitModuleBase *ay);
    void setAxisZ(CImplicitModuleBase *az);

    void setAngle(double a);
    void setAngle(CImplicitModuleBase *a);

    double get(double x, double y);
    double get(double x, double y, double z);
    double get(double x, double y, double z, double w);
    double get(double x, double y, double z, double w, double u, double v);

    protected:
    double m_rotmatrix[3][3];
    CScalarParameter m_ax,m_ay,m_az, m_angledeg;
    CScalarParameter m_source;

    void calculateRotMatrix(double x, double y);
    void calculateRotMatrix(double x, double y, double z);
    void calculateRotMatrix(double x, double y, double z, double w);
    void calculateRotMatrix(double x, double y, double z, double w, double u, double v);
};
};

#endif
