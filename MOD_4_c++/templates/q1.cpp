//  Write a program of to swap the two values using template

#include <iostream>
using namespace std; 
template <typename T>
void swap_value(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swap_value(num1, num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;



    char char1 = 'A', char2 = 'B';
    cout << "Before swapping: char1 = " << char1 << ", char2 = " << char2 << endl;
    swap_value(char1, char2);
    cout << "After swapping: char1 = " << char1 << ", char2 = " << char2 << endl;

    return 0;
}
