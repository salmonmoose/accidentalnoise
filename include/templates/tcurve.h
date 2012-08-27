#ifndef CURVE_TEMPLATE
#define CURVE_TEMPLATE

#include <vector>
#include <iostream>
#include <cmath>

// Define a general-case curve. Control points are specified using a double value, t, and a point value, point.
// The curve is interpolated using one of a set of interpolation schemes.

template<class T> class TBasicCurve
{
    public:
    TBasicCurve(){};
    ~TBasicCurve(){};

    void pushPoint(double t, T point)
    {
        tIterType iter=findControlPoint(t);
        m_points.insert(iter,SControlPoint(t,point));
        return;
    }

    void clear()
    {
        m_points.clear();
    };

    T linearInterp(double t)
    {
        tIterType iter = findControlPoint(t);

        if(iter==m_points.end())
        {
            //std::cout << "Couldn't find control point;" << std::endl;
            // Should I special-case some logic where t==1? In the current scheme, it's undefined

            return T(0);
        }

        // Found a control point, now get one below
        tIterType prev_iter = iter-1;
        if(prev_iter==m_points.end())
        {
            //std::cout << "Couldn't find previous control point" << std::endl;
            return T(0);
        }



        double t0=(*prev_iter).m_t;
        double t1=(*iter).m_t;
        double interp=(t-t0)/(t1-t0);

        T v0=(*prev_iter).m_value;
        T v1=(*iter).m_value;

        //std::cout << "Input value: " << t << std::endl;
        //std::cout << "Found control points: " << t0 << " and " << t1 << " with interp of: " << interp << std::endl;

        return v0 + T((v1-v0)*interp);
    }


    T cubicInterp(double t)
    {
        tIterType iter = findControlPoint(t);

        if(iter==m_points.end())
        {
            //std::cout << "Couldn't find control point;" << std::endl;
            // Should I special-case some logic where t==1? In the current scheme, it's undefined

            return T(0);
        }

        // Found a control point, now get one below
        tIterType prev_iter = iter-1;
        if(prev_iter==m_points.end())
        {
            //std::cout << "Couldn't find previous control point" << std::endl;
            return T(0);
        }



        double t0=(*prev_iter).m_t;
        double t1=(*iter).m_t;
        double interp=(t-t0)/(t1-t0);
        interp=(interp*interp*(3-2*interp));

        T v0=(*prev_iter).m_value;
        T v1=(*iter).m_value;

        //std::cout << "Input value: " << t << std::endl;
        //std::cout << "Found control points: " << t0 << " and " << t1 << " with interp of: " << interp << std::endl;

        return v0 + T((v1-v0)*interp);
    };

    T quinticInterp(double t)
    {
        tIterType iter = findControlPoint(t);

        if(iter==m_points.end())
        {
            //std::cout << "Couldn't find control point;" << std::endl;
            // Should I special-case some logic where t==1? In the current scheme, it's undefined

            return T(0);
        }

        // Found a control point, now get one below
        tIterType prev_iter = iter-1;
        if(prev_iter==m_points.end())
        {
            //std::cout << "Couldn't find previous control point" << std::endl;
            return T(0);
        }



        double t0=(*prev_iter).m_t;
        double t1=(*iter).m_t;
        double interp=(t-t0)/(t1-t0);
        interp=interp*interp*interp*(interp*(interp*6-15)+10);

        T v0=(*prev_iter).m_value;
        T v1=(*iter).m_value;

        //std::cout << "Input value: " << t << std::endl;
        //std::cout << "Found control points: " << t0 << " and " << t1 << " with interp of: " << interp << std::endl;

        return v0 + T((v1-v0)*interp);
    };


    protected:
    struct SControlPoint
    {
        SControlPoint(double t, T v)
        {
            m_t=t;
            m_value=v;
        };
        double m_t;
        T m_value;
    };
    typedef typename std::vector<SControlPoint>::iterator tIterType;

    std::vector<SControlPoint> m_points;

    tIterType findControlPoint(double t)
    {
        // Find the first control point where p.t > t
        tIterType iter=m_points.begin();
        while(iter != m_points.end())
        {
            if(t<(*iter).m_t)
            {
                return iter;
            }
            ++iter;
        }

        return m_points.end();
    }

};

#endif
