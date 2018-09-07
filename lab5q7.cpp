#include<iostream>

using namespace std;

int main() {	
	char charvar;
	//Ask user for character
	cout << "Enter any character" << endl ; 
	cin >> charvar ; 
	//assigning values 
	if ( charvar>='a' && charvar<='z' || charvar>= 'A' && charvar<='Z' ) 
	//validating the conditiion
	{ cout << "The character is an alphabet" << endl ; }  
	else 
	{ cout << "The character is not an alphabet " << endl; }
return 0;
}

