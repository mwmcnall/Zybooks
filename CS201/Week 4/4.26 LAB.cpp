#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string remove_spaces(string s) {
   string no_spaces;
   char letter;
   for (int i = 0; i < static_cast<int>(s.size()); i++) {
      letter = s.at(i);
      if (letter != ' ') {
         no_spaces += letter;
      }
   }
   return no_spaces;
}

int main() {

   string user_s, reverse;

   getline(cin, user_s);

   for (int i = static_cast<int>(user_s.size()) - 1; i >= 0; i--) {
      reverse += user_s.at(i);
   }

   if (remove_spaces(user_s) == remove_spaces(reverse)) {
      cout << user_s << " is a palindrome";
   } else {
      cout << user_s << " is not a palindrome";
   }

   cout << endl;

   return 0;
}
