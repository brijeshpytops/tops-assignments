// . Write a C++ program to create a class called Car that has private
// member variables for company, model, and year. Implement member
// functions to get and set these variables.

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    string get_company() const {
        return company;
    }

    string get_model() const {
        return model;
    }

    int get_year() const {
        return year;
    }

    void set_company(const string& c) {
        company = c;
    }

    void set_model(const string& m) {
        model = m;
    }

    void set_year(int y) {
        year = y;
    }
};

int main() {
    Car c1;

    c1.set_company("Toyota");
    c1.set_model("Camry"); 
    c1.set_year(2022);

    cout << "Car Info:" << endl;
    cout << "Company: " << c1.get_company() << endl;
    cout << "Model: " << c1.get_model() << endl;
    cout << "Year: " << c1.get_year() << endl;

    return 0;
}
