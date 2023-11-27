// Create a class person having members name and age. Derive a class student
// having member percentage. Derive another class teacher having member
// salary. Write necessary member function to initialize, read and write data.
// Write also Main function (Multiple Inheritance)

#include<iostream>
using namespace std;

class person{
protected:
    string name;
    int age;
public:
    person(string nm,int ag){
        name = nm;
        age = ag;
    }

};

class student : public person{
private:
    float percentage;
public:
    student(string nm, int ag, float per):person(nm,ag){
        percentage = per;
    }

    void display(){
        cout<<"\nName: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Percentage: "<<percentage<<endl;
    }
};

class teacher : public person{
private:
    double salary;
public:
    teacher(string nm, int ag, double slry):person(nm,ag){
        salary = slry;
    }
    
    void display(){
        cout<<"\nName: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    student s1("Bot1", 14,59.64);
    s1.display();
    teacher t1("Bot2",34,90000);
    t1.display();
    return 0;
}