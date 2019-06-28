#ifndef D1E_BUS_H
#define D1E_BUS_H

#include "VehiclesCategory.h"

class D1E_Bus : public VehiclesCategory
{
    public:
        D1E_Bus(size_t max_seats = 8, size_t max_mass_kg = 750);
        virtual ~D1E_Bus();

        // VIRTUAL
        virtual const string information();
        virtual const string shortDescription();

    protected:

    private:
        size_t max_seats;
        size_t max_mass_kg;
};

#endif // D1E_BUS_H
