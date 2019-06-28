#ifndef D1_BUS_H
#define D1_BUS_H

#include "VehiclesCategory.h"

class D1_Bus : public VehiclesCategory
{
    public:
        D1_Bus(size_t max_seats = 8, size_t max_length_m = 8);
        virtual ~D1_Bus();

        // VIRTUAL
        virtual const string information();
        virtual const string shortDescription();

    protected:

    private:
        size_t max_seats;
        size_t max_length_m;
};

#endif // D1_BUS_H
