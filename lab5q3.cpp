#include<iostream>

using namespace std;

int main() {
	//declare
	int x;
	//askn for integer
	cout << "please enter a integer to know if it is positive or negative"<<endl;
	cin >> x;
	//find and display it is +,- or 0
	if (x>0)
	cout << "input number is positive";
	else if (x<0)
	cout << "input number is negative";
	else
	cout << "it is 0";
return 0;
}
