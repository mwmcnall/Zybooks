#include <iostream>
#include <vector>
using namespace std;

int main() {

   int numIntegers, threshold;

   cin >> numIntegers;

   vector<int> numVect(numIntegers);

   for (int i = 0; i < numIntegers; i++) {
      cin >> numVect.at(i);
   }

   cin >> threshold;

   for (int i = 0; i < numIntegers; i++) {
      if (numVect.at(i) <= threshold)
         cout << numVect.at(i) << " ";
   }

   cout << endl;

   return 0;
}
