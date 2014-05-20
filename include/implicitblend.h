#ifndef IMPLICIT_BLEND_H
#define IMPLICIT_BLEND_H
#include "implicitmodulebase.h"

namespace anl
{

    class CImplicitBlend : public CImplicitModuleBase
    {
    public:
        CImplicitBlend();
        ~CImplicitBlend();

        void setLowSource(CImplicitModuleBase *b);
        void setHighSource(CImplicitModuleBase *b);
        void setControlSource(CImplicitModuleBase *b);
        CImplicitModuleBase *getNoiseLowSource();
        CImplicitModuleBase *getNoiseHighSource();
        CImplicitModuleBase *getNoiseControlSource();

        void setLowSource(double v);
        void setHighSource(double v);
        void setControlSource(double v);
        double getDoubleLowSource();
        double getDoubleHighSource();
        double getDoubleControlSource();

        double get(double x, double y);
        double get(double x, double y, double z);
        double get(double x, double y, double z, double w);
        double get(double x, double y, double z, double w, double u, double v);
        protected:
        CScalarParameter m_low,m_high,m_control;

    };
};
#endif
