// Write a program of to sort the array using templates


#include <iostream>

template <typename T>
void bubble_sort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
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
    int intArray[] = {64, 25, 12, 22, 11};
    int intArraySize = sizeof(intArray) / sizeof(int);
    
    std::cout << "Original Integer Array: ";
    printArray(intArray, intArraySize);

    bubble_sort(intArray, intArraySize);

    std::cout << "Sorted Integer Array: ";
    printArray(intArray, intArraySize);

    double doubleArray[] = {3.14, 1.0, 2.71, 0.5, 2.0};
    int doubleArraySize = sizeof(doubleArray) / sizeof(double);

    std::cout << "Original Double Array: ";
    printArray(doubleArray, doubleArraySize);

    bubble_sort(doubleArray, doubleArraySize);

    std::cout << "Sorted Double Array: ";
    printArray(doubleArray, doubleArraySize);

    return 0;
}
