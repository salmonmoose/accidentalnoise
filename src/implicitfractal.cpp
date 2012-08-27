#include "implicitfractal.h"
#include <cmath>
#include <iostream>

using namespace anl;
CImplicitFractal::CImplicitFractal(unsigned int type, unsigned int basistype, unsigned int interptype)
{
    setNumOctaves(8);
    setFrequency(1.0);
    setLacunarity(2.0);
    setType(type);
    setAllSourceTypes(basistype, interptype);
    resetAllSources();
}

void CImplicitFractal::setNumOctaves(int n){if(n>=MaxSources) n=MaxSources-1; m_numoctaves=n;}
void CImplicitFractal::setFrequency(double f){m_frequency=f;}
void CImplicitFractal::setLacunarity(double l){m_lacunarity=l;}
void CImplicitFractal::setGain(double g){m_gain=g;}
void CImplicitFractal::setOffset(double o){m_offset=o;}
void CImplicitFractal::setH(double h){m_H=h;}

void CImplicitFractal::setType(unsigned int t)
	{
		m_type=t;
		switch(t)
		{
		case FBM:  m_H=1.0; m_gain=0;m_offset=0; fBm_calcWeights(); break;
		case RIDGEDMULTI: m_H=0.9; m_gain=2; m_offset=1; RidgedMulti_calcWeights(); break;
		case BILLOW: m_H=1; m_gain=0; m_offset=0; Billow_calcWeights(); break;
		case MULTI: m_H=1; m_offset=0; m_gain=0; Multi_calcWeights(); break;
		case HYBRIDMULTI: m_H=0.25; m_gain=1; m_offset=0.7; HybridMulti_calcWeights(); break;
		default: m_H=1.0; m_gain=0;m_offset=0; fBm_calcWeights(); break;
		};
	}

	void CImplicitFractal::setAllSourceTypes(unsigned int basis_type, unsigned int interp)
    {
        for(int i=0; i<MaxSources;++i)
        {
            m_basis[i].setType(basis_type);
            m_basis[i].setInterp(interp);
        }
    }

	void CImplicitFractal::setSourceType(int which, unsigned int type, unsigned int interp)
    {
        if(which>=MaxSources || which<0) return;
        m_basis[which].setType(type);
        m_basis[which].setInterp(interp);
    }

	void CImplicitFractal::overrideSource(int which, CImplicitModuleBase *b)
	{
		if(which<0 || which>=MaxSources) return;
		m_source[which]=b;
	}

	void CImplicitFractal::resetSource(int which)
	{
		if(which<0 || which>=MaxSources) return;
		m_source[which]=&m_basis[which];
	}

	void CImplicitFractal::resetAllSources()
	{
		for(int c=0; c<MaxSources; ++c) m_source[c] = &m_basis[c];
	}


	void CImplicitFractal::setSeed(unsigned int seed)
	{
		for(int c=0; c<MaxSources; ++c) m_source[c]->setSeed(seed+c*300);
	}

	CImplicitBasisFunction *CImplicitFractal::getBasis(int which)
	{
		if(which<0 || which>=MaxSources) return 0;
		return &m_basis[which];
	}

	double CImplicitFractal::get(double x, double y)
	{
	    double v;
		switch(m_type)
		{
		case FBM: v=fBm_get(x,y); break;
		case RIDGEDMULTI: v=RidgedMulti_get(x,y); break;
		case BILLOW: v=Billow_get(x,y); break;
		case MULTI: v=Multi_get(x,y); break;
		case HYBRIDMULTI: v=HybridMulti_get(x,y); break;
		default: v=fBm_get(x,y); break;
		}
		return clamp(v,-1.0,1.0);
	}

	double CImplicitFractal::get(double x, double y, double z)
	{
	    double val;
	    switch(m_type)
		{
		case FBM: val=fBm_get(x,y,z); break;
		case RIDGEDMULTI: val=RidgedMulti_get(x,y,z); break;
		case BILLOW: val=Billow_get(x,y,z); break;
		case MULTI: val=Multi_get(x,y,z); break;
		case HYBRIDMULTI: val=HybridMulti_get(x,y,z); break;
		default: val=fBm_get(x,y,z); break;
		}
		return clamp(val,-1.0,1.0);
	}

	double CImplicitFractal::get(double x, double y, double z, double w)
	{
	    double val;
		switch(m_type)
		{
		case FBM: val=fBm_get(x,y,z,w); break;
		case RIDGEDMULTI: val=RidgedMulti_get(x,y,z,w); break;
		case BILLOW: val=Billow_get(x,y,z,w); break;
		case MULTI: val=Multi_get(x,y,z,w); break;
		case HYBRIDMULTI: val=HybridMulti_get(x,y,z,w); break;
		default: val=fBm_get(x,y,z,w); break;
		}
		return clamp(val,-1.0,1.0);
	}

	double CImplicitFractal::get(double x, double y, double z, double w, double u, double v)
	{
	    double val;
		switch(m_type)
		{
		case FBM: val=fBm_get(x,y,z,w,u,v); break;
		case RIDGEDMULTI: val=RidgedMulti_get(x,y,z,w,u,v); break;
		case BILLOW: val=Billow_get(x,y,z,w,u,v); break;
		case MULTI: val=Multi_get(x,y,z,w,u,v); break;
		case HYBRIDMULTI: val=HybridMulti_get(x,y,z,w,u,v); break;
		default: val=fBm_get(x,y,z,w,u,v); break;
		}

		return clamp(val,-1.0,1.0);
	}

void CImplicitFractal::fBm_calcWeights()
{
	//std::cout << "Weights: ";
	for(int i=0; i<(int)MaxSources; ++i)
    {
        m_exparray[i]= pow(m_lacunarity, -i*m_H);
    }

    // Calculate scale/bias pairs by guessing at minimum and maximum values and remapping to [-1,1]
    double minvalue=0.0, maxvalue=0.0;
    for(int i=0; i<MaxSources; ++i)
    {
        minvalue += -1.0 * m_exparray[i];
        maxvalue += 1.0 * m_exparray[i];

        double A=-1.0, B=1.0;
        double scale = (B-A) / (maxvalue-minvalue);
        double bias = A - minvalue*scale;
        m_correct[i][0]=scale;
        m_correct[i][1]=bias;

        //std::cout << minvalue << " " << maxvalue << " " << scale << " " << bias << std::endl;
    }
}

void CImplicitFractal::RidgedMulti_calcWeights()
{
	for(int i=0; i<(int)MaxSources; ++i)
    {
        m_exparray[i]= pow(m_lacunarity, -i*m_H);
    }

            // Calculate scale/bias pairs by guessing at minimum and maximum values and remapping to [-1,1]
    double minvalue=0.0, maxvalue=0.0;
    for(int i=0; i<MaxSources; ++i)
    {
        minvalue += (m_offset-1.0)*(m_offset-1.0)*m_exparray[i];
        maxvalue += (m_offset)*(m_offset) * m_exparray[i];

        double A=-1.0, B=1.0;
        double scale = (B-A) / (maxvalue-minvalue);
        double bias = A - minvalue*scale;
        m_correct[i][0]=scale;
        m_correct[i][1]=bias;
    }

}

void CImplicitFractal::Billow_calcWeights()
{
	for(int i=0; i<(int)MaxSources; ++i)
    {
        m_exparray[i]= pow(m_lacunarity, -i*m_H);
    }

    // Calculate scale/bias pairs by guessing at minimum and maximum values and remapping to [-1,1]
    double minvalue=0.0, maxvalue=0.0;
    for(int i=0; i<MaxSources; ++i)
    {
        minvalue += -1.0 * m_exparray[i];
        maxvalue += 1.0 * m_exparray[i];

        double A=-1.0, B=1.0;
        double scale = (B-A) / (maxvalue-minvalue);
        double bias = A - minvalue*scale;
        m_correct[i][0]=scale;
        m_correct[i][1]=bias;
    }

}

void CImplicitFractal::Multi_calcWeights()
{
	for(int i=0; i<(int)MaxSources; ++i)
    {
        m_exparray[i]= pow(m_lacunarity, -i*m_H);
    }

    // Calculate scale/bias pairs by guessing at minimum and maximum values and remapping to [-1,1]
    double minvalue=1.0, maxvalue=1.0;
    for(int i=0; i<MaxSources; ++i)
    {
        minvalue *= -1.0*m_exparray[i]+1.0;
        maxvalue *= 1.0*m_exparray[i]+1.0;

        double A=-1.0, B=1.0;
        double scale = (B-A) / (maxvalue-minvalue);
        double bias = A - minvalue*scale;
        m_correct[i][0]=scale;
        m_correct[i][1]=bias;
    }

}

void CImplicitFractal::HybridMulti_calcWeights()
{
	for(int i=0; i<(int)MaxSources; ++i)
    {
        m_exparray[i]= pow(m_lacunarity, -i*m_H);
    }

    // Calculate scale/bias pairs by guessing at minimum and maximum values and remapping to [-1,1]
    double minvalue=1.0, maxvalue=1.0;
    double weightmin, weightmax;
    double A=-1.0, B=1.0, scale, bias;

    minvalue = m_offset - 1.0;
    maxvalue = m_offset + 1.0;
    weightmin = m_gain*minvalue;
    weightmax = m_gain*maxvalue;

    scale = (B-A) / (maxvalue-minvalue);
    bias = A - minvalue*scale;
    m_correct[0][0]=scale;
    m_correct[0][1]=bias;


    for(int i=1; i<MaxSources; ++i)
    {
        if(weightmin>1.0) weightmin=1.0;
        if(weightmax>1.0) weightmax=1.0;

        double signal=(m_offset-1.0)*m_exparray[i];
        minvalue += signal*weightmin;
        weightmin *=m_gain*signal;

        signal=(m_offset+1.0)*m_exparray[i];
        maxvalue += signal*weightmax;
        weightmax *=m_gain*signal;


        scale = (B-A) / (maxvalue-minvalue);
        bias = A - minvalue*scale;
        m_correct[i][0]=scale;
        m_correct[i][1]=bias;
    }

}


double CImplicitFractal::fBm_get(double x, double y)
{
	double value=0.0, signal;
    x*=m_frequency;
    y*=m_frequency;

	//std::cout << "fBm get input: " << x <<"," << y << std::endl;
	//std::cout << "Paramters: " << m_H << "," << m_gain << "," << m_offset << "," << m_frequency << "," << m_lacunarity << std::endl;


    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        signal = m_source[i]->get(x,y) * m_exparray[i];
        value += signal;
        x*=m_lacunarity;
        y*=m_lacunarity;
    }


    //return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
    return value;
}

double CImplicitFractal::fBm_get(double x, double y, double z)
{
    double value=0.0, signal;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        signal = m_source[i]->get(x,y,z) * m_exparray[i];
        value += signal;
        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
    }


   // return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
   return value;
}

double CImplicitFractal::fBm_get(double x, double y, double z, double w)
{
	double value=0.0, signal;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;
    w*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        signal = m_source[i]->get(x,y,z,w) * m_exparray[i];
        value += signal;
        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
        w*=m_lacunarity;
    }


    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::fBm_get(double x, double y, double z, double w, double u, double v)
{
	double value=0.0, signal;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;
    w*=m_frequency;
	u*=m_frequency;
	v*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        signal = m_source[i]->get(x,y,z,w,u,v) * m_exparray[i];
        value += signal;
        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
        w*=m_lacunarity;
		u*=m_lacunarity;
		v*=m_lacunarity;
    }


    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::Multi_get(double x, double y)
{
	    double value=1.0;
    x*=m_frequency;
    y*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        value *= m_source[i]->get(x,y)*m_exparray[i]+1.0;
        x*=m_lacunarity;
        y*=m_lacunarity;

    }

    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::Multi_get(double x, double y, double z, double w)
{
    double value=1.0;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;
    w*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        value *= m_source[i]->get(x,y,z,w)*m_exparray[i]+1.0;
        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
        w*=m_lacunarity;
    }

    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::Multi_get(double x, double y, double z)
{
    double value=1.0;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        value *= m_source[i]->get(x,y,z)*m_exparray[i]+1.0;
        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
    }

    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}


double CImplicitFractal::Multi_get(double x, double y, double z, double w, double u, double v)
{
	    double value=1.0;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;
    w*=m_frequency;
	u*=m_frequency;
	v*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        value *= m_source[i]->get(x,y,z,w,u,v)*m_exparray[i]+1.0;
        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
        w*=m_lacunarity;
		u*=m_lacunarity;
		v*=m_lacunarity;
    }

    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}


double CImplicitFractal::Billow_get(double x, double y)
{
	double value=0.0, signal;
    x*=m_frequency;
    y*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        signal = m_source[i]->get(x,y);
        signal = 2.0 * fabs(signal) - 1.0;
        value += signal * m_exparray[i];

        x*=m_lacunarity;
        y*=m_lacunarity;

    }

    value += 0.5;
    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::Billow_get(double x, double y, double z, double w)
{
	double value=0.0, signal;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;
    w*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        signal = m_source[i]->get(x,y,z,w);
        signal = 2.0 * fabs(signal) - 1.0;
        value += signal * m_exparray[i];

        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
        w*=m_lacunarity;
    }

    value += 0.5;
    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::Billow_get(double x, double y, double z)
{
    double value=0.0, signal;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        signal = m_source[i]->get(x,y,z);
        signal = 2.0 * fabs(signal) - 1.0;
        value += signal * m_exparray[i];

        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
    }

    value += 0.5;
    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::Billow_get(double x, double y, double z, double w, double u, double v)
{
	double value=0.0, signal;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;
    w*=m_frequency;
	u*=m_frequency;
	v*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        signal = m_source[i]->get(x,y,z,w,u,v);
        signal = 2.0 * fabs(signal) - 1.0;
        value += signal * m_exparray[i];

        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
        w*=m_lacunarity;
		u*=m_lacunarity;
		v*=m_lacunarity;
    }

    value += 0.5;
    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::RidgedMulti_get(double x, double y)
{
	double result=0.0, signal;
    x*=m_frequency;
    y*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        signal=m_source[i]->get(x,y);
        signal=m_offset-fabs(signal);
        signal *= signal;
        result +=signal*m_exparray[i];

        x*=m_lacunarity;
        y*=m_lacunarity;

    }

    return result*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::RidgedMulti_get(double x, double y, double z, double w)
{
	double result=0.0, signal;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;
    w*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        signal=m_source[i]->get(x,y,z,w);
        signal=m_offset-fabs(signal);
        signal *= signal;
        result +=signal*m_exparray[i];

        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
        w*=m_lacunarity;
    }

    return result*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::RidgedMulti_get(double x, double y, double z)
{
    double result=0.0, signal;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        signal=m_source[i]->get(x,y,z);
        signal=m_offset-fabs(signal);
        signal *= signal;
        result +=signal*m_exparray[i];

        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
    }

    return result*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::RidgedMulti_get(double x, double y, double z, double w, double u, double v)
{
	double result=0.0, signal;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;
    w*=m_frequency;
	u*=m_frequency;
	v*=m_frequency;

    for(unsigned int i=0; i<m_numoctaves; ++i)
    {
        signal=m_source[i]->get(x,y,z,w,u,v);
        signal=m_offset-fabs(signal);
        signal *= signal;
        result +=signal*m_exparray[i];

        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
        w*=m_lacunarity;
		u*=m_lacunarity;
		v*=m_lacunarity;
    }

    return result*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::HybridMulti_get(double x, double y)
{
	double value, signal, weight;
    x*=m_frequency;
    y*=m_frequency;


    value = m_source[0]->get(x,y) + m_offset;
    weight = m_gain * value;
    x*=m_lacunarity;
    y*=m_lacunarity;

    for(unsigned int i=1; i<m_numoctaves; ++i)
    {
        if(weight>1.0) weight=1.0;
        signal = (m_source[i]->get(x,y)+m_offset)*m_exparray[i];
        value += weight*signal;
        weight *=m_gain * signal;
        x*=m_lacunarity;
        y*=m_lacunarity;

    }

    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::HybridMulti_get(double x, double y, double z)
{
    double value, signal, weight;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;

    value = m_source[0]->get(x,y,z) + m_offset;
    weight = m_gain * value;
    x*=m_lacunarity;
    y*=m_lacunarity;
    z*=m_lacunarity;

    for(unsigned int i=1; i<m_numoctaves; ++i)
    {
        if(weight>1.0) weight=1.0;
        signal = (m_source[i]->get(x,y,z)+m_offset)*m_exparray[i];
        value += weight*signal;
        weight *=m_gain * signal;
        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
    }

    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::HybridMulti_get(double x, double y, double z, double w)
{
	double value, signal, weight;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;
    w*=m_frequency;

    value = m_source[0]->get(x,y,z,w) + m_offset;
    weight = m_gain * value;
    x*=m_lacunarity;
    y*=m_lacunarity;
    z*=m_lacunarity;
    w*=m_lacunarity;

    for(unsigned int i=1; i<m_numoctaves; ++i)
    {
        if(weight>1.0) weight=1.0;
        signal = (m_source[i]->get(x,y,z,w)+m_offset)*m_exparray[i];
        value += weight*signal;
        weight *=m_gain * signal;
        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
        w*=m_lacunarity;
    }

    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}

double CImplicitFractal::HybridMulti_get(double x, double y, double z, double w, double u, double v)
{
	double value, signal, weight;
    x*=m_frequency;
    y*=m_frequency;
    z*=m_frequency;
    w*=m_frequency;
	u*=m_frequency;
	v*=m_frequency;

    value = m_source[0]->get(x,y,z,w,u,v) + m_offset;
    weight = m_gain * value;
    x*=m_lacunarity;
    y*=m_lacunarity;
    z*=m_lacunarity;
    w*=m_lacunarity;
	u*=m_lacunarity;
	v*=m_lacunarity;

    for(unsigned int i=1; i<m_numoctaves; ++i)
    {
        if(weight>1.0) weight=1.0;
        signal = (m_source[i]->get(x,y,z,w,u,v)+m_offset)*m_exparray[i];
        value += weight*signal;
        weight *=m_gain * signal;
        x*=m_lacunarity;
        y*=m_lacunarity;
        z*=m_lacunarity;
        w*=m_lacunarity;
		u*=m_lacunarity;
		v*=m_lacunarity;
    }

    return value*m_correct[m_numoctaves-1][0] + m_correct[m_numoctaves-1][1];
}
