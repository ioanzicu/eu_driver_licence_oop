#ifndef DRIVER_H
#define DRIVER_H

#include "HEADER_FILES_H.h"
#include "DriveLicense.h"
#include "VehiclesCategory.h"

using namespace std;

class Driver
{
    public:
        Driver(string name, string surname, size_t day_of_birth,
               size_t month_of_birth,
               size_t year_of_birth,
               string place_of_birth,
               string address
               );
        virtual ~Driver();

        // Accessors
        inline const size_t& getId() const { return this->id; }

        // Modifier
        void setDriveLicence(DriveLicense *&license) { this->license = license; }

        // Methods
        const string information();
        const void registerDriverLicense();
        string selectVehicleCategory();
        const string printDriverLicense();

    protected:

    private:
        static size_t staticId;
        size_t id;
        string name;
        string surname;
        size_t day_of_birth;
        size_t month_of_birth;
        size_t year_of_birth;
        string place_of_birth;
        string address;

        DriveLicense *license;
};

#endif // DRIVER_H
