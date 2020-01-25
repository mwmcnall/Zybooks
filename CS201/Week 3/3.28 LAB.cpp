#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {

   string acronym, full_words;

   cout << "Input an abbreviation:" << endl;
   cin >> acronym;

   if (acronym == "LOL") {
      full_words = "laughing out loud";
   } else if (acronym == "IDK") {
      full_words = "I don't know";
   } else if (acronym == "BFF") {
      full_words = "best friends forever";
   } else if (acronym == "IMHO") {
      full_words = "in my humble opinion";
   } else if (acronym == "TMI") {
      full_words = "too much information";
   } else {
      full_words = "Unknown";
   }

   cout << full_words << endl;

   return 0;
}
