#ifndef DE_BUS_H
#define DE_BUS_H

#include "VehiclesCategory.h"

class DE_Bus : public VehiclesCategory
{
    public:
        DE_Bus(size_t max_seats = 8, size_t max_length_m = 8, size_t trailer_mass_kg = 750);
        virtual ~DE_Bus();

        // VIRTUAL
        virtual const string information();
        virtual const string shortDescription();

    protected:

    private:
        size_t max_seats;
        size_t max_length_m;
        size_t trailer_mass_kg;
};

#endif // DE_BUS_H
