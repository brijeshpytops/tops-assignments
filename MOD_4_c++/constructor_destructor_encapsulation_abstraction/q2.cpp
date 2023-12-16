// Write a program of Addition, Subtraction, Division, Multiplication using
// constructor.

#include <iostream>

using namespace std;

class Calculator {
private:
    float num1;
    float num2;

public:
   
    Calculator(float a, float b) : num1(a), num2(b) {}

    float add() const {
        return num1 + num2;
    }

    float subtract() const {
        return num1 - num2;
    }

    float divide() const {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero is undefined." << endl;
            return 0.0;
        }
    }

    float multiply() const {
        return num1 * num2;
    }
};

int main() {
    float num_1, num_2;
    cout << "Enter the num_1: ";
    cin >> num_1;
    cout << "Enter the num_2: ";
    cin >> num_2;

    Calculator c1(num_1, num_2);

    cout << "Addition: " << c1.add() << endl;
    cout << "Subtraction: " << c1.subtract() << endl;
    cout << "Multiplication: " << c1.multiply() << endl;
    cout << "Division: " << c1.divide() << endl;

    return 0;
}
