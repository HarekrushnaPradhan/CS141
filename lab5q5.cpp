#include<iostream>

using namespace std;

int main() {
	//declare
	int i,a,b;
	//ask for num
	cout << "hello here you can check the number is even or odd \n";
	cout << "plese enter the number "<<endl;
	cin >> i;
	//check whether num is odd or even
	a=i%2; 
	if (a==0)
	cout << i << " is even number."<<endl;
	else
	cout << i << " is odd number."<<endl;



return 0;
}
