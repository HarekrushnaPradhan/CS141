#include<iostream>

using namespace std;

int main() {
	//declare
	
	int i,a,b;
	int x(5),y(11);
	//ask for num
	cout << "please enter a number to know if its divisible by 5 and 11 or not"<<endl;
	cin >> i;
	//check divisibility by 5&11 or not
	a= i% x;
	b= i%y;
	if (a==0 && b==0)
	cout << i <<" is divisible by both 5 and 11";
		else if (a==0)
		cout << i << " is divisible by 5 ";
		else if (b==0)
		cout << i << " is divisible by 11";
		else 
		cout << i << " is not divisible by both 5 and 11";

return 0;
}
