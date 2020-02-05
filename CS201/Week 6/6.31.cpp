#include <iostream>
#include <iomanip>              // For setprecision
#include <vector>
using namespace std;

int main() {

   const int INPUT_AMOUNT = 5;
   vector<double> userDoubles(INPUT_AMOUNT);
   double total = 0, avg, max;

   // Read in 5 doubles
   for (int i = 0; i < INPUT_AMOUNT; i++) {
      cout << "Enter weight " << i + 1 << ":";
      cin >> userDoubles.at(i);
      cout << endl;
   }
   cout << fixed << setprecision(2);
   // Output the five read in values spaced out
   double currVal;
   max = userDoubles.at(0);
   cout << "You entered: ";
   for (int i = 0; i < INPUT_AMOUNT; i++) {
      currVal = userDoubles.at(i);
      cout << currVal << " ";
      total += currVal;
      if (currVal > max)
         max = currVal;
   }

   avg = total / static_cast<float>(INPUT_AMOUNT);

   cout << endl << endl;

   cout << "Total weight: " << total << endl;
   cout << "Average weight: " << avg << endl;
   cout << "Max weight: " << max << endl;

   return 0;
}
