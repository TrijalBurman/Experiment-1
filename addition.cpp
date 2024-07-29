#include <iostream>

// Trijal Burman //
// PRN - 2370123145

int main() {
    int num1, num2, sum;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    sum = num1 + num2;

    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

    return 0;
}

/*
Output
Enter the first number: 5
Enter the second number: 5
The sum of 5 and 5 is 10
*/
