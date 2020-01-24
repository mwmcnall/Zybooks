#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   /* Type your code here. */
   int age;
   double weight, heart_rate, time;
   const double TIME_CONST = 4.184;

   cin >> age;
   cin >> weight;
   cin >> heart_rate;
   cin >> time;

   cout << fixed << setprecision(2);

   cout << "Women: " << (((age * 0.074) - (weight * 0.05741) + (heart_rate * 0.4472) - 20.4022) * (time / TIME_CONST))
        << " calories" << endl;
   cout << "Men: " << (((age * 0.2017) + (weight * 0.09036) + (heart_rate * 0.6309) - 55.0969) * (time / TIME_CONST))
        << " calories" << endl;

   return 0;
}
