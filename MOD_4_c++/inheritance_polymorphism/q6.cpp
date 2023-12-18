// Write a C++ Program to show access to Private Public and Protected using
// Inheritance

#include <iostream>
using namespace std;

class Base {
public:
    int pub_;    
protected:
    int pro_;
private:
    int pri_;   

public:
    void set_data(int pub, int pro, int pri) {
        pub_ = pub;
        pro_ = pro;
        pri_ = pri;
    }

    void display_value() {
        cout << "Public Variable: " << pub_ << endl;
        cout << "Protected Variable: " << pro_ << endl;
        cout << "Private Variable: " << pri_ << endl;
    }

    int getPrivateVar() {
        return pri_;
    }
};

class Derived : public Base {
public:
    void access_parent_member() {
     
        cout << "Derived Class - Accessing Public Variable: " << pub_ << endl;
        cout << "Derived Class - Accessing Protected Variable: " << pro_ << endl;
        cout << "Derived Class - Accessing Private Variable: " << getPrivateVar() << endl;
    }
};

int main() {
    Derived obj;

    obj.set_data(1, 2, 3);
    obj.display_value();
    obj.access_parent_member();

    return 0;
}
