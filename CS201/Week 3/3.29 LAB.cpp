#include <iostream>
#include <string>
using namespace std;

int main() {

   string input;

   cout << "Enter text:" << endl;
   getline(cin, input);

   cout << "You entered: " << input << endl;

   if (input.find("BFF") != string::npos) {
      cout << "BFF: best friend forever" << endl;
   } if (input.find("IDK") != string::npos) {
      cout << "IDK: I don't know" << endl;
   } if (input.find("JK") != string::npos) {
      cout << "JK: just kidding" << endl;
   } if (input.find("TMI") != string::npos) {
      cout << "TMI: too much information" << endl;
   } if (input.find("TTYL") != string::npos) {
      cout << "TTYL: talk to you later" << endl;
   }

   return 0;
}
