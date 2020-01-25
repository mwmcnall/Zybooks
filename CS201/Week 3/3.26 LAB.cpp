#include <iostream>
using namespace std;

int main() {
   int inputYear;
   bool isCenturyYear = false;

   cin >> inputYear;

   isCenturyYear = (inputYear % 100 == 00) ? true: false;

   if (inputYear %4 == 0) {
      if (isCenturyYear) {
          if(inputYear % 400 == 0) {
             cout << inputYear << " - leap year" << endl;
          } else {
             cout << inputYear << " - not a leap year" << endl;
          }
      } else {
          cout << inputYear << " - leap year" << endl;
      }
   } else {
      cout << inputYear << " - not a leap year" << endl;
   }

   return 0;
}
