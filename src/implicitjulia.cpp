#include "implicitjulia.h"

namespace anl
{
	CImplicitJulia::CImplicitJulia() : CImplicitModuleBase(), m_vx(0), m_vy(0), m_vz(0), m_vw(0), m_vu(0), m_vv(0)
	{
		setIterations(20);
		setPlot(14);
	}
	CImplicitJulia::~CImplicitJulia(){}

	void CImplicitJulia::setVectorX(double vx) {m_vx.set(vx);}
	void CImplicitJulia::setVectorY(double vy) {m_vy.set(vy);}
	void CImplicitJulia::setVectorZ(double vz) {m_vz.set(vz);}
	void CImplicitJulia::setVectorW(double vw) {m_vw.set(vw);}
	void CImplicitJulia::setVectorU(double vu) {m_vu.set(vu);}
	void CImplicitJulia::setVectorV(double vv) {m_vv.set(vv);}
	void CImplicitJulia::setVectorX(CImplicitModuleBase *vx) {m_vx.set(vx);}
	void CImplicitJulia::setVectorY(CImplicitModuleBase *vy) {m_vy.set(vy);}
	void CImplicitJulia::setVectorZ(CImplicitModuleBase *vz) {m_vz.set(vz);}
	void CImplicitJulia::setVectorW(CImplicitModuleBase *vw) {m_vw.set(vw);}
	void CImplicitJulia::setVectorU(CImplicitModuleBase *vu) {m_vu.set(vu);}
	void CImplicitJulia::setVectorV(CImplicitModuleBase *vv) {m_vv.set(vv);}

	void CImplicitJulia::setIterations(unsigned int n)
	{
		if (n < m_plot) {
			m_iterations = m_plot;
		} else {
			m_iterations = n;
		}
	}

	void CImplicitJulia::setPlot(unsigned int n)
	{
		if (n > m_iterations) {
			m_plot = m_iterations;
		} else {
			m_plot = n;
		}
	}

	double CImplicitJulia::get(double x, double y)
	{
		double distance = 0;
		unsigned int iteration = 0;

		while (distance < 4 && iteration < m_iterations)
		{
			double tem = x + x;
			x = x * x - y * y  + m_vx.get(x,y);
			y = tem * y + m_vy.get(x,y);

			iteration ++;

			distance = x*x+y*y;
		}

		if (iteration >= m_plot && iteration <= m_iterations) {
			return 1.0;
		} else {
			return 0.0;
		}
	}

	double CImplicitJulia::get(double x, double y, double z)
	{
		return 0.0;
	}

	double CImplicitJulia::get(double x, double y, double z, double w)
	{
		return 0.0;
	}

	double CImplicitJulia::get(double x, double y, double z, double w, double u, double v)
	{
		return 0.0;
	}
}