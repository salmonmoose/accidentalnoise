#include "implicitcellular.h"

namespace anl
{
    CImplicitCellular::CImplicitCellular() : m_generator(0)
    {
        setCoefficients(1,0,0,0);

        CImplicitModuleBase::DoubleInputs.create(
            "CoefficientA",
            [this] (double d) { this->setCoefficientA(d); },
            [this] () -> double { return this->getDoubleCoefficientA(); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "CoefficientB",
            [this] (double d) { this->setCoefficientB(d); },
            [this] () -> double { return this->getDoubleCoefficientB(); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "CoefficientC",
            [this] (double d) { this->setCoefficientC(d); },
            [this] () -> double { return this->getDoubleCoefficientC(); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "CoefficientD",
            [this] (double d) { this->setCoefficientD(d); },
            [this] () -> double { return this->getDoubleCoefficientD(); }
        );

        CImplicitModuleBase::CellgenInputs.create(
            "Generator",
            [this] (CCellularGenerator *m) { this->setCellularSource(m); },
            [this] () -> CCellularGenerator *{ return this->getCellularSource(); }
        );
    }

    CImplicitCellular::CImplicitCellular(double a=1, double b=0, double c=0, double d=0) : m_generator(0)
    {
        setCoefficients(a,b,c,d);
    }

    void CImplicitCellular::setCoefficients(double a, double b, double c, double d)
    {
        m_coefficients_a=a;
        m_coefficients_b=b;
        m_coefficients_c=c;
        m_coefficients_d=d;
    }

    void CImplicitCellular::setCoefficientA(double a){ m_coefficients_a=a; }
    void CImplicitCellular::setCoefficientB(double b){ m_coefficients_b=b; }
    void CImplicitCellular::setCoefficientC(double c){ m_coefficients_c=c; }
    void CImplicitCellular::setCoefficientD(double d){ m_coefficients_d=d; }

    double CImplicitCellular::getDoubleCoefficientA(){ return m_coefficients_a; }
    double CImplicitCellular::getDoubleCoefficientB(){ return m_coefficients_b; }
    double CImplicitCellular::getDoubleCoefficientC(){ return m_coefficients_c; }
    double CImplicitCellular::getDoubleCoefficientD(){ return m_coefficients_d; }

    void CImplicitCellular::setCellularSource(CCellularGenerator *m) { m_generator=m; }
    CCellularGenerator *CImplicitCellular::getCellularSource() { return m_generator; }

    double CImplicitCellular::get(double x, double y)
    {
        SCellularCache &c = (m_generator) ? m_generator->get(x,y) : mCCellgenDefault->get(x,y);

        return c.f[0]*m_coefficients_a + c.f[1]*m_coefficients_b + c.f[2]*m_coefficients_c + c.f[3]*m_coefficients_d;
    }

    double CImplicitCellular::get(double x, double y, double z)
    {
        SCellularCache &c = (m_generator) ? m_generator->get(x,y,z) : mCCellgenDefault->get(x,y,z);

        return c.f[0]*m_coefficients_a + c.f[1]*m_coefficients_b + c.f[2]*m_coefficients_c + c.f[3]*m_coefficients_d;
    }
    double CImplicitCellular::get(double x, double y, double z, double w)
    {
        SCellularCache &c = (m_generator) ? m_generator->get(x,y,z,w) : mCCellgenDefault->get(x,y,z,w);

        return c.f[0]*m_coefficients_a + c.f[1]*m_coefficients_b + c.f[2]*m_coefficients_c + c.f[3]*m_coefficients_d;
    }
    double CImplicitCellular::get(double x, double y, double z, double w, double u, double v)
    {
        SCellularCache &c = (m_generator) ? m_generator->get(x,y,z,w,u,v) : mCCellgenDefault->get(x,y,z,w,u,v);

        return c.f[0]*m_coefficients_a + c.f[1]*m_coefficients_b + c.f[2]*m_coefficients_c + c.f[3]*m_coefficients_d;
    }

};
