// Write a program to Mathematic operation like Addition, Subtraction,
// Multiplication, Division Of two number using different parameters and
// Function Overloading
// #include<iostream>
// using namespace std;
#include <iostream>
using namespace std;

class Mathoperation {
private:
    int value;

public:
    Mathoperation(int val) : value(val) {}

    Mathoperation operator+(const Mathoperation& other) {
        return Mathoperation(value + other.value);
    }

    Mathoperation operator-(const Mathoperation& other) {
        return Mathoperation(value - other.value);
    }

    Mathoperation operator*(const Mathoperation& other) {
        return Mathoperation(value * other.value);
    }

    Mathoperation operator/(const Mathoperation& other) {
        if (other.value == 0) {
            cout << "Divide by zero is not allowed." << endl;
            return Mathoperation(0);
        }
        return Mathoperation(value / other.value);
    }

    void display() {
        cout << "Result: " << value << endl;
    }
};

int main() {
    char operation;
    int n1, n2;
    cout << "Enter First Number: ";
    cin >> n1;
    cout << "Enter Second Number: ";
    cin >> n2;
    Mathoperation operand1(n1);
    Mathoperation operand2(n2);

    cout << "Enter Your Choice (+, -, *, /): ";
    cin >> operation;

    Mathoperation result(0);

    switch (operation) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            result = operand1 / operand2;
            break;
        default:
            cout << "Please Enter a Valid Operator!" << endl;
            return 1; 
    }

    result.display();
    return 0;
}
