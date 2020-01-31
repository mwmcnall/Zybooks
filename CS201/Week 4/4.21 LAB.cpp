#include <iostream>
using namespace std;

int main() {

   string s, new_s;
   getline(cin, s);

   for (int i = 0; i < static_cast<int>(s.size()); i++) {
      if (s.at(i) != ' ') {
         new_s += s.at(i);
      }
   }

   cout << new_s << endl;

   return 0;
}
