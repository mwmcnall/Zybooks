#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

void OutputRoster(vector<int> jersey, vector<int> rating);
char GetUserInput(char& input);
void AddPlayer(vector<int>& jersey, vector<int>& rating);
void DeletePlayer(vector<int>& jersey, vector<int>& rating);
void UpdatePlayerRating(vector<int>& jersey, vector<int>& rating);
void OutputPlayersAboveRating(const vector<int> jersey, const vector<int> rating, int threshold);

int main() {

   const int INPUT_AMOUNT = 5;
   vector<int> jerseyNumber(INPUT_AMOUNT);
   vector<int> ratingNumber(INPUT_AMOUNT);

   // Read in 5 doubles
   for (int i = 0; i < INPUT_AMOUNT; i++) {
      cout << "Enter player "<< i + 1 << "'s jersey number:";
      cin >> jerseyNumber.at(i);
      cout << endl << "Enter player "<< i + 1 << "'s rating:" << endl;
      cin >> ratingNumber.at(i);

      cout << endl;
   }

   OutputRoster(jerseyNumber, ratingNumber);

   char input;
   int threshold = -1;

   while (GetUserInput(input) != 'q') {
      switch(input) {
         case 'a':
            AddPlayer(jerseyNumber, ratingNumber);
            break;
         case 'd':
            DeletePlayer(jerseyNumber, ratingNumber);
            break;
         case 'u':
            UpdatePlayerRating(jerseyNumber, ratingNumber);
            break;
         case 'r':
            OutputPlayersAboveRating(jerseyNumber, ratingNumber, threshold);
            break;
         case 'o':
            OutputRoster(jerseyNumber, ratingNumber);
            break;
         default:
            cout << "Error on GetUserInput()";
            return -1;
      }
   }

   return 0;
}

void _OutputPlayer(int playerNum, int jerseyNum, int ratingNum) {
   cout << "Player " << playerNum << " -- Jersey number: " << jerseyNum << ", Rating: " << ratingNum << endl;
}

void OutputRoster(vector<int> jersey, vector<int> rating) {

   cout << "ROSTER" << endl;
   for (int i = 0; i < static_cast<int>(jersey.size()); i++) {
      _OutputPlayer(i + 1, jersey.at(i), rating.at(i));
   }

   return;
}

void OutputMenu() {

   cout << "MENU" << endl;
   cout << "a - Add player" << endl;
   cout << "d - Remove player" << endl;
   cout << "u - Update player rating" << endl;
   cout << "r - Output players above a rating" << endl;
   cout << "o - Output roster" << endl;
   cout << "q - Quit" << endl << endl;

   return;
}

void _HelperInput(char& input) {
   cout << "Choose an option:" << endl;
   cin >> input;
   input = tolower(input);
}

char GetUserInput(char& input) {

   cout << endl;

   OutputMenu();

   _HelperInput(input);

   while ((input != 'a') && (input != 'd') && (input != 'u') && (input != 'r') &&
          (input != 'o') && (input != 'q')) {
      cout << "Please enter a valid menu option" << endl;
      _HelperInput(input);
   }

   return input;
}

void AddPlayer(vector<int>& jersey, vector<int>& rating) {

   int temp;

   cout << "Enter a new player's jersey number:" << endl;
   cin >> temp;
   jersey.push_back(temp);

   cout << "Enter the player's rating:" << endl;
   cin >> temp;
   rating.push_back(temp);

   return;
}

void DeletePlayer(vector<int>& jersey, vector<int>& rating) {

   int temp;

   cout << "Enter a jersey number:" << endl;
   cin >> temp;

   for (int i = 0; i < static_cast<int>(jersey.size()); i++) {
      if (jersey.at(i) == temp) {
         // Iterator type needed for .erase so implicitly case with .begin()
         jersey.erase(jersey.begin() + i);
         rating.erase(rating.begin() + i);
         break;
      }
   }

   return;
}

void UpdatePlayerRating(vector<int>& jersey, vector<int>& rating) {

   int temp;

   cout << "Enter a jersey number:" << endl;
   cin >> temp;

   for (int i = 0; i < static_cast<int>(jersey.size()); i++) {
      if (jersey.at(i) == temp) {
         cout << "Enter a new rating for player:" << endl;
         cin >> temp;
         rating.at(i) = temp;
         break;
      }
   }

   return;
}

void OutputPlayersAboveRating(const vector<int> jersey, const vector<int> rating, int threshold) {

   int temp;

   cout << endl << endl;

   cout << "Enter a rating:" << endl;
   cin >> temp;

   cout << "ABOVE " << temp << endl;

   for (int i = 0; i < static_cast<int>(jersey.size()); i++) {
      if (rating.at(i) > temp)
         _OutputPlayer(i + 1, jersey.at(i), rating.at(i));
   }

   return;
}
