#include "HEADER_FILES_H.h"

#include "Menu.h"
#include "Driver.h"

using namespace std;

int main()
{
    try
    {
        cout << string(30, '-') << endl;
        cout << "   DRIVERS REGISTER SYSTEM" << endl;

        Menu menu;
        menu.menuOptions();
    }
    catch (exception const &exc)
    {
        cerr << " !!! Exception caught " << exc.what() << endl;
    }
    catch (...)
    {
        cerr << " !!! UNKNOWN EXCEPTION CAUGHT" << endl;
    }

    return 0;
}
