#include <iostream>
#include <string>
using namespace std;

int main() {

   string word;
   int num;

   cin >> word;
   cin >> num;

   while ((word != "quit") && (num != 0)) {
      cout << "Eating " << num << " " << word << " a day keeps the doctor away." << endl;
      cin >> word;
      cin >> num;
   }

   return 0;
}
