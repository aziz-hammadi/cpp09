#include <iostream>
using namespace std;

double division(int x, int y) {
   if (y == 0) {
      throw "Division by zero!";
   }
   return (double)x / y;
}

int main() {
   int x = 10, y = 5;
   double result;

   try {
      result = division(x, y);
      cout << "Result = " << result << endl;
   } catch (const char* msg) {
      cerr << msg << endl;
   }

   return 0;
}
