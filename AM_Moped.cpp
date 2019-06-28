#include "AM_Moped.h"

AM_Moped::AM_Moped(size_t max_speed, size_t cylinder_capacity, size_t max_power)
                : VehiclesCategory("AM", 16, 2)
{
    this->max_speed = max_speed;
    this->cylinder_capacity = cylinder_capacity;
    this->max_power = max_power;
}

AM_Moped::~AM_Moped()
{
    //dtor
}


const string AM_Moped::information()
{
    stringstream ss;

    ss << " = AM Moped =" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Two-wheel vehicles or three-wheel vehicles with a maximum" << endl;
    ss << " design speed of not more than " << this->max_speed << endl;
    ss << " kilometres per hour (28 mph) and with a" << endl;
    ss << " cylinder capacity not exceeding " << this->max_power << endl;
    ss << " cubic centimetres (3.1 cu in)." << endl;
    ss << " " << string(50, '-') << endl << endl;

    return ss.str();
}

const string AM_Moped::shortDescription()
{
    stringstream ss;

    ss << " |" << string(50, '-') << endl;
    ss << " |   = Category AM =" << endl;
    ss << " |" << string(50, '-') << endl;
    ss << " | Number of Wheels:   | " << this->number_of_wheels << endl;
    ss << " | Minimum Driver Age: | " << this->age_of_aquisition << " years old" << endl;
    ss << " | Maximum Speed:      | " << this->max_speed << " km/h" << endl;
    ss << " | Cyclinder Capacity: | " << this->cylinder_capacity << " cubic cm" << endl;
    ss << " | Max_power:          | " << this->max_power << " kw" << endl;
    ss << " |" << string(50, '-') << endl << endl;

    return ss.str();
}
