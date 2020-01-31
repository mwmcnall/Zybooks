#include <iostream>
#include <iomanip>                 // For setprecision
using namespace std;

double MilesToLaps(double miles) {
	return miles * 4.0;
}

int main() {

   double miles;

   cout << fixed << setprecision(2);
   cin >> miles;

   cout << MilesToLaps(miles) << endl;

   return 0;
}
