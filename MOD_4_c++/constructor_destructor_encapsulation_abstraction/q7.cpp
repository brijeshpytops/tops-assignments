// . Write a C++ program to implement a class called Date that has private
// member variables for day, month, and year. Include member functions to
// set and get these variables, as well as to validate if the date is valid.

#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(2000) {}

    void set_day(int d) {
        day = d;
    }

    void set_month(int m) {
        month = m;
    }

    void set_year(int y) {
        year = y;
    }

    int get_day() const {
        return day;
    }

    int get_month() const {
        return month;
    }

    int get_year() const {
        return year;
    }

    bool is_valid_date() const {
        if (year >= 0 && month >= 1 && month <= 12 && day >= 1) {
            if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day <= 31) {
                return true;
            } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30) {
                return true;
            } else if (month == 2) {
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    return (day <= 29);
                } else {
                    return (day <= 28);
                }
            }
        }
        return false;
    }
};

int main() {
    Date d;

    d.set_day(20);
    d.set_month(4);
    d.set_year(2022);

    cout << "Date Information:" << endl;
    cout << "Day: " << d.get_day() << endl;
    cout << "Month: " << d.get_month() << endl;
    cout << "Year: " << d.get_year() << endl;

    if (d.is_valid_date()) {
        cout << "Valid Date" << endl;
    } else {
        cout << "Invalid Date" << endl;
    }

    return 0;
}
