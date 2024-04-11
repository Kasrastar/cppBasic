#include <iostream>

int main(){
    
    double firstValue, secondValue;
    bool flag = true;
    try {
        do {
            std::cout << "enter two value :";
            std::cin >> firstValue >> secondValue ;
            if ( !firstValue && !secondValue )
                break;
            else if (!secondValue)
                throw(secondValue);

            std::cout << "a+b = " << firstValue + secondValue << std::endl        
                << "a*b = " << firstValue * secondValue << std::endl
                << "a/b = " << firstValue / secondValue << std::endl;
        } while (true);
    } catch(double value) {
        std::cout << "DivideByZero Exception: cannot divide by zero.";
    }
}