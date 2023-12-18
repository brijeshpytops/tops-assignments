// Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <string>

class Concat {
public:
    Concat() {}

    std::string operator+(const std::string& str) const {
        return merge_str + str;
    }

    void set_str(const std::string& str) {
        merge_str = str;
    }

private:
    std::string merge_str;
};

int main() {
    using namespace std; 

    Concat c1;

    c1.set_str("Tops, ");

    string second_string = "Technology pvt. Ltd."; 

    string result = c1 + second_string;

    cout << "Concatenated String: " << result << endl;

    return 0;
}
