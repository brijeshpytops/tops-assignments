// Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll_num;

public:
    void get_stu_info() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll_num;
        cin.ignore(); 
    }
};

class Exam : public Student {
protected:
    float marks1, marks2;

public:
    void get_exam_info() {
        cout << "Enter marks in subject 1: ";
        cin >> marks1;
        cout << "Enter marks in subject 2: ";
        cin >> marks2;
    }
};

class Result : public Exam {
public:
    void display_result_info() {
        float total_marks = marks1 + marks2;
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << "\n";
        cout << "Roll Number: " << roll_num << "\n";
        cout << "\nExam Details:\n";
        cout << "Marks in subject 1: " << marks1 << "\n";
        cout << "Marks in subject 2: " << marks2 << "\n";
        cout << "\nResult:\n";
        cout << "Total Marks: " << total_marks << "\n";
    }
};

int main() {
  
    Result sr;

    sr.get_stu_info();

    sr.get_exam_info();

    sr.display_result_info();

    return 0;
}
