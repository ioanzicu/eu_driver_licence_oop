#ifndef B_MOTORVEHICLE_H
#define B_MOTORVEHICLE_H

#include "VehiclesCategory.h"

class B_MotorVehicle : public VehiclesCategory
{
    public:
        B_MotorVehicle(size_t max_mass_kg = 3500, size_t max_passengers = 8, size_t trailer_mass_kg = 750);
        virtual ~B_MotorVehicle();

        // VIRTUAL
        virtual const string information();
        virtual const string shortDescription();

    protected:

    private:
        size_t max_mass_kg;
        size_t max_passengers;
        size_t trailer_mass_kg;
};

#endif // B_MOTORVEHICLE_H
