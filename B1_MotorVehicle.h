#ifndef B1_MOTORVEHICLE_Hmax_passengers
#define B1_MOTORVEHICLE_H

#include "VehiclesCategory.h"

class B1_MotorVehicle : public VehiclesCategory
{
    public:
        B1_MotorVehicle();
        virtual ~B1_MotorVehicle();

        // VIRTUAL
        virtual const string information();
        virtual const string shortDescription();

    protected:

    private:
        size_t max_mass_kg;
        size_t max_passengers;
        size_t trailer_mass_kg;
};

#endif // B1_MOTORVEHICLE_H
