// Write a program to swap the two numbers using friend function without
// using third variable 
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"\nEnter Value A: ";
    cin>>a;
    cout<<"\nEnter Value B: ";
    cin>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"Value of A: "<<a<<" And B: "<<b; 
    return 0;
}