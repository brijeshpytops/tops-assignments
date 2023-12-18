// Write a program to find the max number from given two numbers
// using friend function

#include <iostream>
using namespace std;
class FindMaxNum {
private:
    int num1, num2;

public:
    FindMaxNum(int a, int b) : num1(a), num2(b) {}

    friend int findMax(const FindMaxNum&);

    void displayNumbers() {
        cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};


int findMax(const FindMaxNum& obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    int a, b;
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;

    FindMaxNum numbers(a, b);

    cout << "Given numbers: ";
    numbers.displayNumbers();

    int maxNumber = findMax(numbers);

    cout << "Maximum number: " << maxNumber << endl;

    return 0;
}
