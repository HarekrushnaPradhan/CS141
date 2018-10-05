//include library
#include <iostream>
using namespace std;

// program with a function that takes two int parameters, finds the maximum, then returns the maximum.

int max(int a, int b)
{
	int maximum;
	if (a>b) { maximum = a;
			return maximum; }
	else {maximum = b;
			return maximum; }
}

//BY REFERENCE, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.

void Maximum (int a, int b, int &c) 
{
	if (a>b) { c = a; }
	else {c = b;}
}
//  ask the user for two numbers and tell the user the maximum. 
int main() {
	int a, b, c, maximum;
		cout << "Welcome to question 3" << endl;
		cout << "What is the 1st number: " << endl;
		cin >> a ;
		cout << "What is the 2nd number: " <<endl;
		cin >> b ;
	c = max(a,b) ;
		cout << "The maximum is " << c << endl;
//for void
	Maximum(a,b,maximum);
		cout << "The maximum is " << maximum << endl;
return 0;
}		