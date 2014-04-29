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

		if (modf(x, &intpart) > 0.5) draw *= -1.0;
		if (modf(y, &intpart) > 0.5) draw *= -1.0;

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

		if (modf(x, &intpart) > 0.5) draw *= -1.0;
		if (modf(y, &intpart) > 0.5) draw *= -1.0;
		if (modf(z, &intpart) > 0.5) draw *= -1.0;

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

		if (modf(x, &intpart) > 0.5) draw *= -1.0;
		if (modf(y, &intpart) > 0.5) draw *= -1.0;
		if (modf(z, &intpart) > 0.5) draw *= -1.0;
		if (modf(w, &intpart) > 0.5) draw *= -1.0;

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

		if (modf(x, &intpart) > 0.5) draw *= -1.0;
		if (modf(y, &intpart) > 0.5) draw *= -1.0;
		if (modf(z, &intpart) > 0.5) draw *= -1.0;
		if (modf(w, &intpart) > 0.5) draw *= -1.0;
		if (modf(u, &intpart) > 0.5) draw *= -1.0;
		if (modf(v, &intpart) > 0.5) draw *= -1.0;

		if (draw > 0) {
			return 1.0;
		} else {
			return 0.0;
		}
	}
}