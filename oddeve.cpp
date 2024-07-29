#include <iostream>

// Trijal Burman //
// PRN - 2370123145

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}
/*
Output
Enter an integer: 4
4 is even.
*/
