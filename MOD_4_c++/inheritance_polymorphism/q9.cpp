// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>

using namespace std;

class Matrix {
private:
    int size;
    int* data;

public:
    Matrix(int n) : size(n) {
        data = new int[size];
    }

    ~Matrix() {
        delete[] data;
    }


    Matrix operator+(const Matrix& other) const {
        if (size != other.size) {
            cerr << "Matrices must be the same size for addition." << endl;
            exit(0);
        }

        Matrix result(size);

        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }

    
    void setElement(int index, int value) {
        if (index >= 0 && index < size) {
            data[index] = value;
        } else {
            cerr << "Matrix size must be same" << endl;
            exit(0);
        }
    }


    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size = 5;

    Matrix matrix1(size);
    Matrix matrix2(size);

    for (int i = 0; i < size; ++i) {
        matrix1.setElement(i, i + 1);
        matrix2.setElement(i, 2 * (i + 1));
    }

    cout << "Matrix 1: ";
    matrix1.display();

    cout << "Matrix 2: ";
    matrix2.display();

    Matrix result = matrix1 + matrix2;

    cout << "Resultant Matrix: ";
    result.display();

    return 0;
}
