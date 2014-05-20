#ifndef IMPLICIT_BASIS_FUNCTION_H
#define IMPLICIT_BASIS_FUNCTION_H
#include "noise_gen.h"
#include "implicitmodulebase.h"
#include <map>
#include <string>

namespace anl
{

    enum EBasisTypes
    {
        VALUE,
        GRADIENT,
        GRADVAL,
        SIMPLEX,
        WHITE
    };

    enum EInterpTypes
    {
        NONE,
        LINEAR,
        CUBIC,
        QUINTIC
    };

    class CImplicitBasisFunction : public CImplicitModuleBase
    {
        public:
        CImplicitBasisFunction();
        CImplicitBasisFunction(int type, int interp);

        static std::map<std::string, EBasisTypes> BasisMap;
        static std::map<std::string, EInterpTypes> InterpMap;

        void setType(int i);
        int getType();

        void setInterp(int i);
        int getInterp();

        void setRotationAngle(double ax, double ay, double az, double angle);

        void setSeed(unsigned int seed);
        int getSeed();

        double get(double x, double y);
        double get(double x, double y, double z);
        double get(double x, double y, double z, double w);
        double get(double x, double y, double z, double w, double u, double v);


        protected:

        double m_scale[4], m_offset[4];
        interp_func m_interp;
        noise_func2 m_2d;
        noise_func3 m_3d;
        noise_func4 m_4d;
        noise_func6 m_6d;
        unsigned int m_seed;
        int m_interpolation;
        int m_type;

        double m_rotmatrix[3][3];
        double cos2d,sin2d;

        void setMagicNumbers(int type);

    };

};

#endif
