#ifndef IMPLICIT_JULIA_H
#define IMPLICIT_JULIA_H
#include "implicitmodulebase.h"

namespace anl
{
	class CImplicitJulia : public CImplicitModuleBase
	{
	public:
		CImplicitJulia();
		~CImplicitJulia();

		void setVectorX(double vx);
		void setVectorY(double vy);
		void setVectorZ(double vz);
		void setVectorW(double vw);
		void setVectorU(double vu);
		void setVectorV(double vv);
		void setVectorX(CImplicitModuleBase *vx);
		void setVectorY(CImplicitModuleBase *vy);
		void setVectorZ(CImplicitModuleBase *vz);
		void setVectorW(CImplicitModuleBase *vw);
		void setVectorU(CImplicitModuleBase *vu);
		void setVectorV(CImplicitModuleBase *vv);

		void setIterations(unsigned int n);
		void setPlot(unsigned int n);

		double get(double x, double y);
		double get(double x, double y, double z);
		double get(double x, double y, double z, double w);
		double get(double x, double y, double z, double w, double u, double v);

	protected:
		CScalarParameter m_vx, m_vy, m_vz, m_vw, m_vu, m_vv;
		unsigned int m_iterations;
		unsigned int m_plot;
	};
};

#endif //IMPLICIT_JULIA_H