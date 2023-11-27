// Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class Calculator{
public:
    Calculator(float a,float b){
        cout<<"\nAddition: "<<a+b<<endl;
        cout<<"Subtraction: "<<a-b<<endl;
        cout<<"Multiplication: "<<a*b<<endl;
        if(b==0){
            cout<<"Division By 0 is Not Possible "<<endl;
        }else{
            cout<<"Division: "<<a/b<<endl;
        }
    }
};
int main(){
    float a,b;
    cout<<"\nEnter Number A: ";
    cin>>a;
    cout<<"\nEnter Number B: ";
    cin>>b;
    Calculator c(a,b);
    return 0;
}