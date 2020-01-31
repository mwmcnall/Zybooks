#include <iostream>
using namespace std;

int main() {

   string user_s;
   int i;

   getline(cin, user_s);

   while ((user_s != "Quit") && (user_s != "quit") && (user_s != "q")) {
      string reverse;
      for (i = static_cast<int>(user_s.size()) - 1; i >= 0; i--) {
           reverse += user_s.at(i);
      }
      cout << reverse << endl;
      getline(cin, user_s);
   }

   return 0;
}
