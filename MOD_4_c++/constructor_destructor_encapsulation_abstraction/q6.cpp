// . Write a C++ program to implement a class called Employee that has
// private member variables for name, employee ID, and salary. Include
// member functions to calculate and set salary based on employee
// performance. Using of constructor 

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employee_ID;
    float salary;

public:
   
    Employee(const string& emp_name, int emp_ID) : name(emp_name), employee_ID(emp_ID) {
        salary = 0.0;
    }

    void set_salary(float perfor_rating) {
        const float base_salary = 5000.0;

        float bonus = base_salary * (perfor_rating / 100.0);

        salary = base_salary + bonus;
    }

    string get_name() const {
        return name;
    }

    int get_employee_ID() const {
        return employee_ID;
    }

    float get_salary() const {
        return salary;
    }
};

int main() {
    Employee emp("John Doe", 12345);

    emp.set_salary(80);

    cout << "Employee Information:" << endl;
    cout << "Name: " << emp.get_name() << endl;
    cout << "Employee ID: " << emp.get_employee_ID() << endl;
    cout << "Salary: " << emp.get_salary() << endl;

    return 0;
}
