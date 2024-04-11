#include <iostream>

int main(){
    
    double firstValue, secondValue;
    try { // try-catch statement
        do { 
            std::cout << "enter two value :";
            std::cin >> firstValue >> secondValue ;
            if ( !firstValue && !secondValue ) // true if both numbers be 0 
                break; // exit from loop
            else if (!secondValue)
                throw(secondValue); // exception handling for divide into zero logic

            std::cout << "a+b = " << firstValue + secondValue << std::endl        
                << "a*b = " << firstValue * secondValue << std::endl
                << "a/b = " << firstValue / secondValue << std::endl;
        } while (true);
    } catch(double value) { 
        std::cout << "DivideByZero Exception: cannot divide by zero.";
    }
}