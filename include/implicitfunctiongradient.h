#ifndef IMPLICIT_FUNCTIONGRADIENT_H
#define IMPLICIT_FUNCTIONGRADIENT_H
#include "implicitmodulebase.h"
#include <map>
#include <string>

namespace anl
{
    enum EFunctionGradientAxis
    {
        X_AXIS,
        Y_AXIS,
        Z_AXIS,
        W_AXIS,
        U_AXIS,
        V_AXIS
    };

    class CImplicitFunctionGradient : public CImplicitModuleBase
    {
        public:
        CImplicitFunctionGradient();
        ~CImplicitFunctionGradient();

        static std::map<std::string, EFunctionGradientAxis> FunctionGradientAxisMap;

        void setSource(CImplicitModuleBase *m);
        CImplicitModuleBase *getSource();
        void setAxis(int axis);
        int getAxis();
        void setSpacing(double s);
        double getSpacing();

        double get(double x, double y);
        double get(double x, double y, double z);
        double get(double x, double y, double z, double w);
        double get(double x, double y, double z, double w, double u, double v);

        protected:
        CImplicitModuleBase *m_source;
        int m_axis;
        double m_spacing;
    };
};

#endif
