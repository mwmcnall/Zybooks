#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string HeadsOrTails() {
   unsigned int rand_num = rand() % 2;
   if (rand_num == 0)
      return "heads";
   else
      return "tails";
}

int main() {
   int print_amount;
   cin >> print_amount;

   srand(2);  // Unique seed

   for (int i = 0; i < print_amount; i++) {
      cout << HeadsOrTails() << endl;
   }

   return 0;
}
