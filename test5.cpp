#include <iostream>

// Function to sort an array of integers in ascending order
void sortArray(int* arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to calculate the average of an array of integers
double average(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return double(sum) / double(n);
}

int main() {
    int n;

    // Ask the user for the number of test scores
    std::cout << "How many test scores do you want to enter? ";
    std::cin >> n;

    // Allocate an array for the test scores
    int* scores = new int[n];

    // Ask the user to enter the test scores
    std::cout << "Enter " << n << " test scores:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> *(scores+i); // Use pointer notation to access array elements
    }

    // Sort the test scores
    sortArray(scores, n);

    // Calculate the average test score
    double avg = average(scores, n);

    // Print the sorted test scores and the average
    std::cout << "Sorted test scores:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << *(scores+i) << " "; // Use pointer notation to access array elements
    }
    std::cout << std::endl;
    std::cout << "Average test score: " << avg << std::endl;

    // Free the dynamically allocated memory
    delete[] scores;

    return 0;
}

