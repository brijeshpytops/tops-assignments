// 1.Write a program to calculate the area of circle, rectangle and triangle
// using Function Overloading
// Rectangle: Area * breadth
// Triangle: ½ *Area* breadth
// Circle: Pi * Area *Area

#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14;

float calc_area(float radius) {
    return PI * radius * radius;
}

float calc_area(float length, float breadth) {
    return length * breadth;
}

float calc_area_triangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << calc_area(radius) << endl;

    float length, breadth;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    cout << "Area of the rectangle: " << calc_area(length, breadth) << endl;

    float base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    cout << "Area of the triangle: " << calc_area_triangle(base, height) << endl;

    return 0;
}
