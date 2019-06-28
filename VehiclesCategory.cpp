#include "VehiclesCategory.h"

VehiclesCategory::VehiclesCategory()
{
    //ctor
}

VehiclesCategory::VehiclesCategory(string category_class, size_t age_of_aquisition, size_t number_of_wheels, size_t number_of_wheels_optional)
{
    this->category_class = category_class;
    this->number_of_wheels = number_of_wheels;
    this->age_of_aquisition = age_of_aquisition;
    this->number_of_wheels_optional = number_of_wheels_optional;
}

VehiclesCategory::~VehiclesCategory()
{
    //dtor
}
