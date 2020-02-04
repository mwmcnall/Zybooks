#include <iostream>
#include <vector>
using namespace std;

int MinElement(vector<int> vec) {

   int min = vec.at(0);

   for (int i = 1; i < vec.size(); i++) {
      if (vec.at(i) < min)
         min = vec.at(i);
   }

   return min;
}

int main() {

   int numIntegers;

   cin >> numIntegers;

   vector<int> numVect(numIntegers);

   for (int i = 0; i < numIntegers; i++) {
      cin >> numVect.at(i);
   }

   int min = MinElement(numVect);

   for (int i = 0; i < numIntegers; i++) {
      numVect.at(i) -= min;
   }

   for (int i = 0; i < numIntegers; i++) {
      cout << numVect.at(i) << " ";
   }

   cout << endl;

   return 0;
}
