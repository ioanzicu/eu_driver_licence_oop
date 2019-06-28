#include "A2_Motorcycle.h"

A2_Motorcycle::A2_Motorcycle(size_t max_speed, size_t cylinder_capacity, size_t max_power)
            : VehiclesCategory("A2", 18, 2)
{
    this->max_speed = max_speed;
    this->cylinder_capacity = cylinder_capacity;
    this->max_power = max_power;
}

A2_Motorcycle::~A2_Motorcycle()
{
    //dtor
}

const string A2_Motorcycle::information()
{
    stringstream ss;

    ss << " A2 Motorcycle" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Motorcycles of a power not exceeding 35 kilowatts (47 hp)" << endl;
    ss << " and with a power/weight ratio not exceeding 0.2 kilowatts" << endl;
    ss << " per kilogram (0.12 hp/lb) and not derived from a vehicle of" << endl;
    ss << " more than double its power." << endl << endl;

    return ss.str();
}

const string A2_Motorcycle::shortDescription()
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
