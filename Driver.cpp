#include "Driver.h"

size_t Driver::staticId = 1;

Driver::Driver(string name, string surname, size_t day_of_birth,
               size_t month_of_birth, size_t year_of_birth, string place_of_birth, string address)
{
    this->id = staticId;
    this->staticId++;
    this->name = name;
    this->surname = surname,
    this->day_of_birth = day_of_birth;
    this->month_of_birth = month_of_birth;
    this->year_of_birth = year_of_birth;
    this->place_of_birth = place_of_birth;
    this->address = address;
}

Driver::~Driver()
{
    //dtor
}

const string Driver::information()
{
    stringstream ss;

    ss << '|'<< string(60, '-') << endl;
    ss << "| Id:              | " << this->id << endl;
    ss << "| Name:            | " << this->name << endl;
    ss << "| Surname:         | " << this->surname << endl;
    ss << "| Date of Birth:   | " << this->day_of_birth << "." << this->month_of_birth << "." << this->year_of_birth << endl;
    ss << "| Place of Birth:  | " << this->place_of_birth << endl;
    ss << "| Address:         | " << this->address << endl;
    ss << '|' << string(60, '-') << endl;

    return ss.str();
}

const void Driver::registerDriverLicense()
{
    string date_of_issue;
    string date_of_expiry;
    string issuing_authority;
    string personal_number;
    string vehicle_category;
    string first_issuing_day_of_category;
    string expiry_date_of_category;

    cin.clear();

    cout << endl << endl;
    cout << string(40, '#') << endl;
    cout << " DRIVE LICENCE " << endl;
    cout << string(40, '#') << endl;

    cout << " - Date of Issue: ";
    getline(cin, date_of_issue);

    cout << " - Date of Expiry: ";
    getline(cin, date_of_expiry);

    cout << " - Issuing Authority: ";
    getline(cin, issuing_authority);

    cout << " - Personal Number: ";
    getline(cin, personal_number);

    vehicle_category = this->selectVehicleCategory();
    std::cin.ignore(10, '\n');

    cout << " - First Issuing Day of Categry: ";
    getline(cin, first_issuing_day_of_category);

    cout << " - Expiry Date of Category: ";
    getline(cin, expiry_date_of_category);

    DriveLicense *temp = new DriveLicense(date_of_issue, date_of_expiry,
                                          issuing_authority, personal_number,
                                          vehicle_category, first_issuing_day_of_category,
                                          expiry_date_of_category);
    // ASSIGN DRIVER LICENCE TO THE DRIVER
    this->setDriveLicence(temp);
}

string Driver::selectVehicleCategory()
{
    size_t choise;
    string str;

    cout << " - Category List" << endl;

    system("clear");
    this->license->printVehiclesCategoriesInfo();
    cout << " - Select Vehicle Category: ";
    cin >> setw(1) >> choise;

    while (choise < 0 || choise > 13)
    {
        system("clear");

        cout << " !!! INVALID INPUT" << endl;

        this->license->printVehiclesCategoriesInfo();
        cout << " - Select Vehicle Category: ";
        cin >> setw(1) >> choise;
    }

    switch (choise)
    {
        // MOPEDS
    case 0: // AM
        cout << " - AM Moped" << endl;
        str = "AM";
        break;
        // MOTORCYCLES
    case 1:
        cout << " - A1 Motorcycle" << endl;
        str = "A1";
        break;
    case 2:
        cout << " - A2 Motorcycle" << endl;
        str = "A2";
        break;
    case 3:
        cout << " - A Motorcycle" << endl;
        str = "A";
        break;
        // MOTOR VEHICLE
    case 4:
        cout << " - B1 Motor Vehicle" << endl;
        str = "B1";
        break;
    case 5:
        cout << " - B Motor Vehicle" << endl;
        str = "B";
        break;
    case 6:
        cout << " - BE Motor Vehicle" << endl;
        str = "BE";
        break;
        // LARGE GOODS VEHICLE
    case 7:
        cout << " - C Large Goods Vehicle" << endl;
        str = "C";
        break;
    case 8:
        cout << " - CE Large Goods Vehicle" << endl;
        str = "CE";
        break;
    case 9:
        cout << " - C1E Large Goods Vehicle" << endl;
        str = "C1E";
        break;
        // BUSES
    case 10:
        cout << " - D1 Bus" << endl;
        str = "D1";
        break;
    case 11:
        cout << " - D1E Bus" << endl;
        str = "D1E";
        break;
    case 12:
        cout << " - D Bus" << endl;
        str = "D";
        break;
    case 13:
        cout << " - DE Bus" << endl;
        str = "DE";
        break;
    default:
        cout << " !!! INVALID OPTION, TRY AGAIN" << endl;
        break;
    }

    return str;
}

const string Driver::printDriverLicense()
{
    return this->license->printLicense();
}
