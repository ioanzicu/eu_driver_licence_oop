#include "A_Motorcycle.h"

A_Motorcycle::A_Motorcycle() : VehiclesCategory ("A", 20, 2, 3)
{
    //ctor
}

A_Motorcycle::~A_Motorcycle()
{
    //dtor
}

const string A_Motorcycle::information()
{
    stringstream ss;

    ss << " A Motorcycle" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Any motorcycle or motor tricycle not in category A1/A2" << endl << endl;

    return ss.str();
}

const string A_Motorcycle::shortDescription()
{
    stringstream ss;

    ss << " |" << string(50, '-') << endl;
    ss << " |   = Category " << this->category_class << endl;
    ss << " |" << string(50, '-') << endl;
    ss << " | Number of Wheels:    | " << this->number_of_wheels << " or " << this->number_of_wheels_optional << endl;
    ss << " | Minimum Driver Age:  | " << this->age_of_aquisition << " years old" << endl;
    ss << " |" << string(50, '-') << endl << endl;

    return ss.str();
}
