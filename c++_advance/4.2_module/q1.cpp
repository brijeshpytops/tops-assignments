// WAP to create simple calculator using class
#include<iostream>
using namespace std;

class Calculator{
    public:
    float add(float n1,float n2){
        return n1+n2;
    }
    float sub(float n1,float n2){
        return n1-n2;
    }
    float mul(float n1,float n2){
        return n1*n2;
    }
    float div(float n1,float n2){
        if(n2==0){
            return -1;
        }else{
           return n1/n2;
        }
    }    
};

int main(){
    int c;
    float a,b;
    cout<<"\nEnter Number A: ";
    cin>>a;
    cout<<"\nEnter Number B: ";
    cin>>b;
    cout<<"\n(1) For Addition\n(2) For Subtraction\n(3) For Multiplication\n(4) For Divisions\nEnter Your Choice: ";
    cin>>c;

    Calculator c1;
    switch(c){
        case 1:
            cout<<"\n Addition: "<<c1.add(a,b)<<endl;
            break;
        case 2:
            cout<<"\n Subtraction: "<<c1.sub(a,b)<<endl;
            break;
        case 3:
            cout<<"\n Multiplication: "<<c1.mul(a,b)<<endl;
            break;
        case 4:
            cout<<"\n Division: "<<c1.div(a,b)<<endl;
            break;
        default:
            cout<<"\nPlease Enter Valid Input In 1-4"<<endl;
    }
    return 0;
}