#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string ReverseString(string userString) {
   string reverseString;

   for (int i = static_cast<int>(userString.size()) - 1; i >= 0; i--) {
      reverseString.push_back(userString.at(i));
   }

   return reverseString;
}

string IntToString(int intVal) {
     stringstream ss;
     ss << intVal;
     string s;
     ss >> s;
     return s;
}

string IntegerToReverseBinary(int integerValue) {
   string binaryString = "";
   int modInt;


   while (integerValue > 0) {
      modInt = integerValue % 2;

      binaryString += IntToString(modInt);

      integerValue /= 2;
   }

   return binaryString;
}

int main() {

   int userInt;
   cin >> userInt;

   cout << ReverseString(IntegerToReverseBinary(userInt)) << endl;

   return 0;
}
