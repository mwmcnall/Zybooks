#include <iostream>
#include <string>
using namespace std;

int main() {

   char letter;
   string s;
   int count = 0;

   cin >> letter;
   getline(cin, s);

   for (int i = 0; i < static_cast<int>(s.size()); i++) {
      if (s.at(i) == letter) {
           count++;
      }
   }

   cout << count << endl;

   return 0;
}
