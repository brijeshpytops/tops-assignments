// Write a C++ program to create a class called Rectangle that has private
// member variables for length and width. Implement member functions to
// calculate the rectangle's area and perimeter.

#include <iostream>

using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void set_length(float l) {
        length = l;
    }

    void set_width(float w) {
        width = w;
    }

    float get_length() const {
        return length;
    }

    float get_width() const {
        return width;
    }

    float calculate_area() const {
        return length * width;
    }

    float calculate_perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r1;

    r1.set_length(4.0);
    r1.set_width(6.0);

    cout << "Rectangle Information:" << endl;
    cout << "Length: " << r1.get_length() << endl;
    cout << "Width: " << r1.get_width() << endl;
    cout << "Area: " << r1.calculate_area() << endl;
    cout << "Perimeter: " << r1.calculate_perimeter() << endl;

    return 0;
}
