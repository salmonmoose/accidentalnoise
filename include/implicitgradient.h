#ifndef IMPLICIT_GRADIENT_H
#define IMPLICIT_GRADIENT_H
#include "implicitmodulebase.h"

namespace anl
{
    class CImplicitGradient : public CImplicitModuleBase
    {
        public:
        CImplicitGradient();
        ~CImplicitGradient();

        void setGradient(double x1, double x2, double y1, double y2, double z1=0, double z2=0,
        double w1=0, double w2=0, double u1=0, double u2=0, double v1=0, double v2=0);

        void updateGradient();

        void setX1(double x1);
        void setX2(double x2);
        void setY1(double y1);
        void setY2(double y2);
        void setZ1(double z1);
        void setZ2(double z2);
        void setW1(double w1);
        void setW2(double w2);
        void setU1(double u1);
        void setU2(double u2);
        void setV1(double V1);
        void setV2(double v2);

        double getX1();
        double getX2();
        double getY1();
        double getY2();
        double getZ1();
        double getZ2();
        double getW1();
        double getW2();
        double getU1();
        double getU2();
        double getV1();
        double getV2();

        double get(double x, double y);
        double get(double x, double y, double z);
        double get(double x, double y, double z, double w);
        double get(double x, double y, double z, double w, double u, double v);


        protected:
        double m_gx1, m_gy1, m_gz1, m_gw1, m_gu1, m_gv1;
        double m_gx2, m_gy2, m_gz2, m_gw2, m_gu2, m_gv2;
        double m_x, m_y, m_z, m_w, m_u, m_v;
        double m_vlen;
    };
};
#endif
