#ifndef A2_MOTORCYCLE_H
#define A2_MOTORCYCLE_H

#include "VehiclesCategory.h"

using namespace std;

class A2_Motorcycle : public VehiclesCategory
{
    public:
        A2_Motorcycle(size_t max_speed = 80, size_t cylinder_capacity = 125, size_t max_power = 35);
        virtual ~A2_Motorcycle();

        // VIRTUAL
        virtual const string information();
        virtual const string shortDescription();

    protected:

    private:
        size_t max_speed;
        size_t cylinder_capacity;
        size_t max_power;
};

#endif // A2_MOTORCYCLE_H
