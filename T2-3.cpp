#include <iostream>

// there is two solution for do that.
// first: using sorting algorithm
// second: using variables to store second largest value

int main(){

    const int studentCount = 5;
    double gpa[studentCount] = {0};

    int largest = gpa[0], secondLargest = gpa[0];

    for (int i = 0; i < studentCount; i++) {
        std::cout << "enter value for " << i+1 << " : ";
        std::cin >> gpa[i];
        if (gpa[i] > largest) {
            secondLargest = largest;
            largest = gpa[i];
        } else if (gpa[i] > secondLargest && gpa[i] < largest) {
            secondLargest = gpa[i];
        }
    }
      
    std::cout << "second largest value from solution 1 : " << secondLargest << std::endl ;

    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - i - 1; j++) {
            if (gpa[j] > gpa[j + 1]) {
                // Swap gpa[j] and gpa[j + 1]
                int temp = gpa[j];
                gpa[j] = gpa[j + 1];
                gpa[j + 1] = temp;
            }
        }
    }

    std::cout << "second largest value from solution 2 : " << gpa[studentCount - 2] << std::endl ;
}