#include "C1E_LargeGoodsVehicle.h"

C1E_LargeGoodsVehicle::C1E_LargeGoodsVehicle(size_t max_mass_kg, size_t trailer_mass_kg)
                : VehiclesCategory("C1E", 18, 4)
{
    this->max_mass_kg = max_mass_kg;
    this->trailer_mass_kg = trailer_mass_kg;
}

C1E_LargeGoodsVehicle::~C1E_LargeGoodsVehicle()
{
    //dtor
}

const string C1E_LargeGoodsVehicle::information()
{
    stringstream ss;

    ss << " C1E Large Goods Vehicle" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Combinations of vehicles where the tractor vehicle" << endl;
    ss << " is in category C and its trailer or semi-trailer has" << endl;
    ss << " a maximum authorised mass of over 750 kilograms (1,650 lb)." << endl << endl;

    return ss.str();
}

const string C1E_LargeGoodsVehicle::shortDescription()
{
    stringstream ss;

    ss << " |" << string(50, '-') << endl;
    ss << " |   = Category " << this->category_class << endl;
    ss << " |" << string(50, '-') << endl;
    ss << " | Number of Wheels:     | > " << this->number_of_wheels << endl;
    ss << " | Mnimum Driver Age:    | " << this->age_of_aquisition << " years old" << endl;
    ss << " | Maximum Mass:         | " << this->max_mass_kg << " kg" << endl;
    ss << " | Trailer Mass:         | > " << this->trailer_mass_kg << " kg" << endl;
    ss << " |" << string(50, '-') << endl << endl;

    return ss.str();
}
