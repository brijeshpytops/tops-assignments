// Assume that the test results of a batch of students are stored in three different
// classes. Class Students are storing the roll number. Class Test stores the
// marks obtained in two subjects and class result contains the total marks
// obtained in the test. The class result can inherit the details of the marks
// obtained in the test and roll number of students. (Multilevel Inheritance)

#include <iostream>
using namespace std;

class Students {
protected:
    int roll_num;

public:
    void set_roll_num(int roll) {
        roll_num = roll;
    }

    int get_roll_num() {
        return roll_num;
    }
};


class Test : public Students {
protected:
    int sub_m1;
    int sub_m2;

public:
    void set_tes_marks(int marks1, int marks2) {
        sub_m1 = marks1;
        sub_m2 = marks2;
    }

    int get_sub_m1() {
        return sub_m1;
    }

    int get_sub_m2() {
        return sub_m2;
    }
};

class Result : public Test {
private:
    int total_marks;

public:
    void calc_total_makrs() {
        total_marks = get_sub_m1() + get_sub_m2();
    }

    void display_result() {
        cout << "Roll Number: " << get_roll_num() << endl;
        cout << "Subject 1 Marks: " << get_sub_m1() << endl;
        cout << "Subject 2 Marks: " << get_sub_m2() << endl;
        cout << "Total Marks: " << total_marks << endl;
    }
};

int main() {
    
    Result result;

   
    result.set_roll_num(101);
    result.set_tes_marks(75, 80);

 
    result.calc_total_makrs();
    result.display_result();

    return 0;
}
