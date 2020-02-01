#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> StringToWordList(string s);
int FindWordInWordList(vector<string> wordList, string wordToFind);
void ReplaceWords(string& stringReplaced, vector<string> wordList, vector<string> wordsToFind, vector<string> replacementWords);
void DeleteLeadingSpaces(string& s);
string TakeWord(string& sourceString);

int main() {

   int numWordPairs;
   string replacementWords;

   cin >> numWordPairs;
   getline(cin, replacementWords);

   vector<string> toReplaceWords(numWordPairs);
   vector<string> replaceWords(numWordPairs);

   for (int i = 0; i < numWordPairs; i++) {
      toReplaceWords[i] = TakeWord(replacementWords);
      replaceWords[i] = TakeWord(replacementWords);
   }

   int numWords;
   string replacementInput;
   vector<string> wordList;

   cin >> numWords;
   getline(cin, replacementInput);
   DeleteLeadingSpaces(replacementInput);
   wordList = StringToWordList(replacementInput);

   ReplaceWords(replacementInput, wordList, toReplaceWords, replaceWords);

   // I don't know why the input sometimes has spaces at the end
   // / why my program doesn't always keep them
   if (replacementInput.at(replacementInput.size() - 1) == ' ')
      cout << replacementInput << endl;
   else
      cout << replacementInput << " " << endl;


   return 0;
}

vector<string> StringToWordList(string s) {
    vector<string> wordList;
    string word;
    stringstream iss(s);

    while (iss >> word) {
        wordList.push_back(word);
    }

    return wordList;
}

int FindWordInWordList(vector<string> wordList, string wordToFind) {
    unsigned int letterCount = 0;

    for (int i = 0; i < static_cast<int>(wordList.size()); i++) {
        if (wordList[i] == wordToFind) {
            return letterCount;
        }
        letterCount += wordList[i].length() + 1;
    }

    // Word not found
    return -1;
}

void ReplaceWords(string& stringReplaced, vector<string> wordList, vector<string> wordsToFind, vector<string> replacementWords) {
   int wordIndex;
   for (int i = 0; i < static_cast<int>(wordsToFind.size()); i++) {
      while (1 == 1) {
         wordIndex = FindWordInWordList(wordList, wordsToFind[i]);
         if (wordIndex == -1) {
            break;
         }
         stringReplaced.replace(wordIndex, wordsToFind[i].length(), replacementWords[i]);
         wordList = StringToWordList(stringReplaced);
      }
   }
}

void DeleteLeadingSpaces(string& s) {
    int i = 0;
    char letter;

    if (s.at(i) == ' ') {
        do {
            letter = s.at(i);
            if (letter == ' ') {
                s = s.substr(1, s.size());
            }
        } while (letter == ' ');
    }

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
