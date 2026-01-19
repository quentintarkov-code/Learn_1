#include <iostream>
using namespace std;

class Vehicle 
{
    public:
    Vehicle();//default constructor
    ~Vehicle();//destructor
    int passengers;
    int fuelcap;
    int kpl; // kilometers per liter
    //inline realisation of class function
    double range() 
    {
        return fuelcap * kpl;
    }
    double oldrange();
};
double Vehicle::oldrange() 
{
    return fuelcap * kpl;
}
Vehicle::Vehicle() 
{
    passengers = 4;
    fuelcap = 50;
    kpl = 8;
}
Vehicle::~Vehicle() 
{   
    cout << "Vehicle object destroyed" << endl; 
}


int main() 
{
    Vehicle minivan;
    // Assign values to minivan
    minivan.passengers = 7;
    minivan.fuelcap = 60;
    minivan.kpl = 12;
    cout << "Minivan can carry " << minivan.passengers << " with a range of " << minivan.range() << " km." << endl;
    cout << "Minivan can carry " << minivan.passengers << " with an old range of " << minivan.oldrange() << " km." << endl;
    
    Vehicle sportscar;
    cout << "Sportscar can carry " << sportscar.passengers << " with a range of " << sportscar.range() << " km." << endl;
    Vehicle sportscars[5]; // array of 5 Vehicle objects
    return 0;
}