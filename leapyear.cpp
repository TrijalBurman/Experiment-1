#include <iostream>

// Trijal Burman //
// PRN - 2370123145


int main() {
    int year;

    std::cout << "Enter a year: ";
    std::cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
/*
Output
Enter a year: 2019
2019 is not a leap year.
*/
