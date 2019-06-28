#include "D1E_Bus.h"

D1E_Bus::D1E_Bus(size_t max_seats, size_t max_mass_kg) : VehiclesCategory("D1E", 21, 4)
{
    this->max_seats = max_seats;
    this->max_mass_kg = max_mass_kg;
}

D1E_Bus::~D1E_Bus()
{
    //dtor
}

const string D1E_Bus::information()
{
    stringstream ss;

    ss << " D1E Bus" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Combinations of vehicles where the tractor vehicle is in" << endl;
    ss << " category D1 and its trailer has a maximum authorised mass" << endl;
    ss << " of over 750 kilograms (1,650 lb)." << endl << endl;

    return ss.str();
}

const string D1E_Bus::shortDescription()
{
    stringstream ss;

    ss << " |" << string(50, '-') << endl;
    ss << " |   = Category " << this->category_class << endl;
    ss << " |" << string(50, '-') << endl;
    ss << " | Nnumber of Wheels:    | > " << this->number_of_wheels << endl;
    ss << " | Minimum Driver Age:   | " << this->age_of_aquisition << " years old" << endl;
    ss << " | Maximum Mass:         | > " << this->max_mass_kg << " kg" << endl;
    ss << " | Maximum Seats:        | > " << this->max_seats << " seats" << endl;
    ss << " |" << string(50, '-') << endl << endl;

    return ss.str();
}
