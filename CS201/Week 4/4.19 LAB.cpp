#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string userString;
   bool string_num = true;

   cin >> userString;

   for (int i = 0; i < static_cast<int>(userString.size()); i++) {
      if (!isdigit(userString.at(i))) {
         string_num = false;
         break;
      }
   }

   if(string_num) {
      cout << "yes" << endl;
   } else {
      cout << "no" << endl;
   }

   return 0;
}
