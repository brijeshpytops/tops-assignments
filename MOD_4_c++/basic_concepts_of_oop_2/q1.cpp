#include <iostream>

// Using namespace std to avoid writing std:: before standard library components
using namespace std;

class Calculator {
public:
    float add(float a, float b) {
        return a + b;
    }

    float subtract(float a, float b) {
        return a - b;
    }

    float multiply(float a, float b) {
        return a * b;
    }

    float divide(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero is undefined." << endl;
            return 0.0;
        }
    }
};

int main() {
    Calculator c1;

    float num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << c1.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << c1.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << c1.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << c1.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation." << endl;
    }

    return 0;
}
