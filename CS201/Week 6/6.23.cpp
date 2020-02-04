#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {

   int numInts;

   cin >> numInts;

   vector<int> userInts(numInts);

   for (int i = 0; i < numInts; i++) {
      cin >> userInts.at(i);
   }

   for (int i = numInts - 1; i >= 0; i--) {
      cout << userInts.at(i) << " ";
   }

   cout << endl;

   return 0;
}
