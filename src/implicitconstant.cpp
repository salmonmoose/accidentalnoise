#include "implicitconstant.h"

namespace anl
{
    CImplicitConstant::CImplicitConstant() : m_constant(0){
    	CImplicitModuleBase::DoubleInputs.create(
    		"Value",
    		[this] (double d) { this->setConstant(d); },
    		[this] () -> double { return this->getConstant(); }
		);
    }
    CImplicitConstant::CImplicitConstant(double c) : m_constant(c){}
	CImplicitConstant::~CImplicitConstant(){}

	void CImplicitConstant::setConstant(double c) { m_constant = c; }
	double CImplicitConstant::getConstant() { return m_constant; }

	double CImplicitConstant::get(double x, double y){return m_constant;}
	double CImplicitConstant::get(double x, double y, double z){return m_constant;}
	double CImplicitConstant::get(double x, double y, double z, double w){return m_constant;}
	double CImplicitConstant::get(double x, double y, double z, double w, double u, double v){return m_constant;}
};
