/*
File: PowersOfTwo.cpp
---------------------
This program generates a list of the powers of
two up to an exponent limit entered by the user.
*/

#include <iostream>

/* Function prototypes */

int raiseToPower(int n, int k);

/* Main program */

int main() {

    int limit;

    std::cout << "Thsi program lists powers of two." << std::endl;
    std::cout << "Enter exponent limit: ";
    std::cin >> limit;

    for (int i = 0; i <= limit; i++) {
        std::cout << "2 to the " << i << " = " << raiseToPower(2, i) << std::endl;
    }

    return 0;

}

/*
Function: raiseToPower
Usage: int p = raiseToPower(n, k);
----------------------------------
Returns the integer n raised to the kth power.
*/

int raiseToPower(int n, int k) {
    int result = 1;
    for (int i = 0; i < k; i++) {
        result *= n;
    }
    
    return result;
}