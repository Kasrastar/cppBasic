#include <iostream>

long int Earning(long int, int); // function prototype

int main(){

    long int max_payment = 0, income = 0;
    int usersCount = 0, tax = 0;
    std::cout << "enter count of users: " ;
    std::cin >> usersCount;

    for (int i = 1; i <= usersCount; i++){ // loop on number of users
        
        std::cout << "enter income : ";
        std::cin >> income;

        if (400000 >= income) // findout tax stage using if-else statement
            tax = 0;
        else if (400000 < income && 500000 >= income)
            tax = 10; // percent of income
        else if (500000 < income && 700000 >= income)
            tax = 15;
        else 
            tax = 17;
        
        long int payment = Earning(income, tax); 
        if (max_payment < payment) // compare each payment with previous value to evaluate which is greater 
            max_payment = payment;
    }

    std::cout << "max payment: " << max_payment;    
}

long int Earning(long int income, int tax) { // calculate users actual income
    return income - (income * (tax / 100.0));
}
