#include<iostream>
using namespace std;

int main() {
	//declare
	int z, y,x ;
	//ask for numb
	
	cout << "please enter three numbers" <<endl; 
	cin >> z >> y >> x;	
	//find the max
	 if (z > y && z> x)
	 cout << z << " is maximum";
	 else if (x > y&& x> z)
		cout << x << " is maximum";
	 else 
	 cout << y << " is maximum";
	

	return 0;
	}
