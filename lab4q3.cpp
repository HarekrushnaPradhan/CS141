//library
#include<iostream>

using namespace std;

//main func

int main() {

cout << "welcome to convertion" <<endl;

//declaration
double x;
//ask fir temoerature in celsius
cout << "input the value of temperature in fahrenheit \n";
cin >> x;

//convert to celsius
double C;
C = (x-32)*5/9;
cout << "the temperature in celsius is " << C << endl;
 
return 0;


}
