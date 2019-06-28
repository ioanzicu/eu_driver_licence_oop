#include "BE_MotorVehicle.h"

BE_MotorVehicle::BE_MotorVehicle(size_t max_mass_kg, size_t max_passengers, size_t trailer_mass_kg)
                : VehiclesCategory("BE", 18, 4)
{
    this->max_mass_kg = max_mass_kg;
    this->max_passengers = max_passengers;
    this->trailer_mass_kg = trailer_mass_kg;
}

BE_MotorVehicle::~BE_MotorVehicle()
{
    //dtor
}

const string BE_MotorVehicle::information()
{
    stringstream ss;

    ss << " BE Motor Vehicle" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Without prejudice to the provisions of type-approval" << endl;
    ss << " rules for the vehicles concerned, a combination of" << endl;
    ss << " vehicles consisting of a tractor vehicle in category B" << endl;
    ss << " and a trailer or semi-trailer where the maximum authorised" << endl;
    ss << " mass of the trailer or semi-trailer does not exceed 3,500 kilograms (7,700 lb)" << endl << endl;

    return ss.str();
}

const string BE_MotorVehicle::shortDescription()
{
    stringstream ss;

    ss << " |" << string(50, '-') << endl;
    ss << " |   = Category " << this->category_class << endl;
    ss << " |" << string(50, '-') << endl;
    ss << " | Number of Wheels:    | " << this->number_of_wheels << endl;
    ss << " | Minimum Driver Age:  | " << this->age_of_aquisition << " years old" << endl;
    ss << " | Maximum Mass:        | " << this->max_mass_kg << " kg" << endl;
    ss << " | Maximum Passengers:  | " << this->max_passengers << " persons" << endl;
    ss << " | Maximum Trailer Mass:| " << this->trailer_mass_kg << " kg" << endl;
    ss << " |" << string(50, '-') << endl << endl;


    return ss.str();
}
