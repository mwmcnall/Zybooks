#include <iostream>
using namespace std;

bool IsLeapYear(int userYear) {
   if (userYear % 100 == 0) {
      if (userYear % 400 == 0)
         return true;
      else
         return false;
   }
   if (userYear % 4 == 0)
      return true;
   return false;
}

int main() {

   int userYear;
   cin >> userYear;

   if (IsLeapYear(userYear))
      cout << userYear << " is a leap year.";
   else
      cout << userYear << " is not a leap year.";

   cout << endl;

   return 0;
}
