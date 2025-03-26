//Lab10-2.cpp - displays total owed
//Created/revised by <Karlie Cradock> on <3/25/25>

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
void displayOptions ();
void getRegular(int windows,double price, double &total);
void getBoGo(int windows,double price, double &total);


int main()
{
    int option = 0;
    int windows = 0;
    double price = 0.0;
    double total = 0.0;

    cout << fixed << setprecision(2);

    displayOptions();
    cout << "Enter option: ";
    cin >> option;

    if (option == 1 || option == 2)
    {
        cout << "Enter number of windows: ";
        cin >> windows;
        cout << "Enter cleaning price per window: $";
        cin >> price;
        if (option == 1)
            getRegular(windows, price, total);
        else
            getBoGo(windows, price, total);
        //end if

        cout << "Total price: $" << total << endl;
    }
    else
        cout << "Invalid option" << endl;
    //end if

    return 0;
} //end of main function

//*****function definitions*****
void displayOptions()
{
    cout << "Pricing options: " << endl;
    cout << "1 Regular cleaning" << endl;
    cout << "2 BoGo cleaning" << endl;
}     //end display options

void getRegular(int windows, double price, double &total)
{
    total = windows * price;
} //end getRegular function

void getBoGo(int windows, double price, double &total)
{
    total = (windows / 2 + windows % 2) * price;
} //end getBoGo function
