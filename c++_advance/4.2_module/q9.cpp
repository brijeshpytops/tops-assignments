// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;

class Matrix {
public:
    int* data;
    int size;
public:
    Matrix(int size):size(size){
        data = new int[size];
    }
    
    Matrix operator+(const Matrix& other){
        if(size != other.size){
            cout<<"\nMiss Matched Matrix Size Cant Perform Operation"<<endl;
            return Matrix(0);
        }
        Matrix result(size);
        for(int i=0;i<size;i++){
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    void display(){
        for(int i=0;i<size;i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    int size;
    cout<<"\nEnter the Size of Matrix1: ";
    cin>>size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout<<"\nEnter the Values For First Matrix: "<<endl;
    for(int i=0;i<size;i++){
        cin>>matrix1.data[i];
    }

    cout<<"\nEnter the Values For Second Matrix: "<<endl;
    for(int i=0;i<size;i++){
        cin>>matrix2.data[i];
    }

    Matrix result = matrix1 + matrix2;

    cout<<"\nFirst Matrix: "<<endl;
    matrix1.display();
    cout<<"\nSecond Matrix: "<<endl;
    matrix2.display();
    cout<<"\nResult Matrix: "<<endl;
    result.display();

    return 0;
}