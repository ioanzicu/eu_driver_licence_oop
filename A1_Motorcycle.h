#ifndef A1_MOTORCYCLE_H
#define A1_MOTORCYCLE_H

#include "VehiclesCategory.h"

class A1_Motorcycle : public VehiclesCategory
{
    public:
        A1_Motorcycle(size_t max_speed = 80, size_t cylinder_capacity = 125, size_t max_power = 11);
        virtual ~A1_Motorcycle();

        // VIRTUAL
        virtual const string information();
        virtual const string shortDescription();

    protected:

    private:
        size_t max_speed;
        size_t cylinder_capacity;
        size_t max_power;
};

#endif // A1_MOTORCYCLE_H
