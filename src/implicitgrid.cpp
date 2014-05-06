#include "implicitgrid.h"
#include <math.h>

namespace anl
{
	CImplicitGrid::CImplicitGrid(){}
	CImplicitGrid::~CImplicitGrid(){}

	double CImplicitGrid::get(double x, double y)
	{
		double draw = -1.0;
		double intpart;

		if (fabs(modf(x, &intpart)) > 0.5) draw *= -1.0;
		if (fabs(modf(y, &intpart)) > 0.5) draw *= -1.0;

		if (draw > 0) {
			return 1.0;
		} else {
			return 0.0;
		}
	}

	double CImplicitGrid::get(double x, double y, double z)
	{
		double draw = -1.0;
		double intpart;

		if (fabs(modf(x, &intpart)) > 0.5) draw *= -1.0;
		if (fabs(modf(y, &intpart)) > 0.5) draw *= -1.0;
		if (fabs(modf(z, &intpart)) > 0.5) draw *= -1.0;

		if (draw > 0) {
			return 1.0;
		} else {
			return 0.0;
		}
	}

	double CImplicitGrid::get(double x, double y, double z, double w)
	{
		double draw = -1.0;
		double intpart;

		if (fabs(modf(x, &intpart)) > 0.5) draw *= -1.0;
		if (fabs(modf(y, &intpart)) > 0.5) draw *= -1.0;
		if (fabs(modf(z, &intpart)) > 0.5) draw *= -1.0;
		if (fabs(modf(w, &intpart)) > 0.5) draw *= -1.0;

		if (draw > 0) {
			return 1.0;
		} else {
			return 0.0;
		}
	}

	double CImplicitGrid::get(double x, double y, double z, double w, double u, double v)
	{
		double draw = -1.0;
		double intpart;

		if (fabs(modf(x, &intpart)) > 0.5) draw *= -1.0;
		if (fabs(modf(y, &intpart)) > 0.5) draw *= -1.0;
		if (fabs(modf(z, &intpart)) > 0.5) draw *= -1.0;
		if (fabs(modf(w, &intpart)) > 0.5) draw *= -1.0;
		if (fabs(modf(u, &intpart)) > 0.5) draw *= -1.0;
		if (fabs(modf(v, &intpart)) > 0.5) draw *= -1.0;

		if (draw > 0) {
			return 1.0;
		} else {
			return 0.0;
		}
	}
}