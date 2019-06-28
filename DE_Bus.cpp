#include "DE_Bus.h"

DE_Bus::DE_Bus(size_t max_seats, size_t max_length_m, size_t trailer_mass_kg)
            : VehiclesCategory("DE", 24, 4)
{
    this->max_seats = max_seats;
    this->max_length_m = max_length_m;
    this->trailer_mass_kg = trailer_mass_kg;
}

DE_Bus::~DE_Bus()
{
    //dtor
}

const string DE_Bus::information()
{
    stringstream ss;

    ss << " D Bus" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Combinations of vehicles where the tractor vehicle is" << endl;
    ss << " in category D and its trailer has a maximum authorised" << endl;
    ss << " mass of over 750 kilograms (1,650 lb)." << endl << endl;

    return ss.str();
}

const string DE_Bus::shortDescription()
{
    stringstream ss;

    ss << " |" << string(50, '-') << endl;
    ss << " |   = Category " << this->category_class << endl;
    ss << " |" << string(50, '-') << endl;
    ss << " | Number of Wheels:     | > " << this->number_of_wheels << endl;
    ss << " | Minimum Driver Age:   | " << this->age_of_aquisition << " years old" << endl;
    ss << " | Maximum Seats:        | > " << this->max_seats << " seats" << endl;
    ss << " | Trailer Mass:         | > " << this->trailer_mass_kg << " kg" << endl;
    ss << " |" << string(50, '-') << endl << endl;

    return ss.str();
}
