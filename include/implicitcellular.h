#ifndef IMPLICIT_CELLULAR_H
#define IMPLICIT_CELLULAR_H
#include "implicitmodulebase.h"
#include "cellulargen.h"

namespace anl
{
class CImplicitCellular : public CImplicitModuleBase
{
    public:
    CImplicitCellular();
    CImplicitCellular(double a, double b, double c, double d);
    ~CImplicitCellular(){}

    void setCoefficients(double a, double b, double c, double d);

    void setCoefficientA(double a);
    void setCoefficientB(double b);
    void setCoefficientC(double c);
    void setCoefficientD(double d);

    double getDoubleCoefficientA();
    double getDoubleCoefficientB();
    double getDoubleCoefficientC();
    double getDoubleCoefficientD();

    void setCellularSource(CCellularGenerator *m);
    CCellularGenerator *getCellularSource();

    double get(double x, double y);
    double get(double x, double y, double z);
    double get(double x, double y, double z, double w);
    double get(double x, double y, double z, double w, double u, double v);

    protected:
    CCellularGenerator *m_generator;
    double m_coefficients_a, m_coefficients_b, m_coefficients_c, m_coefficients_d;
};
};

#endif
