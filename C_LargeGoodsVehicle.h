#ifndef C_LARGEGOODSVEHICLE_H
#define C_LARGEGOODSVEHICLE_H

#include "VehiclesCategory.h"

class C_LargeGoodsVehicle : public VehiclesCategory
{
    public:
        C_LargeGoodsVehicle(size_t max_mass_kg = 3500, size_t max_passengers = 8, size_t trailer_mass_kg = 750);
        virtual ~C_LargeGoodsVehicle();

        // VIRTUAL
        virtual const string information();
        virtual const string shortDescription();

    protected:

    private:
        size_t max_mass_kg;
        size_t max_passengers;
        size_t trailer_mass_kg;
};

#endif // C_LARGEGOODSVEHICLE_H
