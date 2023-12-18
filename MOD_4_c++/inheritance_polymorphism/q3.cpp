// Create a class person having members name and age. Derive a class student
// having member percentage. Derive another class teacher having member
// salary. Write necessary member function to initialize, read and write data.
// Write also Main function (Multiple Inheritance)
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
  
    void person_data(const string& n, int a) {
        name = n;
        age = a;
    }

   
    void read_person_info() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void write_person_info() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:
    void student_data(float p) {
        percentage = p;
    }

    void read_student_info() {
        read_person_info(); 
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void write_student_info() const {
        write_person_info(); 
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
   
    void teacher_data(float s) {
        salary = s;
    }

    
    void read_teacher_info() {
        read_person_info(); 
        cout << "Enter salary: ";
        cin >> salary;
    }

    void read_teache_info() const {
        write_person_info(); 
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter Student's Information:" << endl;
    student.read_student_info();

    cout << "\nStudent's Data:" << endl;
    student.write_student_info();

    cout << "\nEnter Teacher's Information:" << endl;
    teacher.read_teacher_info();

    cout << "\nTeacher's Data:" << endl;
    teacher.read_teache_info();

    return 0;
}
