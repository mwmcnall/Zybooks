#include <iostream>
#include <string>
using namespace std;

int main() {

   string firstName, secondName, thirdName;

   cin >> firstName;
   cin >> secondName;
   cin >> thirdName;

   if (thirdName.size() > 0) {
      cout << thirdName << ", " << firstName.at(0) << "." << secondName.at(0) << "." << endl;
   } else { // Only two names
      cout << secondName << ", " << firstName.at(0) << "." << endl;
   }


   return 0;
}
