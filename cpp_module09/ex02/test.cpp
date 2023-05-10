#include <iostream>
#include <ctime>

void myFunction() {
    // Code to be measured goes here
}

int main() {
    clock_t start = clock();  // Get the start time
    std::cout << "start : " << start << '\n';
    myFunction();  // Call the function to be measured
    clock_t end = clock();  // Get the end time
    std::cout << "end : " << end << '\n';

    double duration_ms = (end - start) * 1000000.0 / CLOCKS_PER_SEC;  // Calculate the duration in milliseconds
    std::cout << "Execution time: " << duration_ms << " us" << std::endl;

    return 0;
}
