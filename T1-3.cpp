#include <iostream>
#include <cmath>

int main(){
    
    int a, b, c;
    std::cout << "enter coefficients (ex: ax^2 + bx + c ) = " ;
    std::cin >> a >> b >> c;

    int delta = (b * b) - (4 * (a * c)) ;

    if ( 0 < delta ) {
        std::cout << "x1 : " << ((-1 * b) + sqrt(delta) / (2 * a))
            << std::endl << "x2 : " << std::endl ;
    } else if ( 0 == delta ) {
        std::cout << "x: " << ((-1 * b) / (2 * a));
    } else {
        std::cout << "no answer " ;
    }

    return 0;
}   