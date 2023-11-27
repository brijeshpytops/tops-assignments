// Write a program of to sort the array using templates. 
#include <iostream>
template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int size = 5;
    int intArray[size] = {64, 25, 12, 22, 11};
    double doubleArray[size] = {5.5, 2.2, 1.1, 4.4, 3.3};

    std::cout << "Original integer array: ";
    printArray(intArray, size);

    bubbleSort(intArray, size);

    std::cout << "Sorted integer array: ";
    printArray(intArray, size);

    std::cout << "\nOriginal double array: ";
    printArray(doubleArray, size);

    bubbleSort(doubleArray, size);

    std::cout << "Sorted double array: ";
    printArray(doubleArray, size);

    return 0;
}
