#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

vector<string> StringToWords(string& s) {
   vector<string> words;
   string word;
   stringstream iss(s);

   while (iss >> word) {
      words.push_back(word);
   }

   return words;
}

void printVector(vector<string> vec) {
   for (int i = 0; i < static_cast<int>(vec.size()); i++) {
      cout << vec[i];
   }

   cout << endl;
}

int GetFrequencyOfWord(vector<string> wordsList, string currWord) {
   int count = 0;

   for (int i = 0; i < static_cast<int>(wordsList.size()); i++) {
      if (wordsList[i] == currWord)
         count += 1;
   }

   return count;
}

int main() {
   int temp;
   cin >> temp;
   string inputString;

   getline(cin, inputString);

   vector<string> wordsList = StringToWords(inputString);

   for (int i = 0; i < static_cast<int>(wordsList.size()); i++) {
      cout << wordsList[i] << " " <<  GetFrequencyOfWord(wordsList, wordsList[i]) << endl;
   }


   return 0;
}
