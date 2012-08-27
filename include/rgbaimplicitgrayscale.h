#ifndef RGBA_IMPLICITGRAYSCALE_H
#define RGBA_IMPLICITGRAYSCALE_H
#include "rgbamodulebase.h"
#include "implicitmodulebase.h"

/***************************************************************
CRGBAImplicitGrayscale

    Given an input source (CImplicitModuleBase), output an RGBA value
that represents the grayscale value of the input, with an alpha of 1
****************************************************************/

namespace anl
{
    class CRGBAImplicitGrayscale : public CRGBAModuleBase
    {
        public:
        CRGBAImplicitGrayscale();
        ~CRGBAImplicitGrayscale();

        void setSource(CImplicitModuleBase *m);

        SRGBA get(double x, double y);
        SRGBA get(double x, double y, double z);
        SRGBA get(double x, double y, double z, double w);
        SRGBA get(double x, double y, double z, double w, double u, double v);

        protected:
        CImplicitModuleBase *m_source;
    };
};

#endif
