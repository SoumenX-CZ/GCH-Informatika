//Lekce 22 - Bubble sort
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 8;
    int arr[size] = {34, 7, 23, 32, 5, 62, 32, 14};

    // Print the array before sorting
    std::cout << "Array before sorting: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Bubble sort algorithm
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the array after sorting
    std::cout << "Array after sorting: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}