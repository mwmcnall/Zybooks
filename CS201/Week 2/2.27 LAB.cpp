#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

double gasCost(double mpg, double miles, double gas_dollars_gallon) {
   return (miles / mpg) * gas_dollars_gallon;
}

int main() {

   /* Type your code here. */
   double mpg, gas_dollars_gallon;

   cin >> mpg;
   cin >> gas_dollars_gallon;

   cout << fixed << setprecision(2);
   cout << gasCost(mpg, 20.0, gas_dollars_gallon) << " "
        << gasCost(mpg, 75.0, gas_dollars_gallon) << " "
        << gasCost(mpg, 500.0, gas_dollars_gallon) << endl;

   return 0;
}
