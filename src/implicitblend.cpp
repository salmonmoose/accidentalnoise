#include "implicitblend.h"
#include "utility.h"

namespace anl
{

    CImplicitBlend::CImplicitBlend(): m_low(0), m_high(0), m_control(0)
    {
    	CImplicitModuleBase::DoubleInputs.create(
    		"LowSource",
    		[this] (double d) { this->setLowSource(d); },
    		[this] () -> double { return this->getDoubleLowSource(); }
		);

		CImplicitModuleBase::DoubleInputs.create(
			"ControlSource",
			[this] (double d) { this->setControlSource(d); },
			[this] () -> double { return this->getDoubleControlSource(); }
		);

		CImplicitModuleBase::DoubleInputs.create(
			"HighSource",
			[this] (double d) { this->setHighSource(d); },
			[this] () -> double { return this->getDoubleHighSource(); }
		);

    	CImplicitModuleBase::NoiseInputs.create(
    		"LowSource",
    		[this] (CImplicitModuleBase *n) { this->setLowSource(n); },
    		[this] () -> CImplicitModuleBase *{ return this->getNoiseLowSource(); }
		);

		CImplicitModuleBase::NoiseInputs.create(
			"ControlSource",
			[this] (CImplicitModuleBase *n) { this->setControlSource(n); },
			[this] () -> CImplicitModuleBase *{ return this->getNoiseControlSource(); }
		);

		CImplicitModuleBase::NoiseInputs.create(
			"HighSource",
			[this] (CImplicitModuleBase *n) { this->setHighSource(n); },
			[this] () -> CImplicitModuleBase *{ return this->getNoiseHighSource(); }
		);
    }
	CImplicitBlend::~CImplicitBlend(){}

	void CImplicitBlend::setLowSource(CImplicitModuleBase *b) { m_low.set(b); }
	CImplicitModuleBase *CImplicitBlend::getNoiseLowSource() { return m_low.getNoise(); }

	void CImplicitBlend::setHighSource(CImplicitModuleBase *b) { m_high.set(b); }
	CImplicitModuleBase *CImplicitBlend::getNoiseHighSource() { return m_high.getNoise(); }

	void CImplicitBlend::setControlSource(CImplicitModuleBase *b) { m_control.set(b); }
	CImplicitModuleBase *CImplicitBlend::getNoiseControlSource() { return m_control.getNoise(); }

	void CImplicitBlend::setLowSource(double v) { m_low.set(v); }
	double CImplicitBlend::getDoubleLowSource() { return m_low.getDouble(); }

	void CImplicitBlend::setHighSource(double v) { m_high.set(v); }
	double CImplicitBlend::getDoubleHighSource() { return m_high.getDouble(); }

	void CImplicitBlend::setControlSource(double v) { m_control.set(v); }
	double CImplicitBlend::getDoubleControlSource() { return m_control.getDouble(); }

	double CImplicitBlend::get(double x, double y)
	{
        double v1=m_low.get(x,y);
        double v2=m_high.get(x,y);
        double blend=m_control.get(x,y);
        blend=(blend+1.0) * 0.5;

        return lerp(blend,v1,v2);
	}

	double CImplicitBlend::get(double x, double y, double z)
	{
        double v1=m_low.get(x,y,z);
        double v2=m_high.get(x,y,z);
        double blend=m_control.get(x,y,z);
        return lerp(blend,v1,v2);
	}

	double CImplicitBlend::get(double x, double y, double z, double w)
	{
        double v1=m_low.get(x,y,z,w);
        double v2=m_high.get(x,y,z,w);
        double blend=m_control.get(x,y,z,w);
        return lerp(blend,v1,v2);
	}

	double CImplicitBlend::get(double x, double y, double z, double w, double u, double v)
    {
        double v1=m_low.get(x,y,z,w,u,v);
        double v2=m_high.get(x,y,z,w,u,v);
        double blend=m_control.get(x,y,z,w,u,v);
        return lerp(blend,v1,v2);
	}
};
