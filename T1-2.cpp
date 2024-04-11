#include <iostream>

int main(){

    const int row = 4 ;
    const int column = 5 ;

    std::cout << "Pattern 1: " << std::endl ;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++ )
            std::cout << "$" ;
        std::cout << std::endl;
    }
    std::cout << std::endl ;
    std::cout << "Pattern 2: " << std::endl ;
    for (int i = 0; i <= row; i++){
        for (int j = 0; j <= i; j++)
            std::cout << "*" ;
        std::cout << std::endl;
    }

}