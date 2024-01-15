/*Question 2:
Write a program that asks the user to enter an amount of money in the format of dollars
and remaining cents. The program should calculate and print the minimum number of coins
(quarters, dimes, nickels and pennies) that are equivalent to the given amount.
Hint: In order to find the minimum number of coins, first find the maximum number of
quarters that fit in the given amount of money, then find the maximum number of dimes
that fit in the remaining amount, and so on.
Your program should interact with the user exactly as it shows in the following example:
Please enter your amount in the format of dollars and cents separated by a space:
4 37
4 dollars and 37 cents are:
17 quarters, 1 dimes, 0 nickels and 2 pennies
*/
#include <iostream>
#include<list>
using std::cout;
using std::cin;

const int CENTS_PER_DOLLAR = 100;
const int PENNY = 1; 
const int NICKEL = 5;
const int DIME = 10;
const int QUARTER = 25; 

int main(){
    int dollars, cents, quarters, dimes, nickels, pennies, total;
    cout<<"Please enter your amount in the format of dollars and cents separated by a space:\n";
    cin>>dollars>>cents;
    total = dollars * CENTS_PER_DOLLAR + cents;
    
    quarters = total / QUARTER; 
    total = total - quarters * QUARTER; 

    dimes = total / DIME; 
    total = total - dimes * DIME; 

    nickels = total / NICKEL; 
    total = total - nickels * NICKEL; 

    pennies = total / PENNY; 
    total = total - pennies * PENNY; 

    
    cout<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels, and "<<pennies<<" pennies.\n";
    return 0; 
}