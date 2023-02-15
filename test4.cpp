#include <iostream>

// Function to reverse an array of integers
int* reverseArray(int* arr, int n) {
    // Create a new array with the same size as the input array
    int* revArr = new int[n];

    // Copy the elements of the input array into the new array in reverse order
    for (int i = 0; i < n; i++) {
        revArr[i] = arr[n-i-1];
    }

    // Return a pointer to the new array
    return revArr;
}


int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Original array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int* revArr = reverseArray(arr, n);

    std::cout << "Reversed array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << revArr[i] << " ";
    }
    std::cout << std::endl;

    // Free the dynamically allocated memory
    delete[] revArr;

    return 0;
}


