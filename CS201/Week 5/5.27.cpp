#include <iostream>
#include <string>
using namespace std;

string RemoveSpaces(string userString) {
   string NoSpacesString = "";

   for (int i = 0; i < static_cast<int>(userString.size()); i++) {
      if (userString.at(i) != ' ') {
         NoSpacesString.push_back(userString.at(i));
      }
   }

   return NoSpacesString;
}

int main() {
   string userString;
   getline(cin, userString);

   cout << RemoveSpaces(userString) << endl;

   return 0;
}
