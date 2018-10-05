//function
#include <iostream>
using namespace std;

//Write a program with a function that takes two int parameters, adds them together, then returns the sum.
int addition (int a, int b)
{
	int r = a + b;
	return (r);
}

//BY REFERENCE the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that
void duplicate (int a, int b, int &c) 
{
	c = a + b;
}
//The program should ask the user for two numbers and tell the user the sum.

int main () {
	int a, b, c, sum ;
		cout << "HELLO. Welcome to question no. 2" <<endl ;
		cout << "Please enter the two number "<<endl ;
		cin >> a;
		cout << "Enter no. 2: "<<endl ;
		cin >> b;
	c = addition (a,b);
		cout << "The sum is "<< c <<endl;
	duplicate (a,b, sum);
		cout << "The sum is " << sum <<endl;

return 0;
}