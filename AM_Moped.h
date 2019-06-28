#ifndef AM_MOPED_H
#define AM_MOPED_H

#include "VehiclesCategory.h"

using namespace std;

class AM_Moped : public VehiclesCategory
{
    public:
        AM_Moped(size_t max_speed = 45, size_t cylinder_capacity = 50, size_t max_power = 25);
        virtual ~AM_Moped();

        // VIRTUAL
        virtual const string information();
        virtual const string shortDescription();

    protected:

    private:
        size_t max_speed;
        size_t cylinder_capacity;
        size_t max_power;
};

#endif // AM_MOPED_H
