#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Choose an operation
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    // Perform the operation and display the result
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
    case '/':
        if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
    default:
                cout << "Invalid operation!" << endl;
                break;
    }

    return 0;
}

