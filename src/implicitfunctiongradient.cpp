#include "implicitfunctiongradient.h"

namespace anl
{
    CImplicitFunctionGradient::CImplicitFunctionGradient() : m_source(0), m_axis(X_AXIS), m_spacing(0.01)
    {
        CImplicitModuleBase::registerDoubleInput(
            "Spacing",
            [this] (double d) { this->setSpacing(d); },
            [this] () -> double { return this->getSpacing(); }
        );

        CImplicitModuleBase::registerIntInput(
            "Axis",
            [this] (int i) { this->setAxis(i); },
            [this] () -> int { return this->getAxis(); }
        );

        CImplicitModuleBase::registerNoiseInput(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource(n); },
            [this] () -> CImplicitModuleBase *{ return this->getSource(); }
        );
    }
    CImplicitFunctionGradient::~CImplicitFunctionGradient(){}

    std::map<std::string, EFunctionGradientAxis> CImplicitFunctionGradient::FunctionGradientAxisMap = {
        {"X_AXIS", X_AXIS},
        {"Y_AXIS", Y_AXIS},
        {"Z_AXIS", Z_AXIS},
        {"W_AXIS", W_AXIS},
        {"U_AXIS", U_AXIS},
        {"V_AXIS", V_AXIS}
    };

    void CImplicitFunctionGradient::setSource(CImplicitModuleBase *m) { m_source = m; }
    CImplicitModuleBase *CImplicitFunctionGradient::getSource() { return m_source; }

    void CImplicitFunctionGradient::setAxis(int axis)
    {
        m_axis=axis;
        if(m_axis<X_AXIS) m_axis=X_AXIS;
        if(m_axis>V_AXIS) m_axis=V_AXIS;
    }
    int CImplicitFunctionGradient::getAxis() { return m_axis; }

    void CImplicitFunctionGradient::setSpacing(double s) { m_spacing=s; }
    double CImplicitFunctionGradient::getSpacing() { return m_spacing; }

    double CImplicitFunctionGradient::get(double x, double y)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        switch(m_axis)
        {
            case X_AXIS: return (source->get(x-m_spacing,y)-source->get(x+m_spacing,y))/m_spacing; break;
            case Y_AXIS: return (source->get(x,y-m_spacing)-source->get(x,y+m_spacing))/m_spacing; break;
            case Z_AXIS: return 0.0; break;
            case W_AXIS: return 0.0; break;
            case U_AXIS: return 0.0; break;
            case V_AXIS: return 0.0; break;
        }
        return 0.0;
    }
    double CImplicitFunctionGradient::get(double x, double y, double z)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        switch(m_axis)
        {
            case X_AXIS: return (source->get(x-m_spacing,y,z)-source->get(x+m_spacing,y,z))/m_spacing; break;
            case Y_AXIS: return (source->get(x,y-m_spacing,z)-source->get(x,y+m_spacing,z))/m_spacing; break;
            case Z_AXIS: return (source->get(x,y,z-m_spacing)-source->get(x,y,z+m_spacing))/m_spacing; break;
            case W_AXIS: return 0.0; break;
            case U_AXIS: return 0.0; break;
            case V_AXIS: return 0.0; break;
        }
        return 0.0;
    }
    double CImplicitFunctionGradient::get(double x, double y, double z, double w)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        switch(m_axis)
        {
            case X_AXIS: return (source->get(x-m_spacing,y,z,w)-source->get(x+m_spacing,y,z,w))/m_spacing; break;
            case Y_AXIS: return (source->get(x,y-m_spacing,z,w)-source->get(x,y+m_spacing,z,w))/m_spacing; break;
            case Z_AXIS: return (source->get(x,y,z-m_spacing,w)-source->get(x,y,z+m_spacing,w))/m_spacing; break;
            case W_AXIS: return (source->get(x,y,z,w-m_spacing)-source->get(x,y,z,w+m_spacing))/m_spacing; break;
            case U_AXIS: return 0.0; break;
            case V_AXIS: return 0.0; break;
        }
        return 0.0;
    }
    double CImplicitFunctionGradient::get(double x, double y, double z, double w, double u, double v)
    {
        CImplicitModuleBase *source = (m_source) ? m_source : mCImplicitModuleBaseDefault;

        switch(m_axis)
        {
            case X_AXIS: return (source->get(x-m_spacing,y,z,w,u,v)-source->get(x+m_spacing,y,z,w,u,v))/m_spacing; break;
            case Y_AXIS: return (source->get(x,y-m_spacing,z,w,u,v)-source->get(x,y+m_spacing,z,w,u,v))/m_spacing; break;
            case Z_AXIS: return (source->get(x,y,z-m_spacing,w,u,v)-source->get(x,y,z+m_spacing,w,u,v))/m_spacing; break;
            case W_AXIS: return (source->get(x,y,z,w-m_spacing,u,v)-source->get(x,y,z,w+m_spacing,u,v))/m_spacing; break;
            case U_AXIS: return (source->get(x,y,z,w,u-m_spacing,v)-source->get(x,y,z,w,u+m_spacing,v))/m_spacing; break;
            case V_AXIS: return (source->get(x,y,z,w,u,v-m_spacing)-source->get(x,y,z,w,u,v+m_spacing))/m_spacing; break;
        }
        return 0.0;
    }
};
