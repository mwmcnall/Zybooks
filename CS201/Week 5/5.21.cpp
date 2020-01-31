#include <iostream>
#include <iomanip>
using namespace std;

double SecondsToJiffies(double userSeconds) {
   return userSeconds * 100.0;
}

int main() {

   double userSeconds;

   cout << fixed << setprecision(2);
   cin >> userSeconds;

   cout << SecondsToJiffies(userSeconds) << endl;

   return 0;
}
