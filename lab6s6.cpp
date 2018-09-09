//mirror rhombus
#include<iostream>
using namespace std;
int main(){
	///declaretion
	int n;
	cout<<"Hello"<<endl;
	cout<<"Lets make a reverse rhombus star pattern."<<endl;
	//ask user for no of rows
	cout <<"please enter the number of rows you want to print."<<endl;
	cin>> n;

	//print star
	for (int i=1;i<=n ;i++ )//outer loop
	{
	//print space
	//no of space should increase down the row
	for (int j=2;j<=i ;j++ )
	{cout <<" ";
	}
	//print star of n no.
	for (int j=1;j<=n ;j++ )
	{cout <<"*";
	}
		cout <<endl;
	}
return 0;
}