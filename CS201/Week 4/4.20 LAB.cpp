#include <iostream>
#include <string>
using namespace std;

int main() {

   string password;
   char letter;

   cin >> password;

   for(int i = 0; i < static_cast<int>(password.size()); i++) {
      letter = password.at(i);
      if (letter == 'i') {
         password.at(i) = '!';
      } else if (letter == 'a') {
         password.at(i) = '@';
      } else if (letter == 'm') {
         password.at(i) = 'M';
      } else if (letter == 'B') {
         password.at(i) = '8';
      } else if (letter == 'o') {
         password.at(i) = '.';
      }
   }

   cout << password + "q*s" << endl;


   return 0;
}
