#include <iostream>
using namespace std;

int main() {
   long long phone_number;
   int right_digit, left_digit, area_code;

   cin >> phone_number;

   /* Type your code here */
   right_digit = phone_number % 10000;
   phone_number /= 10000;
   left_digit = phone_number % 1000;
   phone_number /= 1000;
   area_code = phone_number;

   cout << '(' << area_code << ") " << left_digit << "-" << right_digit << endl;


   return 0;
}
