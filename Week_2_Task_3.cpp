#include <iostream>

using namespace std;

int main() {
    // i. Declare variables
    double num1, num2, result;
    char op;
    bool validOperation = true;

    // Prompt user for input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    // Switch statement to perform the selected operation
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Handle division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                validOperation = false;
            }
            break;
        default:
            cout << "Error: Invalid operator entered." << endl;
            validOperation = false;
            break;
    }

    // Display the result of the operation
    if (validOperation) {
        cout << "\nResult: " << num1 << " " << op << " " << num2 << " = " << result << endl;
    }

    return 0;
}