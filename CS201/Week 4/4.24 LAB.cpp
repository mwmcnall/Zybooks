#include <iostream>
using namespace std;

int main() {

   int i_1, i_2;

   cin >> i_1;
   cin >> i_2;

   if (i_2 >= i_1) {
      while (i_1 <= i_2) {
         cout << i_1 << " ";
         i_1 += 10;
      }
   } else {
      cout << "Second integer can't be less than the first.";
   }

   cout << endl;

   return 0;
}
