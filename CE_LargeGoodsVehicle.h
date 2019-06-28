#ifndef CE_LARGEGOODSVEHICLE_H
#define CE_LARGEGOODSVEHICLE_H

#include "VehiclesCategory.h"

class CE_LargeGoodsVehicle : public VehiclesCategory
{
    public:
        CE_LargeGoodsVehicle(size_t max_mass_kg = 750);
        virtual ~CE_LargeGoodsVehicle();

        // VIRTUAL
        virtual const string information();
        virtual const string shortDescription();

    protected:

    private:
        size_t max_mass_kg;
};

#endif // CE_LARGEGOODSVEHICLE_H
