#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName) {
   for (int i = 0; i < static_cast<int>(nameVec.size()); i++) {
      if (nameVec[i] == contactName )
         return phoneNumberVec[i];
   }

   return "No phone number for " + contactName;
}

void DeleteLeadingSpaces(string& s) {
   int i = 0;
   char letter;
   do {
      letter = s.at(i);
      if (letter == ' ') {
         s = s.substr(1, s.size());
      }
   } while (letter == ' ');

}

string TakeWord(string& sourceString) {
   unsigned int letterCount = 0;
   string word;
   stringstream iss(sourceString);

   iss >> word;
   letterCount += word.length();
   DeleteLeadingSpaces(sourceString);

   sourceString = sourceString.substr(letterCount, sourceString.size());

   return word;
}

void printVector(vector<string> vec) {
   for (int i = 0; i < static_cast<int>(vec.size()); i++) {
      cout << vec[i] << endl;
   }
}

int main() {
   int numberPairs;
   string inputString;
   string inputName;
   vector<string> nameVec(numberPairs), phoneNumberVec(numberPairs);

   cin >> numberPairs;
   getline(cin, inputString);

   for (int i = 0; i < numberPairs; i++) {
      nameVec.push_back(TakeWord(inputString));
      phoneNumberVec.push_back(TakeWord(inputString));
   }

   inputName = TakeWord(inputString);

   cout << GetPhoneNumber(nameVec, phoneNumberVec, inputName) << endl;

   return 0;
}
