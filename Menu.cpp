#include "Menu.h"

Menu::Menu()
{
    //ctor
    //vector<Driver> drivers;
}

Menu::~Menu()
{
    //dtor
}

// PRINT MENU OPTIONS
const void Menu::printMenuOptions()
{
    cout << endl;
    cout << "----------------------" << endl;
    cout << "     Menu Options:" << endl;
    cout << "----------------------" << endl;
    cout << " 0 - Quit" << endl;
    cout << " 1 - Display Information" << endl;
    cout << " 2 - Add a New Driver" << endl;
    cout << " 3 - Find Driver By Id" << endl;
    cout << " 4 - Remove Driver" << endl;
    cout << " 5 - Print All Drivers" << endl;
    //cout << " 6 - Export PDF" << endl;
    cout << endl;
}

// USER INPUT BY REFERENCE
const int Menu::getUsetInput(int &choise, const int streamSize = 1)
{
    cout << " - Enter your choice: " << endl << endl;
    cin >> setw(streamSize) >> choise;      // LIMIT STREAM SIZE

    while (cin.fail() || choise < 0 || choise > 5)
    {
        cout << endl << " !!! Wrong Input. Try Again!" << endl << endl;
        cin.clear();                        // Clear the stream (ERROR FLAG for cin)
        std::cin.ignore(INT_MAX, '\n');     // ignore all characters

        cout << " - Enter your choice: " << endl;
        cin >> setw(streamSize) >> choise;
    }

    cout << endl << " - You entered option: " << to_string(choise) << endl << endl;

    std::cin.clear();                       // Clear the stream (ERROR FLAG for cin)
    std::cin.ignore(INT_MAX, '\n');         // ignore all characters
}

const void Menu::menuOptions()
{

    int choise {0};
    bool quit {false};

    while (!quit)
    {
        printMenuOptions();   // PRINT MENU OPTIONS
        cout << endl;

        getUsetInput(choise); // GET USER INPUT

        system("clear"); // CLEAR CONSOLE

        switch (choise)
        {
        case 0: // QUIT
            cout << " - Quit" << endl;

            quit = true;

            break;
        case 1: // DISPLAY INFO ABOUT THIS SOFT
            cout << displayInformation() << endl;

            break;
        case 2: // ADD NEW DRIVER
            addDriver();

            break;
        case 3: // FING DRIVER BY ID
            findById();

            break;
        case 4: // REMOVE DRIVER
            removeDriver();

            break;
        case 5: // PRINT ALL DRIVERS
            printDrivers();

            break;
       // case 6: // PRINT ALL DRIVERS
         //   exportPDF();

            break;
        default:
            cout << " !!! UNKNOWN OPTION" << endl;
            break;
        }
    }
}

const string Menu::displayInformation()
{
    stringstream ss;
    ss << " This soft allow you to:" << endl;
    ss << " - Register a Driver," << endl;
    ss << " - Find Driver by Id," << endl;
    ss << " - Remove Registerd Driver" << endl;
    ss << " - Creat Driver Licence conform Union Europe Standard" << endl;
    ss << " - Export Driver License in PDF Format";

    return ss.str();
}

//void Menu::add_driver(vector<Driver>& drivers)
void Menu::addDriver()
{
    string name {""};
    string surname {""};
    size_t day_of_birth {0};
    size_t month_of_birth {0};
    size_t year_of_birth {1990};
    string place_of_birth {""};
    string address {""};

    cout << " - Name: ";
    getline(cin, name);

    cout << " - Surname: ";
    getline(cin, surname);

    cout << " - Day of birth: ";
    cin >> setw(2) >> day_of_birth;

    cout << " - Month of birth: ";
    cin >> setw(2) >> month_of_birth;

    cout << " - Year of birth (Ex: 1990): ";
    cin >> setw(4) >> year_of_birth;
    std::cin.ignore(10, '\n');

    cout << " - Place of birth: ";
    getline(cin, place_of_birth);

    cout << " - Address: ";
    getline(cin, address);

    Driver new_driver(name, surname, day_of_birth, month_of_birth,
                      year_of_birth, place_of_birth, address);

    new_driver.registerDriverLicense(); // CREATE DRIVE LICENSE

    this->drivers.push_back(new_driver);

    cout << " +++ The Driver: " << name << " with id: " << new_driver.getId() << " was Successfuly Added." << endl;
}

const void Menu::findById()
{
    if (this->drivers.empty())
    {
        cout << " !!! NO REGISTERED DRIVERS, THE DATABASE IS EMPTY" << endl;
    }
    else
    {
        size_t id {0};
        bool found = false;
        cout << endl << " - Enter Driver's ID: ";
        cin >> setw(2) >> id;

        for (auto driver : drivers)
        {
            if (driver.getId() == id)
            {
                cout << driver.information() << endl;
                found = true;
            }
        }

        if(!found)
        {
            cout << " !!! THERE IS NO DRIVER WITH ID: " << id << endl;
        }
    }
}

void Menu::removeDriver()
{
    if (this->drivers.empty())
    {
        cout << " !!! NO REGISTERED DRIVERS, THE DATABASE IS EMPTY" << endl;
    }
    else
    {
        size_t id {0};
        bool found = false;

        cout << endl << "Enter Driver's ID: ";
        cin >> setw(2) >> id;

        for (auto driver : drivers)
        {
            cout << driver.getId() << endl;
            if (driver.getId() == id)
            {
                this->drivers.erase(this->drivers.begin() + id);
                found = true;
            }
        }

        if (found)
        {
            cout << " - Driver with ID: " << id << " was DELETED." << endl;
        }
        else
        {
            cout << " !!! THERE IS NO DRIVER WITH ID: " << id << endl;
        }
    }
}

const void Menu::printDrivers()
{
    if (this->drivers.empty())
    {
        cout << " !!! NO REGISTERED DRIVERS, THE DATABASE IS EMPTY" << endl;
    }
    else
    {
        for (auto driver : this->drivers)
        {
            cout << driver.information() << endl;
            cout << driver.printDriverLicense() << endl;
            cout << string(60, '=') << endl << endl;
        }
    }
}

static bool getLines(
                     const string   &fileName,
                     vector<string> &lines,
                     string         &errMsg
                    )
{
   ifstream in;

   in.open(fileName.c_str(), ios::binary);

   if(!in)
   {
      errMsg = "Could not open: [" + fileName + "]";
      return(false);
   }

   string line = "";

   for(;;)
   {
      char c = (char)in.get();

      if(in.eof())
      {
         if(line != "")
            lines.push_back(line);

         break;
      }

      line += c;

      if(c == '\n')
      {
         lines.push_back(line);
         line = "";
      }
   }

   in.close();

   return(true);
}



// ---------------------------------------------------
// Demonstrate:
//
//    - text wrapping
//    - drawing and filling of circles and ellipses
//    - drawing and filling of rectangles and polygons
//    - drawing lines, using different line widths
//    - use of images
// ---------------------------------------------------
/*
static void demoOne(PDF &p)
{
   p.setFont(PDF::HELVETICA, 12);

   string s = "  \t\t   fee \r\nxxxxxxxxxxxxx\r\n\"fi\"fo fum";

   s += " a aa aaa aaaa bbb bb b c cc ccc dddd eeeee ";
   s += " foo bar baz foo bar baz ";
   s += " mairzy doats and doazy doats and little lambsey divey";
   s += " a kiddley divey too, wouldn't you? ";
   s += " a b c d e f g h i jj kkk llll mmmmmm nnnnnnn oooooooooooo ";
   s += "----------------------- -------------------------- ";
   s += "$$$ $$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ ";
   s += "******************** ************************ ***** ";

   vector<string> sv = p.wrapText(s, 100, true);

   for(int i = 0, n = sv.size(); i < n; i ++)
   {
      // cout << "sv[" << i << "][" << sv[i] << "]\n";
      p.showTextXY(sv[i], 80, 745 - 20 * i);
   }

   p.drawLine(80,  760,  80, 300);
   p.drawLine(180, 760, 180, 300);

   // cout << endl;

   p.drawEllipse(400, 550, 150, 75);

   p.setFillColor(255, 255, 0);
   p.fillEllipse(400, 550, 40, 65);

   p.drawEllipse(400, 550, 40, 65);

   for(int i = 0; i < 12; i ++)
   {
      unsigned char value = (unsigned char)(20 * i);

      p.setFillColor(value, value, value);

      p.fillCircle(480, 310 + 10 * i, 2 * i);

      p.drawCircle(480, 310 + 10 * i, 3 * i);
   }

   p.setLineColor(255, 0, 0);
   p.setFillColor(0, 0, 255);

   for(int i = 0; i < PDF::N_FONTS; i ++)
   {
      PDF::Font theFont  = (PDF::Font)(i + 1);
      int       fontSize = 9;
      int       x        = 10;
      int       y        = 36 + (2 * fontSize) * i;

      string s =
         "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
         "!@#$%^&*()_-=+[]{};:<>,./?";

    //  drawBoundedText(s, x, y, theFont, fontSize, p);
   }

   p.fillRect(300, 700, 40, 40);
   p.drawRect(400, 700, 40, 40);

   p.newPage();
   p.setLineColor(255, 0, 0);

   for(int i = 0; i < PDF::N_FONTS; i ++)
   {
      p.setFont((PDF::Font)(i + 1), 20);
      p.showTextXY(PDF::FONTS[i], 100, 100 + 40 * i);
   }

   p.newPage();
   p.setLineColor(255, 0, 0);

   for(int i = 0; i < 20; i ++)
   {
      p.drawLine(0, 0, 30 * (1 + i), 500 - 15 * i);
      p.setLineWidth(i/2 + 1);
   }

   vector<XY> points;

   points.push_back(XY(300, 500));
   points.push_back(XY(325, 550));
   points.push_back(XY(350, 480));
   points.push_back(XY(375, 570));
   points.push_back(XY(400, 460));
   points.push_back(XY(425, 590));
   points.push_back(XY(450, 450));

   p.setLineColor(0, 255, 0);
   p.drawLine(points);

   points.clear();

   points.push_back(XY(100, 540));
   points.push_back(XY(150, 700));
   points.push_back(XY( 80, 700));

   p.setFillColor(200, 200, 200);
   p.fillPolygon(points);

   p.setLineColor(0, 0, 255);
   p.drawPolygon(points);

   p.newPage();

   // Make an image

   ImageRow row1;
   ImageRow row2;

   row1.push_back(RGB(255, 255,   0));
   row1.push_back(RGB(255,   0, 255));
   row1.push_back(RGB(  0, 255,   0));

   row2.push_back(RGB(  0, 0, 255));
   row2.push_back(RGB(255, 0,   0));
   row2.push_back(RGB(  0, 0, 255));

   Image anImage;

   anImage.push_back(row1);
   anImage.push_back(row2);

   ImageInfo info = p.processImage(anImage);
   double scale   = 50.0;

   for(int i = 0; i < 10; i ++)
   {
      int xValue = 120 + 30 * i;
      int yValue = 220 + 40 * i;

      p.showImage(info, xValue, yValue, scale);

      p.drawRect(
         xValue,
         yValue,
         (int)(scale * info.mWidth  + 0.5),
         (int)(scale * info.mHeight + 0.5)
      );
   }
}


void Menu::exportPDF()
{
    ostringstream out;

    out << "Driver.pdf";

    string fileName = out.str();

    cout << "-----------------------------------------" << "\n";
    cout << "Creating File: [" << fileName << "]"       << "\n";
    cout << "-----------------------------------------" << "\n";

    PDF pdf;

    demoOne(pdf);

    string errMsg;

    if(!pdf.writeToFile(fileName, errMsg))
    {
        cout << errMsg << endl;
    }
    else
    {
        cout << "(File Successfully Written)" << endl;
    }


}
*/
