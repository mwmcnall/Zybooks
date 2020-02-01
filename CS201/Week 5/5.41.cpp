#include <iostream>
#include <string>
using namespace std;

string GetUserInput(string& input);
int GetNumOfNonWSCharacters(const string s);
int GetNumOfWords(const string s);
int FindText(string findText, string sampleText);
void ReplaceExclamation(string& s);
void ShortenSpace(string& s);

/*
(7) Implement the ShortenSpace() function. ShortenSpace() has a string parameter and updates the string by replacing all
sequences of 2 or more spaces with a single space. ShortenSpace() DOES NOT output the string. Call ShortenSpace() in the
PrintMenu() function, and then output the edited string. (3 pt)
*/

int main() {

   string userInput;

   cout << "Enter a sample text:" << endl;
   getline(cin, userInput);

   cout << endl << "You entered: " << userInput << endl << endl;

   string choice;

   while (GetUserInput(choice) != "q") {
      if (choice == "c")
         cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(userInput) << endl;
      else if (choice == "w")
         cout << "Number of words: " << GetNumOfWords(userInput) << endl;
      else if (choice == "f") {
         string findText;
         cout << "Enter a word or phrase to be found:" << endl;
         getline(cin, findText);
         //cout << "findText: " << findText;
         cout << "\"" << findText << "\"" << " instances: " << FindText(findText, userInput) << endl;
      } else if (choice == "r") {
         ReplaceExclamation(userInput);
         cout << "Edited text: " << userInput << endl;
      } else if (choice == "s") {
         ShortenSpace(userInput);
         cout << "Edited text: " << userInput << endl;
      }

      cout << endl;
   }

   return 0;
}

int GetNumOfNonWSCharacters(const string s) {
   int count = 0;
   for (int i = 0; i < static_cast<int>(s.size()); i++) {
      if (s.at(i) != ' ')
         count += 1;
   }
   return count;
}

int FindText(string findText, string sampleText) {

   int count = 0;
   int found = 0;

   //cout << "sampleText: " << sampleText << endl;
   //cout << "findText: " << findText << endl;
   //cout << "find return: " << sampleText.find(findText) << endl;

   for (int i = 0; i < static_cast<int>(sampleText.size()) - static_cast<int>(findText.length()); i++) {
      found = sampleText.find(findText, found + i);
      //cout << "found: " << found << endl;
      if (found > 0) {
         //i += findText.length();
         count += 1;
      } else
         break;
   }
   return count;
}

void PrintMenu() {
   cout << "MENU" << endl
      << "c - Number of non-whitespace characters" << endl
      << "w - Number of words" << endl
      << "f - Find text" << endl
      << "r - Replace all !'s" << endl
      << "s - Shorten spaces" << endl
      << "q - Quit" << endl << endl
      << "Choose an option:" << endl;
}

int GetNumOfWords(const string s) {
   int wordCount = 0;
   bool space = false;
   for (int i = 0; i < static_cast<int>(s.size()); i++) {
      if ((space == false) && (s.at(i) == ' ')) {
         space = true;
         wordCount += 1;
      } else if ((s.at(i) != ' '))
         space = false;
   }
   return wordCount + 1;
}

void ReplaceExclamation(string& s) {
   for (int i = 0; i < static_cast<int>(s.size()); i++) {
      if (s.at(i) == '!')
         s.at(i) = '.';
   }
}

void ShortenSpace(string& s) {
   bool space = false;
   for (int i = 0; i < static_cast<int>(s.size()); i++) {
      if (space && (s.at(i) == ' ')) {
         s.erase(i, 1);
         i -= 1;
      } else if (s.at(i) == ' ') {
         space = true;
      } else if (space)
         space = false;
   }
}

string GetUserInput(string& choice) {
   string userInput;
   PrintMenu();
   getline(cin, userInput);
   while (userInput != "q" && userInput != "c" && userInput != "w" &&
      userInput != "f" && userInput != "r" && userInput != "s") {
      cout << "Enter a correct option" << endl;
      PrintMenu();
      cin >> userInput;
   }

   choice = userInput;

   return userInput;
}
