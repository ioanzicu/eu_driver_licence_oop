#include "C_LargeGoodsVehicle.h"

C_LargeGoodsVehicle::C_LargeGoodsVehicle(size_t max_mass_kg, size_t max_passengers, size_t trailer_mass_kg)
                    : VehiclesCategory("C", 21, 4)
{
    this->max_mass_kg = max_mass_kg;
    this->max_passengers = max_passengers;
    this->trailer_mass_kg = trailer_mass_kg;
}

C_LargeGoodsVehicle::~C_LargeGoodsVehicle()
{
    //dtor
}

const string C_LargeGoodsVehicle::information()
{
    stringstream ss;

    ss << " C Large Goods Vehicle" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Large goods vehicle with a maximum authorised mass of" << endl;
    ss << " more than 3.5 tonnes (3.4 long tons; 3.9 short tons)" << endl;
    ss << " mass and not more than 8 + 1 seats (lorry); with a trailer" << endl;
    ss << " with a maximum mass of 750 kilograms (1,650 lb). " << endl << endl;

    return ss.str();
}

const string C_LargeGoodsVehicle::shortDescription()
{
    stringstream ss;

    ss << " |" << string(50, '-') << endl;
    ss << " |   = Category " << this->category_class << endl;
    ss << " |" << string(50, '-') << endl;
    ss << " | Number of Wheels:     | " << this->number_of_wheels << endl;
    ss << " | Minimum Driver Age:   | " << this->age_of_aquisition << " years old" << endl;
    ss << " | Maximum Mass:         | " << this->max_mass_kg << " kg" << endl;
    ss << " | Maximum Passengers:   | " << this->max_passengers << " persons" << endl;
    ss << " | Trailer Mass:         | < " << this->trailer_mass_kg << " kg" << endl;
    ss << " |" << string(50, '-') << endl << endl;

    return ss.str();
}
