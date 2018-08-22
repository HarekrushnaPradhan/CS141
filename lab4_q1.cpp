//first include the library

#include<iostream>
#include<string>

using namespace std;

//write the main function
int main() {
//declaration
string mystr;
int x;
cout << "welcome to the convertion of unit. \n"; 
//ask the user to enter length in cm
cout << "please enter the value of length. " << endl;
cin >> x ;
cout << "the value you enter is " << x << endl;

//convert it into meter & kilometer

float result;
 result = x * 0.01;
cout << "the length in meter is " << result << endl;
// in kilo
double zx;
 zx = result / 1000;
cout << "the length in kilometer is " << zx <<endl;
return 0;
}
