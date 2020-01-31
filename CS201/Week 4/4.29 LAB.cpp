#include <iostream>
using namespace std;

int main() {
   int arrowBaseHeight;
   int arrowBaseWidth;
   int arrowHeadWidth;

   cout << "Enter arrow base height:" << endl;
   cin >> arrowBaseHeight;

   cout << "Enter arrow base width:" << endl;
   cin >> arrowBaseWidth;

   do {
      cout << "Enter arrow head width:" << endl;
      cin >> arrowHeadWidth;
   } while (arrowHeadWidth <= arrowBaseWidth);

   cout << endl;

   for (int i = 0; i < arrowBaseHeight; i++) {
      for (int j = 0; j < arrowBaseWidth; j++) {
         cout << '*';
      }
      cout << endl;
   }

   for (int i = arrowHeadWidth; i > 0; i-- ) {
      for (int j = i; j > 0; j--) {
         cout << '*';
      }
      cout << endl;
   }


   return 0;
}w
