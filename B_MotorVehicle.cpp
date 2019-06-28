#include "B_MotorVehicle.h"

B_MotorVehicle::B_MotorVehicle(size_t max_mass_kg, size_t max_passengers, size_t trailer_mass_kg)
                : VehiclesCategory("B", 18, 4)
{
    this->max_mass_kg = max_mass_kg;
    this->max_passengers = max_passengers;
    this->trailer_mass_kg = trailer_mass_kg;
}

B_MotorVehicle::~B_MotorVehicle()
{
    //dtor
}

const string B_MotorVehicle::information()
{
    stringstream ss;

    ss << " B Motor Vehicle" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Motor vehicles with a maximum authorised mass (MAM)" << endl;
    ss << " not exceeding 3,500 kilograms (7,700 lb) and designed" << endl;
    ss << " and constructed for the carriage of no more than eight" << endl;
    ss << " passengers in addition to the driver; motor vehicles in" << endl;
    ss << " this category may be combined with a trailer having a" << endl;
    ss << " maximum authorised mass which does not exceed 750 kilograms (1,650 lb)." << endl;
    ss << " You can also tow heavier trailers if the total MAM of the vehicle" << endl;
    ss << " and trailer isn’t more than 3,500 kilograms (7,700 lb)." << endl;
    ss << " " << string(70, '.') << endl;
    ss << " The limit in the first condition is: 3,500 kilograms" << endl;
    ss << " (7,700 lb) + 750 kilograms (1,650 lb)= 4,250 kilograms (9,370 lb)." << endl;
    ss << " " << string(70, '.') << endl;
    ss << " The limit for in the second condition is: 2,500 kilograms" << endl;
    ss << " (5,500 lb) + 1,000 kilograms (2,200 lb) = 3,500 kilograms (7,700 lb)." << endl;

    return ss.str();
}

const string B_MotorVehicle::shortDescription()
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
