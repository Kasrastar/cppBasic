#include <iostream>
using namespace std;

int Factorial(int); // prototype

int main(){
    int n ;
    double sum = 0 ;
    
    std::cout << "enter n : ";
    std::cin >> n;

    for (int i=1; i <= n; i++)
        sum += static_cast<double>(1.0) / Factorial(i);
    std::cout << "sum : " << sum << std::endl;
}

int Factorial(int value) {
    if ( 1 == value )
        return 1;
    else
        return value * Factorial(value-1);
}