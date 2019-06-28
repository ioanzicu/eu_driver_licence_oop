#ifndef C1_LARGEGOODSVEHICLE_H
#define C1_LARGEGOODSVEHICLE_H

#include "VehiclesCategory.h"

class C1_LargeGoodsVehicle : public VehiclesCategory
{
    public:
        C1_LargeGoodsVehicle(size_t max_mass_kg = 7500, size_t trailer_mass_kg = 750);
        virtual ~C1_LargeGoodsVehicle();

        // VIRTUAL
        virtual const string information();
        virtual const string shortDescription();

    protected:

    private:
        size_t max_mass_kg;
        size_t trailer_mass_kg;
};

#endif // C1_LARGEGOODSVEHICLE_H
