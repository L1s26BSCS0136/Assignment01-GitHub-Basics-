/*
 * Program    : Sum of First 50 Natural Numbers
 * Name       : M Talha 
 * Reg No     : L1S26BSCS0136
 * Assignment : 01
 */
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 50; i++) {
        sum += i;
    }

    cout << "Sum of first 50 natural numbers (loop): " << sum << endl;

    return 0;
}
