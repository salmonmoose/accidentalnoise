#ifndef IMPLICIT_TIERS_H
#define IMPLICIT_TIERS_H
#include "implicitmodulebase.h"

namespace anl
{
    class CImplicitTiers : public CImplicitModuleBase
    {
        public:
        CImplicitTiers();
        CImplicitTiers(int numtiers, bool smooth);
        ~CImplicitTiers();

        void setSource(CImplicitModuleBase *m);
        void setNumTiers(int numtiers);
        void setSmooth(bool smooth);

        CImplicitModuleBase *getSource();
        int getNumTiers();
        bool getSmooth();

        double get(double x, double y);
        double get(double x, double y, double z);
        double get(double x, double y, double z, double w);
        double get(double x, double y, double z, double w, double u, double v);

        protected:
        CImplicitModuleBase *m_source;
        int m_numtiers;
        bool m_smooth;
    };
};

#endif
