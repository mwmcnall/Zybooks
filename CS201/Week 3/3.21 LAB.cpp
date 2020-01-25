#include <iostream>
using namespace std;

int min_assign(int color, int min_color) {
   if (color <= min_color) {
      return color;
   }
   return min_color;
}

int main() {

   int color1, color2, color3;
   int min_color = 256;

   cin >> color1;
   cin >> color2;
   cin >> color3;

   min_color = min_assign(color1, min_color);
   min_color = min_assign(color2, min_color);
   min_color = min_assign(color3, min_color);

   color1 -= min_color;
   color2 -= min_color;
   color3 -= min_color;

   cout << color1 << " "
        << color2 << " "
        << color3 << endl;

   return 0;
}
