// first include the library

#include <iostream>
using namespace std;

//write the main function
int main() {
    cout<< "Hello everyone. \n" "This is my second programming. \n";
 
// declare the variable and assign their functions
int a(9);          // initial value = 9
char b = 'R';
short int c = -200;
bool d = true;
float e = 2.3;
double f = 8.314;     // Double precision floating point number.

//display of size of data type  
cout << "The size of integer is " << sizeof(a) << " & the value of integer is " << a << endl; //properties of integer
cout << "The size of character is " << sizeof(b) << " & the value of character is " << b << endl; //properties of character
cout << "The size of short int is " << sizeof(c) << " & the value of short integer is " << c << endl;       //properties of short integer
cout << "The size of bool is " << sizeof(d) << " & the boolean value is " << d << endl;       //properties of short boolean value
cout << "The size of float is " << sizeof(e) << " & the value of float is " << e << endl;       //properties of floating point number
cout << "The size of double is " << sizeof(f) << " & the value of double is " << f << endl;       //properties of double
return 0;

}
