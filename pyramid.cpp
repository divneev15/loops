/* Divneev 
24070123043 Entc A2
*/

#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; ++i) {
        // Print spaces
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
  
}
/*
    *
   ***
  *****
 *******
*********

*/
