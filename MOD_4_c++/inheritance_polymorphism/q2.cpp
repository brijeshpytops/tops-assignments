// Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>

using namespace std;

class Shape {
public:
    float length;
    float width;

    void input() {
        cout << "Enter length : ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
};


class Rectangle : public Shape {
public:
    float cal_area(){
        return length * width;
    }
};

int main() {
    Rectangle r1;  
    
    r1.input();
    cout << "Area of the r1: " << r1.cal_area() << endl;

    return 0;
}
