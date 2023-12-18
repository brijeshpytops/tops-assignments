// Write a C++ Program to illustrates the use of Constructors in multilevel
// inheritance

#include <iostream>
using namespace std;

class Base {
protected:
    int base_var;

public:
   
    Base(int value) : base_var(value) {
        cout << "Base Class Constructor" << endl;
    }

    void display_base_var() {
        cout << "Base Variable: " << base_var << endl;
    }
};

class Intermediate : public Base {
protected:
    int intermediate_var;

public:
   
    Intermediate(int base_value, int inter_value) : Base(base_value), intermediate_var(inter_value) {
        cout << "Intermediate Class Constructor" << endl;
    }

    void dis_intermediate_var() {
        cout << "Intermediate Variable: " << intermediate_var << endl;
    }
};

class Derived : public Intermediate {
private:
    int derived_var;

public:
    Derived(int base_value, int inter_value, int derived_value) : Intermediate(base_value, inter_value), derived_var(derived_value) {
        cout << "Derived Class Constructor" << endl;
    }

    void display_derived_var() {
        cout << "Derived Variable: " << derived_var << endl;
    }
};

int main() {
   
    Derived derivedObj(10, 20, 30);

    derivedObj.display_base_var();
    derivedObj.dis_intermediate_var();
    derivedObj.display_derived_var();

    return 0;
}
