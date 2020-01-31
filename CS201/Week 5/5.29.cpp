#include <iostream>
#include <cmath>
using namespace std;

int LargestNumber(int num1, int num2, int num3) {
   return fmax(fmax(num1, num2),  num3);
}

int SmallestNumber(int num1, int num2, int num3) {
   return fmin(fmin(num1, num2),  num3);
}

int main() {
   int num1, num2, num3;

   cin >> num1;
   cin >> num2;
   cin >> num3;

   cout << "largest: " << LargestNumber(num1, num2, num3) << endl;
   cout << "smallest: " << SmallestNumber(num1, num2, num3) << endl;

   return 0;
}
