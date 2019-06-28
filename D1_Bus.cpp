#include "D1_Bus.h"

D1_Bus::D1_Bus(size_t max_seats, size_t max_length_m) : VehiclesCategory("D1", 21, 4)
{
    this->max_seats = max_seats;
    this->max_length_m = max_length_m;
}

D1_Bus::~D1_Bus()
{
    //dtor
}

const string D1_Bus::information()
{
    stringstream ss;

    ss << " D1 Bus" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Light buses with a maximum of 16 + 1 seats," << endl;
    ss << " maximum length of 8 metres (26 ft). " << endl << endl;

    return ss.str();
}

const string D1_Bus::shortDescription()
{
    stringstream ss;

    ss << " |" << string(50, '-') << endl;
    ss << " |   = Category " << this->category_class << endl;
    ss << " |" << string(50, '-') << endl;
    ss << " | Number of Wheels:     | > " << this->number_of_wheels << endl;
    ss << " | Minimum Driver Age:   | " << this->age_of_aquisition << " years old" << endl;
    ss << " | Maximum Legth:        | " << this->max_length_m << " meters" << endl;
    ss << " | Maximum Seats:        | " << this->max_seats << " seats" << endl;
    ss << " |" << string(50, '-') << endl << endl;

    return ss.str();
}
