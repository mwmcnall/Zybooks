#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x;
   double y;
   double z;

   /* Type your code here. Note: Include the math library above first. */
   cin >> x;
   cin >> y;
   cin >> z;

   cout << pow(x, z) << " " << pow(x, pow(y, z)) << " " << fabs(y) << " " << sqrt(pow(x * y, z)) << endl;

   return 0;
}
