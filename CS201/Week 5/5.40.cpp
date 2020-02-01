#include <iostream>
#include <string>
using namespace std;

//Returns the number of characters in usrStr
int GetNumOfCharacters(const string usrStr) {

   return usrStr.length();
}

string NoWhitespaceString(const string s) {
   string returnString;

   for(int i = 0; i < static_cast<int>(s.size()); i ++) {
      if (s.at(i) != ' ') {
         returnString += s.at(i);
      }
   }

   return returnString;
}

int main() {

   string userInput;

   cout << "Enter a sentence or phrase:" << endl;

   getline(cin, userInput);

   cout << endl << "You entered: " << userInput << endl << endl;

   cout << "Number of characters: " << GetNumOfCharacters(userInput) << endl;
   cout << "String with no whitespace: " << NoWhitespaceString(userInput) << endl;


   return 0;
}
