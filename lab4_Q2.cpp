//library
#include<iostream>

using namespace std;

//main func

int main() {

cout << "welcome to convertion" <<endl;

//declaration
double x;
//ask fir temoerature in celsius
cout << "input the value of temperature in celcius \n";
cin >> x;

//convert to fahrenheit
double F;
F = x*9/5+32;
cout << "the temperature in farenhite is " << F << endl;
 
return 0;


}
