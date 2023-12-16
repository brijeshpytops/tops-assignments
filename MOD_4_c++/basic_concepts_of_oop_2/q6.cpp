// . Write a C++ program to create a class called Person that has private
// member variables for name, age and country. Implement member
// functions to set and get the values of these variables.

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    
    void set_name(const string& n) {
        name = n;
    }

    void set_age(int a) {
        age = a;
    }

    void set_country(const string& c) {
        country = c;
    }

    string get_name() const {
        return name;
    }

    int get_age() const {
        return age;
    }

    string get_country() const {
        return country;
    }
};

int main() {
    Person p1;

    p1.set_name("John Doe");
    p1.set_age(25);
    p1.set_country("USA");

    cout << "Person Information:" << endl;
    cout << "Name: " << p1.get_name() << endl;
    cout << "Age: " << p1.get_age() << endl;
    cout << "Country: " << p1.get_country() << endl;

    return 0;
}
