#include <iostream>
using namespace std;

int main()
{
    double miles = 0;
    double gallons = 0;
    double totalmiles = 0;
    double totalgallon = 0;
    double economyTrip = 0;
    double economyTotal = 0;

    while (true)
    {
        cout << "Enter miles driven (-1 to quit):  ";
        cin >> miles ;

        if(miles == -1)
            break;
        else 
        {    cout << "Enter gallons used:  ";
            cin >> gallons;

            cout << "Consumption for this trip: " << miles / gallons << endl;
            totalgallon += gallons;
            totalmiles += miles; 
        }
    }
    cout << "Consumption for total trip: " << totalmiles/totalgallon;
    

}
