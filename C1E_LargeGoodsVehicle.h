#ifndef C1E_LARGEGOODSVEHICLE_H
#define C1E_LARGEGOODSVEHICLE_H

#include "VehiclesCategory.h"

class C1E_LargeGoodsVehicle : public VehiclesCategory
{
    public:
        C1E_LargeGoodsVehicle(size_t max_mass_kg = 12000, size_t trailer_mass_kg = 750);
        virtual ~C1E_LargeGoodsVehicle();

        // VIRTUAL
        virtual const string information();
        virtual const string shortDescription();

    protected:

    private:
        size_t max_mass_kg;
        size_t trailer_mass_kg;
};

#endif // C1E_LARGEGOODSVEHICLE_H
