#include <iostream>

double median(int* arr, int n) {
    // Sort the array using bubble sort
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (*(arr+j) > *(arr+j+1)) {
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }

    // Compute the median
    if (n % 2 == 0) {
        return (double(*(arr+n/2-1)) + double(*(arr+n/2))) / 2.0;
    } else {
        return double(*(arr+n/2));
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    double m = median(arr, n);
    std::cout << "The median of the array is: " << m << std::endl;
    return 0;
}

