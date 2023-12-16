// Write a program to find the multiplication values and the cubic values using
// inline function

#include <iostream>
using namespace std;

inline float multiply(float x) {
    return x * x; 
}

inline float cube(float x) {
    return x * x * x; 
}

int main() {
    float num;

    cout << "Enter a num: ";
    cin >> num;

    cout << "Multiplication value: " << multiply(num) << endl;
    cout << "Cubic value: " << cube(num) << endl;

    return 0;
}
