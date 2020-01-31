#include <iostream>
#include <vector>
using namespace std;

vector<int> GetUserValues() {
   int numValues, tempNum;
   cin >> numValues;
   vector<int> vec;

   for (int i = 0; i < numValues; i++) {
      cin >> tempNum;
      vec.push_back(tempNum);
   }
   return vec;
}

int GetMinimumInt(vector<int> listInts) {
   int minNum = listInts[0];
   for (int i = 1; i < static_cast<int>(listInts.size()); i++) {
      if (listInts[i] < minNum)
         minNum = listInts[i];
   }
   return minNum;
}

void SubtractAllFromList(vector<int>& listInts, int subtractInt) {
   for (int i = 0; i < static_cast<int>(listInts.size()); i++) {
      listInts[i] -= subtractInt;
   }
}

void printVector(vector<int> vec) {
   for (int i = 0; i < static_cast<int>(vec.size()); i++) {
      cout << vec[i] << " ";
   }

   cout << endl;
}

int main() {
   vector<int> userValues = GetUserValues();
   int minNum = GetMinimumInt(userValues);

   SubtractAllFromList(userValues, minNum);

   printVector(userValues);

   return 0;
}
