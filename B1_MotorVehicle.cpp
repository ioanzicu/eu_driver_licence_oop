#include "B1_MotorVehicle.h"

B1_MotorVehicle::B1_MotorVehicle() : VehiclesCategory("B1", 16, 4)
{

}

B1_MotorVehicle::~B1_MotorVehicle()
{
    //dtor
}

const string B1_MotorVehicle::information()
{
    stringstream ss;

    ss << " B1 Motor Vehicle" << endl;
    ss << " " << string(50, '-') << endl;
    ss << " Heavy quadricycles" << endl << endl;

    return ss.str();
}

const string B1_MotorVehicle::shortDescription()
{
    stringstream ss;

    ss << " |" << string(50, '-') << endl;
    ss << " |   = Category " << this->category_class << endl;
    ss << " |" << string(50, '-') << endl;
    ss << " | Number of Wheels:    | " << this->number_of_wheels << endl;
    ss << " | Minumum Driver Age:  | " << this->age_of_aquisition << endl;
    ss << " |" << string(50, '-') << endl << endl;

    return ss.str();
}
