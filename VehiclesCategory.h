#ifndef VEHICLESCATEGORY_H
#define VEHICLESCATEGORY_H

#include "HEADER_FILES_H.h"

using namespace std;

class VehiclesCategory
{
    public:
        VehiclesCategory();
        VehiclesCategory(string category_class, size_t age_of_aquisition, size_t number_of_wheels, size_t number_of_wheels_optional = 2);
        virtual ~VehiclesCategory();

        // VIRTUAL
        virtual const string information() = 0;
        virtual const string shortDescription() = 0;

    protected:
        string category_class;
        size_t number_of_wheels;
        size_t age_of_aquisition;
        size_t number_of_wheels_optional;

    private:

};

#endif // VEHICLESCATEGORY_H
