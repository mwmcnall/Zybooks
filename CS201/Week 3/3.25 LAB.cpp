#include <iostream>
#include <string>
using namespace std;

int change(int change, int amount, string str_single, string str_plural) {
   int change_num;
   change_num = change / amount;
   if (change_num > 0) {
      //change_num = change / amount;
      cout << change_num << " ";
      if (change_num > 1) {
         cout << str_plural << endl;
      } else {
         cout << str_single << endl;
      }
      return change % amount;
   }
   return change;
}

int main() {

   int change_num;

   cin >> change_num;

   if (change_num <= 0) {
      cout << "No change" << endl;
   } else {
      change_num = change(change_num, 100, "Dollar", "Dollars");
      change_num = change(change_num, 25, "Quarter", "Quarters");
      change_num = change(change_num, 10, "Dime", "Dimes");
      change_num = change(change_num, 5, "Nickel", "Nickels");
      change_num = change(change_num, 1, "Penny", "Pennies");
   }

   return 0;
}
