#include <iostream>
#include <cmath>                   // Note: Needed for math functions in part (3)
#include <iomanip>                 // For setprecision
using namespace std;

int main() {
   double wallHeight;
   double wallWidth;
   double wallArea;

   cout << fixed << setprecision(2);

   cout << "Enter wall height (feet):" << endl;
   cin  >> wallHeight;

   cout << "Enter wall width (feet):" << endl;
   cin >> wallWidth;

   // Calculate and output wall area
   wallArea = 0.0;
   wallArea = wallHeight * wallWidth;
   cout << "Wall area: " << wallArea << " square feet" << endl;

   const double paintNeeded = wallArea / 350.0;
   cout << "Paint needed: " << paintNeeded << " gallons" << endl;
   cout << "Cans needed: " << static_cast<int>(ceil(paintNeeded)) << " can(s)" << endl;

   return 0;
}
