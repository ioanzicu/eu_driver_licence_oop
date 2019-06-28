#include "A1_Motorcycle.h"

A1_Motorcycle::A1_Motorcycle(size_t max_speed, size_t cylinder_capacity, size_t max_power)
            : VehiclesCategory("A1", 16, 2)
{
    this->max_speed = max_speed;
    this->cylinder_capacity = cylinder_capacity;
    this->max_power = max_power;
}

A1_Motorcycle::~A1_Motorcycle()
{
    //dtor
}

const string A1_Motorcycle::information()
{
    stringstream ss;

    ss << " A1 Motorcycle" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Motorcycles with a cylinder capacity not exceeding" << endl;
    ss << " " << this->cylinder_capacity << " cubic centimetres (7.6 cu in)" <<endl;
    ss << " and a power not exceeding" << this->max_power << " kilowatts (15 hp)" << endl;
    ss << " and motor tricycles with a power not exceeding 15 kilowatts (20 hp)." << endl << endl;

    return ss.str();
}


const string A1_Motorcycle::shortDescription()
{
    stringstream ss;

    ss << " |" << string(50, '-') << endl;
    ss << " |   = Category " << this->category_class << endl;
    ss << " |" << string(50, '-') << endl;
    ss << " | Number of Wheels:   | " << this->number_of_wheels << endl;
    ss << " | Minimum Driver Age: | " << this->age_of_aquisition << " years old" << endl;
    ss << " | Maximum Speed:      | " << this->max_speed << " km/h" << endl;
    ss << " | Cyclinder Capacity: | " << this->cylinder_capacity << " cubic cm" << endl;
    ss << " | Maximum Power:      | " << this->max_power << " kw" << endl;
    ss << " |" << string(50, '-') << endl << endl;

    return ss.str();
}
