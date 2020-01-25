#include <iostream>
#include <string>
using namespace std;

int main() {
   int highwayNumber;

   cin >> highwayNumber;

   if ((highwayNumber > 0) && (highwayNumber < 1000)) {
      string output_string;

      if (highwayNumber <= 99) {
         output_string += " is primary, ";
      } else { // size == 3
         output_string += " is auxiliary, ";
         output_string += "serving I-" + to_string(highwayNumber % 100) + ", ";
      }

      if (highwayNumber % 2 == 0) {
            output_string += "going east/west.";
         } else { // is odd
            output_string += "going north/south.";
         }
      cout << "I-" << highwayNumber << output_string << endl;
   } else {
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }

   return 0;
}
