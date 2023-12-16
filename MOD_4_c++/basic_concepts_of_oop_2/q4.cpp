// Write a C++ program to implement a class called Circle that has private
// member variables for radius. Include member functions to calculate the
// circle's area and circumference.

#include <iostream>
#include <cmath>

using namespace std;

class Circle {
private:
    float radius;

public:

    void set_radius(float r) {
        radius = r;
    }

    float get_radius() const {
        return radius;
    }

    float calculate_area() const {
        return M_PI * pow(radius, 2);
    }

    float calculate_circumference() const {
        return 2 * M_PI * radius;
    }
};

int main() {
    Circle c1;

    c1.set_radius(10);

    cout << "Circle Information:" << endl;
    cout << "Radius: " << c1.get_radius() << endl;
    cout << "Area: " << c1.calculate_area() << endl;
    cout << "Circumference: " << c1.calculate_circumference() << endl;

    return 0;
}
