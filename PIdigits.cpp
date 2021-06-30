/*
Created by: Pawel Wyszynski
Date: 30.06.2021

Find PI to the Nth Digit
Enter a number and have the program generate PI up to that many decimal places. Keep a limit to how far the program will go.

*/

//First 100 decimal places
#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
#include <iostream>

int main() {
    int decimals = 0;

    std::cout << "How many decimals places of PI do you want? (Max 100): ";
    std::cin >> decimals;

    if (!std::cin) //Input must be an integer
        std::cout << "Wrong input!";
    else if (decimals >= 0 && decimals <= 100) {
        decimals += 1;
        std::cout.precision(decimals);
        std::cout << PI << "\n";
    }
    else if (decimals < 0)
        std::cout << "Must be positive number!\n";
    else if (decimals > 100) {
        std::cout.precision(101);
        std::cout << PI << "\n";
    }
}