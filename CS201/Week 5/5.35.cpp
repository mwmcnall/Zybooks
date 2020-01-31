#include <iostream>
#include <vector>
using namespace std;

bool NextIsSmaller(vector<int> vec, int pos) {
   if (vec[pos + 1] < vec[pos])
      return true;
   return false;
}

void SwapCurrentNext(vector<int>& vec, int pos) {
   int temp = vec[pos];
   vec[pos] = vec[pos + 1];
   vec[pos + 1] = temp;
}

void SortVector(vector<int>& myVec) {
   bool sorted;
   do {
      sorted = true;
      for (int i = 0; i < static_cast<int>(myVec.size()) - 1; i++) {
         if (NextIsSmaller(myVec, i)) {
            SwapCurrentNext(myVec, i);
            sorted = false;
         }
      }
   } while (sorted == false);
}

void printVector(vector<int> vec) {
   for (int i = 0; i < static_cast<int>(vec.size()); i++) {
      cout << vec[i] << " ";
   }

   cout << endl;
}

int main() {
   int numValues;
   cin >> numValues;
   vector<int> myVec(numValues);

   for (int i = 0; i < numValues; i++) {
      cin >> myVec[i];
   }

   SortVector(myVec);

   printVector(myVec);

   return 0;
}
