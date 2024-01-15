#include <iostream>
//https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice
using std::cout;
using std::cin;

const int CENTS_PER_DOLLAR = 100;
const int PENNY = 1; 
const int NICKLE = 5;
const int DIME = 10;
const int QUARTER = 25; 
int main () {
    int pennies, nickles, dimes, quarters, dollars, cents;

    cout<<"Please enter the number of coins: \n";
    cout<<"# of quarters: ";
    cin>>quarters;
    cout<<"# of dimes: ";
    cin>>dimes; 
    cout<<"# of nickels: ";
    cin>>nickles;
    cout<<"# of pennies: "; 
    cin>>pennies; 

    int total = pennies * PENNY + nickles * NICKLE + dimes * DIME + quarters * QUARTER; 
    
    cents = total % CENTS_PER_DOLLAR; 
    dollars = total / CENTS_PER_DOLLAR; 
    
    cout<<"The total is "<<dollars<<" dollars and ";
    cout<<cents<<" cents.\n";

    return 0;

}