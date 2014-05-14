#include "implicitjulia.h"

namespace anl
{
	CImplicitJulia::CImplicitJulia() : CImplicitModuleBase(), m_vx(-0.6), m_vy(0.6), m_vz(0.0), m_vw(0.0), m_vu(0.5), m_vv(0.6)
	{
		setIterations(20);
		setPlot(10);

		CImplicitModuleBase::registerDoubleInput(
			"VectorX",
			[this] (double d) { this->setVectorX (d); },
			[this] () -> double { return this->getDoubleVectorX(); }
		);

		CImplicitModuleBase::registerDoubleInput(
			"VectorY",
			[this] (double d) { this->setVectorY (d); },
			[this] () -> double { return this->getDoubleVectorY(); }
		);

		CImplicitModuleBase::registerDoubleInput(
			"VectorZ",
			[this] (double d) { this->setVectorZ (d); },
			[this] () -> double { return this->getDoubleVectorZ(); }
		);

		CImplicitModuleBase::registerDoubleInput(
			"VectorW",
			[this] (double d) { this->setVectorW (d); },
			[this] () -> double { return this->getDoubleVectorW(); }
		);

		CImplicitModuleBase::registerDoubleInput(
			"VectorU",
			[this] (double d) { this->setVectorU (d); },
			[this] () -> double { return this->getDoubleVectorU(); }
		);

		CImplicitModuleBase::registerDoubleInput(
			"VectorV",
			[this] (double d) { this->setVectorV (d); },
			[this] () -> double { return this->getDoubleVectorV(); }
		);


		CImplicitModuleBase::registerNoiseInput(
			"VectorX",
			[this] (CImplicitModuleBase *n) { this->setVectorX (n); },
			[this] () -> CImplicitModuleBase* { return this->getNoiseVectorX(); }
		);

		CImplicitModuleBase::registerNoiseInput(
			"VectorY",
			[this] (CImplicitModuleBase *n) { this->setVectorY (n); },
			[this] () -> CImplicitModuleBase* { return this->getNoiseVectorY(); }
		);

		CImplicitModuleBase::registerNoiseInput(
			"VectorZ",
			[this] (CImplicitModuleBase *n) { this->setVectorZ (n); },
			[this] () -> CImplicitModuleBase* { return this->getNoiseVectorZ(); }
		);

		CImplicitModuleBase::registerNoiseInput(
			"VectorW",
			[this] (CImplicitModuleBase *n) { this->setVectorW (n); },
			[this] () -> CImplicitModuleBase* { return this->getNoiseVectorW(); }
		);

		CImplicitModuleBase::registerNoiseInput(
			"VectorU",
			[this] (CImplicitModuleBase *n) { this->setVectorU (n); },
			[this] () -> CImplicitModuleBase* { return this->getNoiseVectorU(); }
		);

		CImplicitModuleBase::registerNoiseInput(
			"VectorV",
			[this] (CImplicitModuleBase *n) { this->setVectorV (n); },
			[this] () -> CImplicitModuleBase* { return this->getNoiseVectorV(); }
		);

		CImplicitModuleBase::registerIntInput(
			"Iterations",
			[this] (int i) { this->setIterations(i); },
			[this] () -> int { return this->getIterations(); }
		);

		CImplicitModuleBase::registerIntInput(
			"Plot",
			[this] (int i) { this->setPlot(i); },
			[this] () -> int { return this->getPlot(); }
		);
	}

	CImplicitJulia::~CImplicitJulia(){}

	void CImplicitJulia::setVectorX(double vx) { m_vx.set(vx); }
	void CImplicitJulia::setVectorY(double vy) { m_vy.set(vy); }
	void CImplicitJulia::setVectorZ(double vz) { m_vz.set(vz); }
	void CImplicitJulia::setVectorW(double vw) { m_vw.set(vw); }
	void CImplicitJulia::setVectorU(double vu) { m_vu.set(vu); }
	void CImplicitJulia::setVectorV(double vv) { m_vv.set(vv); }

	double CImplicitJulia::getVectorX() { return m_vx.getDouble(); }
	double CImplicitJulia::getVectorY() { return m_vy.getDouble(); }
	double CImplicitJulia::getVectorZ() { return m_vz.getDouble(); }
	double CImplicitJulia::getVectorW() { return m_vw.getDouble(); }
	double CImplicitJulia::getVectorU() { return m_vu.getDouble(); }
	double CImplicitJulia::getVectorV() { return m_vv.getDouble(); }

	void CImplicitJulia::setVectorX(CImplicitModuleBase *vx) {m_vx.set(vx); }
	void CImplicitJulia::setVectorY(CImplicitModuleBase *vy) {m_vy.set(vy); }
	void CImplicitJulia::setVectorZ(CImplicitModuleBase *vz) {m_vz.set(vz); }
	void CImplicitJulia::setVectorW(CImplicitModuleBase *vw) {m_vw.set(vw); }
	void CImplicitJulia::setVectorU(CImplicitModuleBase *vu) {m_vu.set(vu); }
	void CImplicitJulia::setVectorV(CImplicitModuleBase *vv) {m_vv.set(vv); }

	CImplicitModuleBase *CImplicitJulia::getNoiseVectorX() { return m_vx.getNoise(); }
	CImplicitModuleBase *CImplicitJulia::getNoiseVectorY() { return m_vy.getNoise(); }
	CImplicitModuleBase *CImplicitJulia::getNoiseVectorZ() { return m_vz.getNoise(); }
	CImplicitModuleBase *CImplicitJulia::getNoiseVectorW() { return m_vw.getNoise(); }
	CImplicitModuleBase *CImplicitJulia::getNoiseVectorU() { return m_vu.getNoise(); }
	CImplicitModuleBase *CImplicitJulia::getNoiseVectorV() { return m_vv.getNoise(); }

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
			double temp = x + x;
			x = x * x - y * y + m_vx.get(x,y);
			y = temp * y + m_vy.get(x,y);

			iteration ++;

			distance = x * x + y * y;
		}

		if (distance >= 4) {
			return 1.0 - iteration * 0.0625;
		} else if (iteration >= m_plot && iteration <= m_iterations - 1) {
			return 1.0;
		} else {
			return 0.0;
		}
	}

	double CImplicitJulia::get(double x, double y, double z)
	{
		double distance = 0;
		unsigned int iteration = 0;

		while (distance < 4 && iteration < m_iterations)
		{
			double temp = x + x;
			x = x * x - y * y - z * z + m_vx.get(x, y, z);
			y = temp * y + m_vy.get(x, y, z);
			z = temp * z + m_vz.get(x, y, z);

			iteration ++;

			distance = x * x + y * y + z * z;
		}

		if (distance >= 4) {
			return 1.0 - iteration * 0.0625;
		} else if (iteration >= m_plot && iteration <= m_iterations - 1) {
			return 1.0;
		} else {
			return 0.0;
		}
	}

	double CImplicitJulia::get(double x, double y, double z, double w)
	{
		double distance = 0;
		unsigned int iteration = 0;

		while (distance < 4 && iteration < m_iterations)
		{
			double temp = x + x;
			x = x * x - y * y - z * z + m_vx.get(x, y, z, w);
			y = temp * y + m_vy.get(x, y, z, w);
			z = temp * z + m_vz.get(x, y, z, w);
			w = temp * w + m_vw.get(x, y, z, w);

			iteration ++;

			distance = x * x + y * y + z * z + w * w;
		}

		if (distance >= 4) {
			return 1.0 - iteration * 0.0625;
		} else if (iteration >= m_plot && iteration <= m_iterations - 1) {
			return 1.0;
		} else {
			return 0.0;
		}
	}

	double CImplicitJulia::get(double x, double y, double z, double w, double u, double v)
	{
		double distance = 0;
		unsigned int iteration = 0;

		while (distance < 4 && iteration < m_iterations)
		{
			double temp = x + x;
			x = x * x - y * y - z * z + m_vx.get(x, y, z, w, u, v);
			y = temp * y + m_vy.get(x, y, z, w, u, v);
			z = temp * z + m_vz.get(x, y, z, w, u, v);
			w = temp * w + m_vw.get(x, y, z, w, u, v);
			u = temp * u + m_vu.get(x, y, z, w, u, v);
			v = temp * v + m_vv.get(x, y, z, w, u, v);

			iteration ++;

			distance = x * x + y * y + z * z + w * w + u * u + v * v;
		}

		if (distance >= 4) {
			return 1.0 - iteration * 0.0625;
		} else if (iteration >= m_plot && iteration <= m_iterations - 1) {
			return 1.0;
		} else {
			return 0.0;
		}
	}
}