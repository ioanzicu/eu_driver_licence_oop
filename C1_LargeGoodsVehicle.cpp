#include "C1_LargeGoodsVehicle.h"

C1_LargeGoodsVehicle::C1_LargeGoodsVehicle(size_t max_mass_kg, size_t trailer_mass_kg)
                : VehiclesCategory("C1", 18, 4)
{
    this->max_mass_kg = max_mass_kg;
    this->trailer_mass_kg = trailer_mass_kg;
}

C1_LargeGoodsVehicle::~C1_LargeGoodsVehicle()
{
    //dtor
}

const string C1_LargeGoodsVehicle::information()
{
    stringstream ss;

    ss << " C1 Large Goods Vehicle" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Large goods vehicle with a maximum authorised mass" << endl;
    ss << " of not more than 7.5 tonnes (7.4 long tons; 8.3 short tons);" << endl;
    ss << " with or without a trailer with a maximum mass of less" << endl;
    ss << " than 750 kilograms (1,650 lb). " << endl << endl;

    return ss.str();
}

const string C1_LargeGoodsVehicle::shortDescription()
{
    stringstream ss;

    ss << " |" << string(50, '-') << endl;
    ss << " |   = Category " << this->category_class << endl;
    ss << " |" << string(50, '-') << endl;
    ss << " | Number of Wheels:     | > " << this->number_of_wheels << endl;
    ss << " | Minimum Driver Age:   | " << this->age_of_aquisition << " years old" << endl;
    ss << " | Maximum Mass:         | " << this->max_mass_kg << " kg" << endl;
    ss << " | Maximum Mass:         | " << this->max_mass_kg << " kg" << endl;
    ss << " | Trailer Mass:         | <" << this->trailer_mass_kg << " kg" << endl;
    ss << " |" << string(50, '-') << endl << endl;

    return ss.str();
}
