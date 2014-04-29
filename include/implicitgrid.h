#ifndef IMPLICIT_GRID_H
#define IMPLICIT_GRID_H
#include "implicitmodulebase.h"

namespace anl
{
	class CImplicitGrid : public CImplicitModuleBase
	{
	public:
		CImplicitGrid();
		~CImplicitGrid();

		double get(double x, double y);
		double get(double x, double y, double z);
		double get(double x, double y, double z, double w);
		double get(double x, double y, double z, double w, double u, double v);
	};
};

#endif //IMPLICIT_GRID_H