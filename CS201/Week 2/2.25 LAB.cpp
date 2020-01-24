#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   int userNum, x;

   cin >> userNum;
   cin >> x;

   userNum /= x;
   cout << userNum << " ";
   userNum /= x;
   cout << userNum << " ";
   userNum /= x;
   cout << userNum << endl;

   return 0;
}
