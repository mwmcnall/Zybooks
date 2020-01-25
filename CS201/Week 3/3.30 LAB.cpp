#include <iostream>
#include <string>
using namespace std;

string replace_one(string s, string replacing, string replace_with) {
   if (s.find(replacing) != string::npos) {
      s.replace(s.find(replacing), replacing.size(), replace_with);
   }

   return s;
}

int main() {

   string input;

   cout << "Enter text:" << endl;
   getline(cin, input);

   cout << "You entered: " << input << endl;

   input = replace_one(input, "BFF", "best friend forever");
   input = replace_one(input, "IDK", "I don't know");
   input = replace_one(input, "JK", "just kidding");
   input = replace_one(input, "TMI", "too much information");
   input = replace_one(input, "TTYL", "talk to you later");

   cout << "Expanded: " << input << endl;

   return 0;
}
