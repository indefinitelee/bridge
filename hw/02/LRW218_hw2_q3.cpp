/*Question 3:
Suppose John and Bill worked for some time and we want to calculate the total time both
of them worked. Write a program that reads number of days, hours, minutes each of them
worked, and prints the total time both of them worked together as days, hours, minutes.
Hint: Try to adapt the elementary method for addition of numbers to this use.
Your program should interact with the user exactly as it shows in the following example:
Please enter the number of days John has worked: 2
Please enter the number of hours John has worked: 12
Please enter the number of minutes John has worked: 15
Please enter the number of days Bill has worked: 3
Please enter the number of hours Bill has worked: 15
Please enter the number of minutes Bill has worked: 20
The total time both of them worked together is: 6 days, 3 hours and 35 minutes.*/

#include <iostream>
//https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice
using std::cout;
using std::cin;

const int MINUTES_IN_HOUR = 60; 
const int HOURS_IN_DAY = 24;

int main () {
    int j_days, j_hours, j_minutes, b_days, b_hours, b_minutes, total_days, total_hours, total_minutes;
    //john
    cout<<"Please enter the number of days John has worked: ";
    cin>>j_days;
    int j_days_in_minutes = j_days * MINUTES_IN_HOUR * HOURS_IN_DAY;
    cout<<"Please enter the number of hours John has worked: ";
    cin>>j_hours;
    int j_hours_in_minutes = j_hours * MINUTES_IN_HOUR;
    cout<<"Please enter the number of minutes John has worked: ";
    cin>>j_minutes;
    //bill
    cout<<"Please enter the number of days Bill has worked: ";
    cin>>b_days;
    int b_days_in_minutes = b_days * MINUTES_IN_HOUR * HOURS_IN_DAY;
    cout<<"Please enter the number of hours Bill has worked: ";
    cin>>b_hours;
    int b_hours_in_minutes = b_hours * MINUTES_IN_HOUR;
    cout<<"Please enter the number of minutes Bill has worked: ";
    cin>>b_minutes;
    
    // all values in lowest common unit
    total_minutes = j_days_in_minutes + j_hours_in_minutes + j_minutes + b_days_in_minutes + b_hours_in_minutes + b_minutes;
    

    total_days = total_minutes / (MINUTES_IN_HOUR * HOURS_IN_DAY); 

    total_minutes = total_minutes - (total_days * MINUTES_IN_HOUR * HOURS_IN_DAY);

    total_hours = total_minutes / MINUTES_IN_HOUR; 

    total_minutes = total_minutes - (total_hours * MINUTES_IN_HOUR);

    cout<<"The total time both of them worked together is: " << total_days << " days, "<< total_hours <<" hours, and "<<total_minutes<<" minutes.\n";

    return 0;

}