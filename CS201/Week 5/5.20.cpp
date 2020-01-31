#include <iostream>
#include <iomanip>
using namespace std;

double StepsToMiles(int steps) {
   return steps / 2000.0;
}

int main() {

   int steps;
   cout << fixed << setprecision(2);
   cin >> steps;

   cout << StepsToMiles(steps) << endl;

   return 0;
}
