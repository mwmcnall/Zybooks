#include <iostream>
using namespace std;

int main() {

   int int_input;

   cin >> int_input;

   if ((int_input >= 20) && (int_input <= 98) ) {
      cout << int_input << " ";
      while(int_input % 11 != 0) {
         int_input -=1;
         cout << int_input << " ";
      }
   } else {
      cout << "Input must be 20-98";  
   }

   cout << endl;

   return 0;
}
