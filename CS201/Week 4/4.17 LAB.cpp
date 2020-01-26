#include <iostream>
using namespace std;

int main() {

   int num_input, avg, max = 0, count = 0;

   do {
      cin >> num_input;
      avg += num_input;
      if (num_input >= max) {
         max = num_input;
      }
      count++;
   } while (num_input >= 0);

   avg = (avg - num_input) / (count - 1) ;

   cout << avg << " " << max << endl;

   return 0;
}
