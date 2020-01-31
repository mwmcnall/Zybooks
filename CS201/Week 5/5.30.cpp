#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string CreateAcronym(string userPhrase) {
   string acronym = "";

   for (int i = 0; i < static_cast<int>(userPhrase.size()); i++) {
      char letter = userPhrase.at(i);
      if (isupper(letter))
         acronym += letter;
   }

   return acronym;
}

int main() {
   string userPhrase;
   getline(cin, userPhrase);

   cout << CreateAcronym(userPhrase) << endl;

   return 0;
}
