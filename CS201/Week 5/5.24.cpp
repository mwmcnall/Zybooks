#include <iostream>
#include <cmath>
using namespace std;

int MaxMagnitude(int userVal1, int userVal2) {
   if (abs(userVal1) > abs(userVal2))
      return userVal1;
   else
      return userVal2;
}

int main() {
   int userVal1, userVal2;
   cin >> userVal1;
   cin >> userVal2;

   cout << MaxMagnitude(userVal1, userVal2) << endl;

   return 0;
}
