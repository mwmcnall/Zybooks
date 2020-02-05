#include <iostream>
#include <vector>
using namespace std;

int main() {

   int numInts;

   cin >> numInts;

   vector<int> userInts(numInts);

   for (int i = 0; i < numInts; i++) {
      cin >> userInts.at(i);
   }

   int min = userInts.at(0), secondMin = userInts.at(numInts - 1);
   int currVal;

   for (int i = 1; i < numInts; i++) {
      currVal = userInts.at(i);
      if (currVal < min) {
         secondMin = min;
         min = currVal;
         //cout << "min set: " << min << endl;
      } if ((currVal > min) && (currVal < secondMin))
         secondMin = currVal;
   }

   cout << min << " " << secondMin << endl;

   return 0;
}
