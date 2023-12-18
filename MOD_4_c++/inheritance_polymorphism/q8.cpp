// Write a program to Mathematic operation like Addition, Subtraction,
// Multiplication, Division Of two number using different parameters and
// Function Overloading

#include <iostream>
using namespace std;

int math_operation(int a, int b) {
    return a + b;
}

float math_operation(float a, float b) {
    return a - b;
}

double math_operation(double a, double b) {
    return a * b;
}

double math_operation(int a, double b) {
    if (b != 0) {
        return static_cast<double>(a) / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0.0;
    }
}

int main() {
    
    int result1 = math_operation(5, 3);
    cout << "Addition Result: " << result1 << endl;

    float result2 = math_operation(7.5f, 2.5f);
    cout << "Subtraction Result: " << result2 << endl;

    double result3 = math_operation(4.5, 2.0);
    cout << "Multiplication Result: " << result3 << endl;

    double result4 = math_operation(10, 3.0);
    cout << "Division Result: " << result4 << endl;

    return 0;
}
