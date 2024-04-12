#include <iostream>

// there is two solution for do that.
// first: using variables to store second largest value
// second: using sorting algorithm

int main(){

    const int studentCount = 5;
    double gpa[studentCount] = {0};

    // find using solution 1
    int largest = gpa[0], secondLargest = gpa[0]; 

    for (int i = 0; i < studentCount; i++) {

        std::cout << "enter value for " << i+1 << " : ";
        std::cin >> gpa[i]; // fill array

        if (gpa[i] > largest) { // if find new great value
            secondLargest = largest; // store last one
            largest = gpa[i]; // save new great value
        } else if (gpa[i] > secondLargest && gpa[i] < largest) { // if greater than second andn less than largest
            secondLargest = gpa[i]; // store as second greatest value
        }
    }
      
    std::cout << "second largest value from solution 1 : " << secondLargest << std::endl ;

    // find using solution 2
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