/**Question 4:
Write a program that reads from the user two positive integers, and prints the result of
when we add, subtract multiply, divide, div and mod them.
Your program should interact with the user exactly as it shows in the following example:
Please enter two positive integers, separated by a space:
14 4
14 + 4 = 18
14 – 4 = 10
14 * 4 = 56
14 / 4 = 3.5
14 div 4 = 3
14 mod 4 = 2
*/

#include <iostream>
using std::cout;
using std::cin;

int main() {

    int input_a, input_b;

    int added, subtracted, multiplied, divved, modded; 

    double divided;

    cout<<"Please enter two positive integers, separated by a space: ";
    cin>>input_a>>input_b;

    added = input_a + input_b;
    subtracted = input_a - input_b;
    multiplied = input_a * input_b;
    divided = (double) input_a / input_b;
    divved = input_a / input_b;
    modded = input_a % input_b;

    cout<<input_a<<" + " <<input_b << " = " << added <<"\n";

    cout<<input_a<<" - " <<input_b << " = " << subtracted <<"\n";

    cout<<input_a<<" * " <<input_b << " = " << multiplied <<"\n";

    cout<<input_a<<" / " <<input_b << " = " << divided <<"\n";

    cout<<input_a<<" div " <<input_b << " = " << divved <<"\n";

    cout<<input_a<<" mod " <<input_b << " = " << modded <<"\n";



    return 0;
}