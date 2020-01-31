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

void OutputIntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold) {
   for (int i = 0; i < static_cast<int>(userValues.size()); i++) {
      if (userValues[i] <= upperThreshold)
         cout << userValues[i] << " ";
   }

   cout << endl;
}

int main() {

   int upperThreshold;
   vector<int> userValues = GetUserValues();

   cin >> upperThreshold;

   OutputIntsLessThanOrEqualToThreshold(userValues, upperThreshold);

   return 0;
}
