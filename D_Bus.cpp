#include "D_Bus.h"

D_Bus::D_Bus(size_t max_seats, size_t max_length_m) : VehiclesCategory("D", 24, 4)
{
    this->max_seats = max_seats;
    this->max_length_m = max_length_m;
}

D_Bus::~D_Bus()
{
    //dtor
}

const string D_Bus::information()
{
    stringstream ss;

    ss << " D Bus" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Vehicles with more than 8 + 1 seats (buses)." << endl << endl;

    return ss.str();
}

const string D_Bus::shortDescription()
{
    stringstream ss;

    ss << " |" << string(50, '-') << endl;
    ss << " |   = Category " << this->category_class << endl;
    ss << " |" << string(50, '-') << endl;
    ss << " | Number of Wheels:     | > " << this->number_of_wheels << endl;
    ss << " | Minimum Driver Age:   | " << this->age_of_aquisition << " years old" << endl;
    ss << " | Maximum Length:       | " << this->max_length_m << " meters" << endl;
    ss << " | Maximum Seats:        | > " << this->max_seats << " seats" << endl;
    ss << " |" << string(50, '-') << endl << endl;

    return ss.str();
}
