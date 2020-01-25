#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int inputDay;

   cin >> inputMonth;
   cin >> inputDay;

   if ((inputDay <= 1) || (inputDay >= 31)) {
      cout << "Invalid" << endl;
   } else if ((inputMonth == "March" && inputDay >= 20) || inputMonth == "April"
     || inputMonth == "May" || (inputMonth == "June" && inputDay <= 20)) {
      cout << "Spring" << endl;
   } else if ((inputMonth == "June" && inputDay >= 21) || inputMonth == "July"
            || inputMonth == "August" || (inputMonth == "September" && inputDay <= 21)) {
      cout << "Summer" << endl;
   } else if ((inputMonth == "September" && inputDay >= 22) || inputMonth == "October"
            || inputMonth == "November" || (inputMonth == "December" && inputDay <= 20)) {
      cout << "Autumn" << endl;
   } else if ((inputMonth == "December" && inputDay >= 21) || inputMonth == "January"
            || inputMonth == "February" || (inputMonth == "March" && inputDay <= 19)) {
      cout << "Winter" << endl;
   } else {
      cout << "Invalid" << endl;
   }


   return 0;
}
