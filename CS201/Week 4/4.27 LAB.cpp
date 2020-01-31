#include <iostream>
using namespace std;

bool check_linear_eq(int i1, int i2, int i3, int x, int y) {
   if ((i1 * x) + (i2 * y) == i3) {
      return true;
   }
   return false;
}

int main() {

   int i1, i2, i3, i4, i5, i6, x, y;
   cin >> i1;
   cin >> i2;
   cin >> i3;
   cin >> i4;
   cin >> i5;
   cin >> i6;

   for (x = -10; x <= 10; x++) {
      for (y = -10; y <= 10; y++) {
         if (check_linear_eq(i1, i2, i3, x, y) && check_linear_eq(i4, i5, i6, x, y)) {
            cout << x << " " << y << endl;
            return 0;
         }
      }
   }

   cout << "No solution" << endl;

   return 0;
}
