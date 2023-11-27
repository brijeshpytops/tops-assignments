// Assume that the test results of a batch of students are stored in three different
// classes. Class Students are storing the roll number. Class Test stores the marks
// obtained in two subjects and class result contains the total marks obtained in
// the test. The class result can inherit the details of the marks obtained in the
// test and roll number of students. (Multilevel Inheritance)
#include<iostream>
using namespace std;

class Students{
private:
    int roll;

public:
    Students(int rl){
        roll = rl;
    }
};

class Test:public Students{
private:
    int mark1,mark2;

public:
    Test(int rl, int m1, int m2):Students(rl){
        mark1 = m1;
        mark2 = m2;
    }
};

class Result:public Test{
private:
    int results;

public:
    Result(int rl, int m1, int m2):Test(rl, m1, m2){
        results = m1 + m2;
    }

    void display(){
        cout<<"\nTotal Marks: "<<results<<" Out of 100"<<endl;
    }
};

int main(){
    Result r1(101,46,43);
    r1.display();
    return 0;
}