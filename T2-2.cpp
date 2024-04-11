#include <iostream>
#include <conio.h> // to get character from user ( getch() function )

bool IsPerfect(int); // function prototype

int main(){
    int n;
    
    do {
        std::cout << "enter n: ";
        std::cin >> n;
    
        if (IsPerfect(n))
            std::cout << n << " is complete number " << std::endl ;
        else
            std::cout << "not a perfect number " << std::endl ;

        std::cout << "to continue press 'y'." << std::endl ;
    } while (getch() == 'y');
}

bool IsPerfect(int value) { // check perfect numbers
    int sum = 0 ; 
    for (int i = 1; i <= value / 2; i++)
        if ( 0 == value % i ) // find divisor
            sum += i;
    return ( sum == value ) ? true : false ; // single line if-else statement 
}