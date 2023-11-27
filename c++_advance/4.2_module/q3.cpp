// Write a program to find the multiplication values and the cubic values using inline function 
#include<iostream>
using namespace std;

inline int mul(int a){ return a*a;}

inline int cub(int a){ return a*a*a;};

int main(){
    cout<<"\nMultiplication: "<<mul(10)<<endl;
    cout<<"Cubic: "<<cub(10)<<endl;
    return 0;
}