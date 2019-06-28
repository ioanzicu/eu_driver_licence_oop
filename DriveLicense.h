#ifndef DRIVELICENSE_H
#define DRIVELICENSE_H

#include "HEADER_FILES_H.h"
#include "VehiclesCategory.h"

#include "AM_Moped.h"
#include "A1_Motorcycle.h"
#include "A2_Motorcycle.h"
#include "A_Motorcycle.h"
#include "B_MotorVehicle.h"
#include "BE_MotorVehicle.h"
#include "B1_MotorVehicle.h"
#include "C1_LargeGoodsVehicle.h"
#include "C1E_LargeGoodsVehicle.h"
#include "C_LargeGoodsVehicle.h"
#include "CE_LargeGoodsVehicle.h"
#include "D1_Bus.h"
#include "D1E_Bus.h"
#include "D_Bus.h"
#include "DE_Bus.h"

using namespace std;

class DriveLicense
{
    public:
        DriveLicense();
        DriveLicense(string date_of_issue, string date_of_expiry, string issuing_authority,
                     string personal_number, string vehicle_category,
                     string first_issuing_day_of_category, string expiry_date_of_category);
        virtual ~DriveLicense();

        // METHODS
        const string printLicense();
        const void printVehiclesCategoriesInfo();

    protected:

    private:
        static size_t licence_number;

        string date_of_issue;
        string date_of_expiry;
        string issuing_authority;
        string personal_number;
        string vehicle_category;
        string first_issuing_day_of_category;
        string expiry_date_of_category;
};

#endif // DRIVELICENSE_H
