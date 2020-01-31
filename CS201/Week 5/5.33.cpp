#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool IsVectorEven(vector<int> myVec) {

   for (int i = 0; i < myVec.size(); i++) {
      if (myVec[i] % 2 != 0)
         return false;
   }

   return true;
}

bool IsVectorOdd(vector<int> myVec) {
   for (int i = 0; i < myVec.size(); i++) {
      if (myVec[i] % 2 == 0)
         return false;
   }

   return true;
}

int main() {

   int amount;
   cin >> amount;
   vector<int> values(amount);

   for (int i = 0; i < amount; i++) {
      cin >> values[i];
   }

   if (IsVectorEven(values))
      cout << "all even";
   else if (IsVectorOdd(values))
      cout << "all odd";
   else
      cout << "not even or odd";
   cout << endl;

   return 0;
}
