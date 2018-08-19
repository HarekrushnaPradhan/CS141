// first include the library

#include <iostream>
using namespace std;

//write the main function
int main() {
// declare variable
int x(8),y(4),sum,subtraction,multiplication,division,mod;
//process
sum = x+y;                         //to find sum
subtraction = x-y;                 //to find sub
multiplication = x*y;              //to find product
division = x/y;                    //to find the division
mod = x%y;                         //to find mod

// Display of result
cout << "sum of x & y is " << sum << endl;
cout << "sub of x & y is " << subtraction << endl;
cout << "product of x & y is " << multiplication << endl;
cout << "divison of x & y is " << division << endl;
cout << "mod of x & y is " << mod << endl;
return 0;
}
