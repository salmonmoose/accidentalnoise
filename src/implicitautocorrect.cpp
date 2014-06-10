#include "implicitautocorrect.h"
#include "random_gen.h"

namespace anl
{
    CImplicitAutoCorrect::CImplicitAutoCorrect() : m_source(0), m_low(0.25), m_high(0.75)
    {
        CImplicitModuleBase::DoubleInputs.create(
            "Low",
            [this] (double d) { this->setLow (d); },
            [this] () -> double { return this->getLow(); }
        );

        CImplicitModuleBase::DoubleInputs.create(
            "High",
            [this] (double d) { this->setHigh (d); },
            [this] () -> double { return this->getLow(); }
        );

        CImplicitModuleBase::NoiseInputs.create(
            "Source",
            [this] (CImplicitModuleBase *n) { this->setSource (n); },
            [this] () -> CImplicitModuleBase* { return this->getSource(); }
        );

        calculate();
    }

    void CImplicitAutoCorrect::setSource(CImplicitModuleBase *m)
    {
        m_source=m;
        calculate();
    }

    CImplicitModuleBase * CImplicitAutoCorrect::getSource() { return m_source; }

    void CImplicitAutoCorrect::setRange(double low, double high)
    {
        m_low=low; m_high=high;
        calculate();
    }

    void CImplicitAutoCorrect::setLow(double low)
    {
        m_low=low;
        calculate();
    }

    double CImplicitAutoCorrect::getLow() { return m_low; }

    void CImplicitAutoCorrect::setHigh(double high)
    {
        m_high=high;
        calculate();
    }

    double CImplicitAutoCorrect::getHigh() { return m_high; }

    void CImplicitAutoCorrect::calculate()
    {
        double mn,mx;
        double value;
        LCG lcg;
        lcg.setSeedTime();

        // Calculate 2D
        mn=10000.0;
        mx=-10000.0;
        for(int c=0; c<10000; ++c)
        {
            double nx=lcg.get01()*4.0-2.0;
            double ny=lcg.get01()*4.0-2.0;

            if(m_source) {
                value = m_source->get(nx,ny);
            } else {
                value = sqrt(nx * nx + ny * ny);
            }
            if(value < mn) mn = value;
            if(value > mx) mx = value;
        }
        m_scale2=(m_high-m_low) / (mx-mn);
        m_offset2=m_low-mn*m_scale2;

        // Calculate 3D
        mn=10000.0;
        mx=-10000.0;
        for(int c=0; c<10000; ++c)
        {
            double nx=lcg.get01()*4.0-2.0;
            double ny=lcg.get01()*4.0-2.0;
            double nz=lcg.get01()*4.0-2.0;

            if(m_source) {
                value = m_source->get(nx,ny,nz);
            } else {
                value = sqrt(nx * nx + ny * ny + nz * nz);
            }
            if(value < mn) mn = value;
            if(value > mx) mx = value;
        }
        m_scale3=(m_high-m_low) / (mx-mn);
        m_offset3=m_low-mn*m_scale3;

        // Calculate 4D
        mn=10000.0;
        mx=-10000.0;
        for(int c=0; c<10000; ++c)
        {
            double nx=lcg.get01()*4.0-2.0;
            double ny=lcg.get01()*4.0-2.0;
            double nz=lcg.get01()*4.0-2.0;
            double nw=lcg.get01()*4.0-2.0;

            if(m_source) {
                value = m_source->get(nx,ny,nz,nw);
            } else {
                value = sqrt(nx * nx + ny * ny + nz * nz + nw * nw);
            }
            if(value < mn) mn = value;
            if(value > mx) mx = value;
        }
        m_scale4=(m_high-m_low) / (mx-mn);
        m_offset4=m_low-mn*m_scale4;

        // Calculate 6D
        mn=10000.0;
        mx=-10000.0;
        for(int c=0; c<10000; ++c)
        {
            double nx=lcg.get01()*4.0-2.0;
            double ny=lcg.get01()*4.0-2.0;
            double nz=lcg.get01()*4.0-2.0;
            double nw=lcg.get01()*4.0-2.0;
            double nu=lcg.get01()*4.0-2.0;
            double nv=lcg.get01()*4.0-2.0;

            if(m_source) {
                value = m_source->get(nx,ny,nz,nw,nu,nv);
            } else {
                value = sqrt(nx * nx + ny * ny + nz * nz + nw * nw + nu * nu + nv * nv);
            }
            if(value < mn) mn = value;
            if(value > mx) mx = value;
        }
        m_scale6=(m_high-m_low) / (mx-mn);
        m_offset6=m_low-mn*m_scale6;
    }


    double CImplicitAutoCorrect::get(double x, double y)
    {
        double value;

        if(m_source) {
            value = m_source->get(x,y);
        } else {
            value = sqrt(x * x + y * y);
        }

        return std::max(m_low, std::min(m_high, value * m_scale2 + m_offset2));
    }

    double CImplicitAutoCorrect::get(double x, double y, double z)
    {
        double value;

        if(m_source) {
            value = m_source->get(x,y);
        } else {
            value = sqrt(x * x + y * y + z * z);
        }

        return std::max(m_low, std::min(m_high, value * m_scale3 + m_offset3));
    }
    double CImplicitAutoCorrect::get(double x, double y, double z, double w)
    {
        double value;

        if(m_source) {
            value = m_source->get(x,y);
        } else {
            value = sqrt(x * x + y * y + z * z + w * w);
        }

        return std::max(m_low, std::min(m_high, value * m_scale4 + m_offset4));
    }

    double CImplicitAutoCorrect::get(double x, double y, double z, double w, double u, double v)
    {
        double value;

        if(m_source) {
            value = m_source->get(x,y);
        } else {
            value = sqrt(x * x + y * y + z * z + w * w + u * u + v * v);
        }

        return std::max(m_low, std::min(m_high, value * m_scale6 + m_offset6));
    }
};
