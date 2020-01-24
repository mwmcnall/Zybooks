#include <iostream>
using namespace std;

void cout_multiple(int num, int element) {
   for (int i = 0; i < num; i++) {
      cout << element;
   }
}

void cout_combo(int num1, int num2, int element1, int element2) {
   cout_multiple(num1, element1);
   cout_multiple(num2, element2);
   cout << endl;
}

int main() {
   int baseChar;
   int headChar;

   cin >> baseChar;
   cin >> headChar;

   cout << "     " << headChar << endl;
   cout << "     " << headChar << headChar << endl;
   cout_combo(5, 3, baseChar, headChar);
   cout_combo(5, 4, baseChar, headChar);
   cout_combo(5, 3, baseChar, headChar);
   cout << "     " << headChar << headChar << endl;
   cout << "     " << headChar << endl;

   return 0;
}
