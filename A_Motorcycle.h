#ifndef A_MOTORCYCLE_H
#define A_MOTORCYCLE_H

#include "VehiclesCategory.h"

class A_Motorcycle : public VehiclesCategory
{
    public:
        A_Motorcycle();
        virtual ~A_Motorcycle();

        // VIRTUAL
        virtual const string information();
        virtual const string shortDescription();

    protected:

    private:
};

#endif // A_MOTORCYCLE_H
