#include "Reserve.h"

Reserve::Reserve()
{
    //ctor
}

Reserve::~Reserve()
{
    //dtor
}
/*
const void chooseVehicleCategories(int& choice)
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
        switch (choice)
        {
            // MOPEDS
        case 0: // AM
            AM_Moped* m = dynamic_cast<AM_Moped*>(v);
            if (m)
            {
                cout << m->shortDescription() << endl;
            }
            break;
        case 1: // A1
            A1_Motorcycle* a1_m = dynamic_cast<A1_Motorcycle*>(v);
            if (a1_m)
            {
                cout << a1_m->shortDescription() << endl;
            }
            break;
        case 2: // A2
            A2_Motorcycle* a2_m = dynamic_cast<A2_Motorcycle*>(v);
            if (a2_m)
            {
                cout << a2_m->shortDescription() << endl;
            }
            break;
        case 3: // A
            A_Motorcycle* a_m = dynamic_cast<A_Motorcycle*>(v);
            if (a_m)
            {
                cout << a_m->shortDescription() << endl;
            }
        case 4: // B1
            B1_MotorVehicle* b1_m = dynamic_cast<B1_MotorVehicle*>(v);
            if (b1_m)
            {
                cout << b1_m->shortDescription() << endl;
            }
            break;
        case 5: // B
            B_MotorVehicle* b_m = dynamic_cast<B_MotorVehicle*>(v);
            if (b_m)
            {
                cout << b_m->shortDescription() << endl;
            }
            break;
        case 6: // BE
            BE_MotorVehicle* be_m = dynamic_cast<BE_MotorVehicle*>(v);
            if (be_m)
            {
                cout << be_m->shortDescription() << endl;
            }
            break;
        case 7: // C
            C_LargeGoodsVehicle* c_lgv = dynamic_cast<C_LargeGoodsVehicle*>(v);
            if (c_lgv)
            {
                cout << c_lgv->shortDescription() << endl;
            }
            break;
        case 8: // CE
            CE_LargeGoodsVehicle* ce_lgv = dynamic_cast<CE_LargeGoodsVehicle*>(v);
            if (ce_lgv)
            {
                cout << ce_lgv->shortDescription() << endl;
            }
            break;
        case 9: // C1E
            C1E_LargeGoodsVehicle* c1e_lgv = dynamic_cast<C1E_LargeGoodsVehicle*>(v);
            if (c1e_lgv)
            {
                cout << c1e_lgv->shortDescription() << endl;
            }
            break;
        case 10: // D1
            D1_Bus* d1_b = dynamic_cast<D1_Bus*>(v);
            if (d1_b)
            {
                cout << d1_b->shortDescription() << endl;
            }
            break;
        case 10: // D1E
            D1E_Bus* d1e_b = dynamic_cast<D1E_Bus*>(v);
            if (d1e_b)
            {
                cout << d1e_b->shortDescription() << endl;
            }
            break;
        case 11: // D
            D_Bus* d_b = dynamic_cast<D_Bus*>(v);
            if (d_b)
            {
                cout << d_b->shortDescription() << endl;
            }
            break;
        case 12: // DE
            DE_Bus* de_b = dynamic_cast<DE_Bus*>(v);
            if (de_b)
            {
                cout << de_b->shortDescription() << endl;
            }
            break;
        default:
            cout " !!! UKNOWN OPTION" << endl;
            break;
    }
}
*/
