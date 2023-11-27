// Write a program to calculate the area of circle, rectangle and triangle using
// Function Overloading
// Rectangle: Area * breadth
// Triangle: ½ *Area* breadth
// Circle: Pi * Area *Area
#include<iostream>
#include<cmath>
using namespace std;

class AreaCalculator{
public:

    double areaCalculator(double height,double breadth){
        return height*breadth;
    }
    double areaCalculator(double base,double width,string shape){
        if(shape == "Triangle"){
            return 0.5*base*width;
        }
        return -1;
    }
    double areaCalculator(double radius){
        return 3.14*radius*radius;
    }

};
int main(){
    AreaCalculator area;
    double height, width, breadth, base, length, radius; 

    cout<<"\nEnter height of Rectangle: ";
    cin>>height;
    cout<<"\nEnter breadth of Rectangle: ";
    cin>>breadth;
    cout<<"Area Of Rectangle: "<<area.areaCalculator(height,breadth);
    
    cout<<"\nEnter base of Triangle: ";
    cin>>base;
    cout<<"\nEnter width of Triangle: ";
    cin>>width;
    cout<<"Area Of Triangle: "<<area.areaCalculator(base,width,"Triangle");

    cout<<"\nEnter Radius of Circle: ";
    cin>>radius;
    cout<<"Area Of Circle: "<<area.areaCalculator(radius);

    return 0;
}