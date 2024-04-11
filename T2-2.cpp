#include <iostream>
#include <conio.h>

bool IsComplete(int);

int main(){
    int n;
    
    do {
        std::cout << "enter n: ";
        std::cin >> n;
    
        if (IsComplete(n))
            std::cout << n << " is complete number " << std::endl ;
        else
            std::cout << "not a perfect number " << std::endl ;
            
        std::cout << "to continue press 'y'." << std::endl ;
    } while (getch() == 'y');
}

bool IsComplete(int value) {
    int sum = 0 ; 
    for (int i = 1; i <= value / 2; i++)
        if ( 0 == value % i )
            sum += i;
    return ( sum == value ) ? true : false ;
}