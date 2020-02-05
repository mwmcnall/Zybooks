#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstring>
using namespace std;

void DeleteLeadingSpaces(string& s);
string TakeWord(string& sourceString);
void OutputMatches(vector<string> wordList, char letter);

int main() {

   int temp;
   cin >> temp;
   string inputString;

   getline(cin, inputString);

   vector<string> wordList;

   for (int i = 0; i < temp; i++) {
      wordList.push_back(TakeWord(inputString));
   }

   DeleteLeadingSpaces(inputString);

   OutputMatches(wordList, static_cast<char>(inputString.at(0)));

   return 0;
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

   cout << endl;

}

bool DetectLetter(string word, char letter) {
   for (int i = 0; i < static_cast<int>(word.size()); i++) {
      if (word.at(i) == letter)
         return true;
   }
   return false;
}

void OutputMatches(vector<string> wordList, char letter) {
   for (int i = 0; i < static_cast<int>(wordList.size()); i++) {
      if (DetectLetter(wordList.at(i), letter)) {
         cout << wordList.at(i) << endl;
         continue;
      }
   }
}
