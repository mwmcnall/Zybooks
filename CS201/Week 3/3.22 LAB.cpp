#include <iostream>
using namespace std;

int main() {

   int num1, num2, num3;
   int min_num;

   cin >> num1;
   cin >> num2;
   cin >> num3;

   if (num1 <= num2) {
      min_num = num1;
   } if (num2 <= min_num) {
      min_num = num2;
   } if (num3 <= min_num) {
      min_num = num3;
   }

   cout << min_num << endl;

   return 0;
}
