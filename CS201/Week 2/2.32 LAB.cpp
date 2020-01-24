#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double nextFrequency(double freq, int n) {
   const double r = pow(2, (1.0/12.0));
   return freq * pow(r, n);
}

int main() {

   /* Type your code here. Include the math library above first. */
   double freq;

   cin >> freq;

   cout << fixed << setprecision(2);
   cout << freq << " "
        << nextFrequency(freq, 1) << " "
        << nextFrequency(freq, 2) << " "
        << nextFrequency(freq, 3) << " "
        << nextFrequency(freq, 4) << endl;

   return 0;
}
