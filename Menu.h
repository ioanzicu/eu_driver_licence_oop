#ifndef MENU_H
#define MENU_H

#include "HEADER_FILES_H.h"
#include "Driver.h"
#include "VehiclesCategory.h"

// EXORT
#include <iostream>
#include "pdf.h"
#include <sstream>
#include <fstream>

using namespace std;

class Menu
{
    public:
        Menu();
        virtual ~Menu();

        // METHODS
        const void printMenuOptions();
        const int getUsetInput(int &choise, const int streamSize);
        const void menuOptions();

        const string displayInformation();

        // MENU OPTIONS
        void addDriver();
        const void findById();
        void removeDriver();
        const void printDrivers();
        void exportPDF();

    protected:

    private:
        vector<Driver> drivers;
};

#endif // MENU_H
