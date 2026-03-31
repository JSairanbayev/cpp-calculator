#include <iostream>
#include <limits>

int main() {
    double num1, num2;
    char operation;
    char repeat;

    std::cout << "=== Console Calculator ===" << std::endl;

    do {
        // Input first number
        std::cout << "\nEnter first number: ";
        while (!(std::cin >> num1)) {
            std::cout << "Error! Enter a valid number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        // Input operation
        std::cout << "Enter operation (+, -, *, /): ";
        std::cin >> operation;

        // Input second number
        std::cout << "Enter second number: ";
        while (!(std::cin >> num2)) {
            std::cout << "Error! Enter a valid number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        // Calculate result
        switch (operation) {
        case '+':
            std::cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Error: division by zero!" << std::endl;
            }
            else {
                std::cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            }
            break;
        default:
            std::cout << "Error: unknown operation '" << operation << "'" << std::endl;
            break;
        }

        std::cout << "\nContinue? (y/n): ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    std::cout << "Thank you for using the calculator!" << std::endl;

    return 0;
}