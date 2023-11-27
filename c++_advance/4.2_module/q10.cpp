// Write a program to concatenate the two strings using Operator Overloading 
#include<iostream>
using namespace std;

class StringOperation{
private:
    string value;
public:
    StringOperation(string val):value(val){}

    StringOperation operator+(const StringOperation& other){
        return StringOperation(value + other.value);
    }

    void display(){
        cout<<"\nConcated String: "<<value<<endl;
    }
};

int main(){
    string str1,str2;

    cout<<"\nEnter First String: ";
    cin>>str1;
    cout<<"\nEnter Second String: ";
    cin>>str2;

    StringOperation st1(str1);
    StringOperation st2(str2);

    StringOperation result = st1 + st2;
    result.display();
    return 0;
}