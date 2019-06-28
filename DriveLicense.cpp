#include "DriveLicense.h"

size_t DriveLicense::licence_number = 1000;

DriveLicense::DriveLicense() {};

DriveLicense::DriveLicense(string date_of_issue, string date_of_expiry,
            string issuing_authority, string personal_number, string vehicle_category,
            string first_issuing_day_of_category, string expiry_date_of_category)
{
    this->licence_number++;

    this->date_of_issue = date_of_issue;
    this->date_of_expiry = date_of_expiry;
    this->issuing_authority = issuing_authority;
    this->personal_number = personal_number;

    this->vehicle_category = vehicle_category;
    this->first_issuing_day_of_category = first_issuing_day_of_category;
    this->expiry_date_of_category = expiry_date_of_category;
}

DriveLicense::~DriveLicense()
{
    //dtor
}

const string DriveLicense::printLicense()
{
    stringstream ss;

    ss << " |                   = Drive Licence =" << endl;
    ss << " | Date of Issue:           | " << this->date_of_issue << endl;
    ss << " | Date of Expiry:          | " << this->date_of_expiry << endl;
    ss << " | Issuing Authority:       | " << this->issuing_authority << endl;
    ss << " | Personal Number:         | " << this->personal_number << endl;
    ss << " | License Number:          | " << this->licence_number << endl;
    ss << " | Vehicle Category:        | " << this->vehicle_category << endl;
    ss << " | First Issuing Day:       | " << this->first_issuing_day_of_category << endl;
    ss << " | Expiry Date of Category  | " << this->expiry_date_of_category << endl;

    return ss.str();
}

/*
const string DriveLicense::printVehiclesCategories()
{
    stringstream ss;

    ss << " 0 - Mopeds:               | AM" << endl;
    ss << " 1 - Motorcycles:          | A1, A2, A" << endl;
    ss << " 2 - Motor Vehicles:       | B, BE, B1" << endl;
    ss << " 3 - Large Goods Vehicles: | C1, C1E, C, CE" << endl;
    ss << " 4 - Buses:                | D1, D1E, D, DE" << endl;

    return ss.str();
}
*/

const void DriveLicense::printVehiclesCategoriesInfo()
{
    vector<VehiclesCategory*> vehicles;


    AM_Moped* m = new AM_Moped();
    vehicles.push_back(m);

    vehicles.push_back(new A1_Motorcycle);
    vehicles.push_back(new A2_Motorcycle);
    vehicles.push_back(new A_Motorcycle);
    vehicles.push_back(new B1_MotorVehicle);
    vehicles.push_back(new B_MotorVehicle);
    vehicles.push_back(new BE_MotorVehicle);
    vehicles.push_back(new C_LargeGoodsVehicle);
    vehicles.push_back(new CE_LargeGoodsVehicle);
    vehicles.push_back(new C1E_LargeGoodsVehicle);
    vehicles.push_back(new D1_Bus);
    vehicles.push_back(new D1E_Bus);
    vehicles.push_back(new D_Bus);
    vehicles.push_back(new DE_Bus);


    for (auto v : vehicles)
    {
        AM_Moped* am = dynamic_cast<AM_Moped*>(v);
        if (am)
        {
            cout << " Option: - 0" << endl;
            cout << am->shortDescription() << endl;
        }

        A1_Motorcycle* a1_m = dynamic_cast<A1_Motorcycle*>(v);
        if (a1_m)
        {
            cout << " Option: - 1" << endl;
            cout << a1_m->shortDescription() << endl;
        }

        A2_Motorcycle* a2_m = dynamic_cast<A2_Motorcycle*>(v);
        if (a2_m)
        {
            cout << " Option: - 2" << endl;
            cout << a2_m->shortDescription() << endl;
        }

        A_Motorcycle* a_m = dynamic_cast<A_Motorcycle*>(v);
        if (a_m)
        {
            cout << " Option: - 3" << endl;
            cout << a_m->shortDescription() << endl;
        }

        B1_MotorVehicle* b1_m = dynamic_cast<B1_MotorVehicle*>(v);
        if (b1_m)
        {
            cout << " Option: - 4" << endl;
            cout << b1_m->shortDescription() << endl;
        }

        B_MotorVehicle* b_m = dynamic_cast<B_MotorVehicle*>(v);
        if (b_m)
        {
            cout << " Option: - 5" << endl;
            cout << b_m->shortDescription() << endl;
        }

        BE_MotorVehicle* be_m = dynamic_cast<BE_MotorVehicle*>(v);
        if (be_m)
        {
            cout << " Option: - 6" << endl;
            cout << be_m->shortDescription() << endl;
        }

        C_LargeGoodsVehicle* c_lgv = dynamic_cast<C_LargeGoodsVehicle*>(v);
        if (c_lgv)
        {
            cout << " Option: - 7" << endl;
            cout << c_lgv->shortDescription() << endl;
        }

        CE_LargeGoodsVehicle* ce_lgv = dynamic_cast<CE_LargeGoodsVehicle*>(v);
        if (ce_lgv)
        {
            cout << " Option: - 8" << endl;
            cout << ce_lgv->shortDescription() << endl;
        }

        C1E_LargeGoodsVehicle* c1e_lgv = dynamic_cast<C1E_LargeGoodsVehicle*>(v);
        if (c1e_lgv)
        {
            cout << " Option: - 9" << endl;
            cout << c1e_lgv->shortDescription() << endl;
        }

        D1_Bus* d1_b = dynamic_cast<D1_Bus*>(v);
        if (d1_b)
        {
            cout << " Option: - 10" << endl;
            cout << d1_b->shortDescription() << endl;
        }

        D1E_Bus* d1e_b = dynamic_cast<D1E_Bus*>(v);
        if (d1e_b)
        {
            cout << " Option: - 11" << endl;
            cout << d1e_b->shortDescription() << endl;
        }

        D_Bus* d_b = dynamic_cast<D_Bus*>(v);
        if (d_b)
        {
            cout << " Option: - 12" << endl;
            cout << d_b->shortDescription() << endl;
        }

        DE_Bus* de_b = dynamic_cast<DE_Bus*>(v);
        if (de_b)
        {
            cout << " Option: - 13" << endl;
            cout << de_b->shortDescription() << endl;
        }
    }
}
