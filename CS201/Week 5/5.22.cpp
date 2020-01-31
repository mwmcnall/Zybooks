#include <iostream>
#include <iomanip>
using namespace std;

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon) {
   return ( drivenMiles / milesPerGallon) * dollarsPerGallon;
}

int main() {
   double milesPerGallon, dollarsPerGallon;

   cout << fixed << setprecision(2);
   cin >> milesPerGallon;
   cin >> dollarsPerGallon;


   cout << DrivingCost(10, milesPerGallon, dollarsPerGallon) << " " <<
      DrivingCost(50, milesPerGallon, dollarsPerGallon) << " " <<
      DrivingCost(400, milesPerGallon, dollarsPerGallon) << endl;

   return 0;
}
