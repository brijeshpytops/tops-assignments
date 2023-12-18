// Write a C++ program to implement a class called Student that has private
// member variables for name, class, roll number, and marks. Include
// member functions to calculate the grade based on the marks and display
// the student's information. Accept address from each student implement
// using of aggregation 


#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    string street;
    string city;
    string state;
    string zipCode;

    void display_address() const {
        cout << "Address: " << street << ", " << city << ", " << state << " - " << zipCode << endl;
    }
};

class Student {
private:
    string name;
    string stu_class;
    int roll_num;
    int marks;
    Address address;  

public:
    Student(const string& n, const string& cls, int roll, int m, const Address& addr)
        : name(n), stu_class(cls), roll_num(roll), marks(m), address(addr) {}

    char cal_grade() const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void display_stu_info() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << stu_class << endl;
        cout << "Roll Number: " << roll_num << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << cal_grade() << endl;
        address.display_address();  
    }
};

int main() {
  
    Address a1;
    a1.street = "123 Main St";
    a1.city = "Cityville";
    a1.state = "State";
    a1.zipCode = "12345";

    Student student("John Doe", "12th", 101, 85, a1);

    student.display_stu_info();

    return 0;
}
