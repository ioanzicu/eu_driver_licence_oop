#include "CE_LargeGoodsVehicle.h"

CE_LargeGoodsVehicle::CE_LargeGoodsVehicle(size_t max_mass_kg) : VehiclesCategory("CE", 21, 4)
{
    this->max_mass_kg = max_mass_kg;
}

CE_LargeGoodsVehicle::~CE_LargeGoodsVehicle()
{
    //dtor
}

const string CE_LargeGoodsVehicle::information()
{
    stringstream ss;

    ss << " CE Large Goods Vehicle" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Other combinations of vehicles and trailers which with" << endl;
    ss << " combined maximum authorised mass of more than 750 kilograms (1,650 lb)." << endl << endl;

    return ss.str();
}

const string CE_LargeGoodsVehicle::shortDescription()
{
    stringstream ss;

    ss << " |" << string(50, '-') << endl;
    ss << " |   = Category " << this->category_class << endl;
    ss << " |" << string(50, '-') << endl;
    ss << " | Number of Wheels:     | > " << this->number_of_wheels << endl;
    ss << " | Minimum Driver Age:   | " << this->age_of_aquisition << " years old" << endl;
    ss << " | Maximum Mass:         | > " << this->max_mass_kg << " kg" << endl;
    ss << " |" << string(50, '-') << endl << endl;

    return ss.str();
}
