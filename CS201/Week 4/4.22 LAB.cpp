#include <iostream>
#include <string>
using namespace std;

int main() {
   string s;
   int char_count = 0;
   char letter;

   getline(cin, s);  // Gets entire line, including spaces.

   for (int i = 0; i < static_cast<int>(s.size()); i++) {
      letter = s.at(i);
      if ((letter != ' ') && (letter != '.') && (letter != ',')) {
         char_count++;
      }
   }

   cout << char_count << endl;

   return 0;
}
