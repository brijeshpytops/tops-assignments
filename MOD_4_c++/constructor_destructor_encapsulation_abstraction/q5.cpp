// Write a C++ program to create a class called Triangle that has private
// member variables for the lengths of its three sides. Implement member
// functions to determine if the triangle is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std;

class Triangle {
private:
    float side_1;
    float side_2;
    float side_3;

public:
    Triangle(float s1, float s2, float s3) : side_1(s1), side_2(s2), side_3(s3) {}

   
    void determine_type() const {
        if (side_1 == side_2 && side_2 == side_3) {
            cout << "Equilateral Triangle" << endl;
        } else if (side_1 == side_2 || side_1 == side_3 || side_2 == side_3) {
            cout << "Isosceles Triangle" << endl;
        } else {
            cout << "Scalene Triangle" << endl;
        }
    }
};

int main() {
    float s1, s2, s3;
    cout << "Enter the lengths of the three sides of the triangle:" << endl;
    cin >> s1 >> s2 >> s3;

    
    Triangle t1(s1, s2, s3);

    cout << "Triangle Type: ";
    t1.determine_type();

    return 0;
}
