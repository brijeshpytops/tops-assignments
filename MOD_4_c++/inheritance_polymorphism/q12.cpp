// Write a program to swap the two numbers using friend function
// without using third variable

#include <iostream>
using namespace std;


class SwapNum {
private:
    int num1, num2;

public:
    
    SwapNum(int a, int b) : num1(a), num2(b) {}

    
    friend void swap_numbers(SwapNum&);

    void display_num() {
        cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};

void swap_numbers(SwapNum& obj) {
    obj.num1 = obj.num1 + obj.num2;
    obj.num2 = obj.num1 - obj.num2;
    obj.num1 = obj.num1 - obj.num2;
}

int main() {
    int a, b;
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;

    SwapNum numbers(a, b);

    cout << "Before swapping: num1 = " << a << ", num2 = " << b << endl;

    swap_numbers(numbers);

    numbers.display_num();

    return 0;
}
