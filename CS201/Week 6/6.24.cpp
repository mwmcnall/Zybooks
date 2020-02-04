#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int ReturnMiddle(vector<int> vec) {
   int middle = ((vec.size()) / 2) - 1;
   return vec.at(middle);
}

int main() {

   const int MAX_INPUTS = 9;
   vector<int> vecInts;
   int temp;

   for (int i = 0; i <= MAX_INPUTS; i++) {
      cin >> temp;
      vecInts.push_back(temp);
      if (vecInts.at(i) == -1)
         break;
      if ((i == MAX_INPUTS) && (vecInts.at(i) != -1)) {
         cout << "Too many inputs" << endl;
         return 0;
      }

   }

   cout << ReturnMiddle(vecInts) << endl;

   return 0;
}
