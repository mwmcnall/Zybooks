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

   int lowRange, highRange;
   cin >> lowRange;
   cin >> highRange;

   int currVal;

   for (int i = 0; i < numInts; i++) {
      currVal = userInts.at(i);
      if ((currVal >= lowRange) && (currVal <= highRange))
         cout << currVal << " ";
   }

   cout << endl;


}
