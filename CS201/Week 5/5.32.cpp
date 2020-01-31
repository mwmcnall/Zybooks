#include <iostream>
#include <vector>
#include <string>
using namespace std;

void AnnounceChange(int change, string changeTypeSingle, string ChangeTypePlural) {
   cout << change << " ";
   if (change > 1)
      cout << ChangeTypePlural;
   else
      cout << changeTypeSingle;
   cout << endl;
}

int ChangeAmount(int& userTotal, int changeAmount, string changeTypeSingle, string changeTypePlural) {
   int change = userTotal / changeAmount;
   if (change == 0)
      return 0;
   userTotal %= changeAmount;
   if (change > 0)
      AnnounceChange(change, changeTypeSingle, changeTypePlural);
   return change;
}

void ExactChange(int userTotal, vector<int>& coinVals) {
   if (userTotal == 0) {
      cout << "no change" << endl;
   } else {
      coinVals[0] = ChangeAmount(userTotal, 100, "dollar", "dollars");
      coinVals[1] = ChangeAmount(userTotal, 25, "quarter", "quarters");
      coinVals[2] = ChangeAmount(userTotal, 10, "dime", "dimes");
      coinVals[3] = ChangeAmount(userTotal, 5, "nickel", "nickel");
      coinVals[4] = ChangeAmount(userTotal, 1, "penny", "pennies");
   }
}

int main() {
   int inputVal;
   vector<int> changeAmount(5);

   cin >> inputVal;

   ExactChange(inputVal, changeAmount);

   return 0;
}
