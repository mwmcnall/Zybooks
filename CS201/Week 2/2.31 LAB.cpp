#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int num4;

   /* Type your code here. */
   cin >> num1;
   cin >> num2;
   cin >> num3;
   cin >> num4;

   cout << (num1 * num2 * num3 * num4) << " " << (num1 + num2 + num3 + num4) / 4 << endl;

   cout << fixed << setprecision(3);

   cout << (static_cast<double>(num1) * num2 * num3 * num4) << " " << (static_cast<double>(num1) + num2 + num3 + num4) / 4 << endl;

   return 0;
}
