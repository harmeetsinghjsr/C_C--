#include <iostream>

int main() {
    int n;

    // Ask the user for the number of terms
    std::cout << "Enter the number of terms for Fibonacci series: ";
    std::cin >> n;

    // Check if the number of terms is valid
    if (n <= 0) {
        std::cout << "The number of terms must be a positive integer." << std::endl;
        return 1;
    }

    // Initialize the first two terms
    long long int first = 0, second = 1;

    std::cout << "Fibonacci Series: ";

    // Handle the case when n is 1
    if (n == 1) {
        std::cout << first << std::endl;
    } else {
        // Print the first term
        std::cout << first << " ";

        // Print the second term
        std::cout << second << " ";

        // Generate and print the rest of the Fibonacci series
        for (int i = 2; i < n; ++i) {
            long long int next = first + second;
            std::cout << next << " ";
            first = second;
            second = next;
        }
        std::cout << std::endl;
    }

    return 0;
}