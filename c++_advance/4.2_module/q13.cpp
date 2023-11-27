// Write a program to find the max number from given two numbers using
// friend function
#include<iostream>
using namespace std;
class Num{
protected:
    int x, y;
    Num(int a,int b){
        x = a;
        y = b;
    }
    friend class Max;
};
class Max{
private: 
    int max;
public:
    Max(int x,int y){
        if(x>y){
            cout<<x<<" is Max"<<endl; 
        }else if(y>x){
            cout<<y<<" is Max"<<endl; 
        }else{
            cout<<"Both are same"<<endl; 
        }
    }
    
};
int main(){
    int a,b;
    cout<<"\nEnter Value A: ";
    cin>>a;
    cout<<"\nEnter Value B: ";
    cin>>b;
    
    Max n1(a,b);
    n1.Num();
    return 0;
}