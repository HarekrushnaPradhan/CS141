#include<iostream>
using namespace std;
int main(){
	int n,j;
	//ask user for no of rows
	cout << "hello"<<endl;
	cout << "We will print rhombus star pattern now."<<endl;
	cout << "plese enter the the number of row you want to print."<<endl;
	cin >> n;
	for(int i =1; i<=n; i++)//this is ROW
	{
		//print space
		
		for (int j=i; j<n ;j++ )//j++ means it will go from i to 5 by adding 1 at a time.
		{cout <<" ";
		}
		//print star
		for(int j=1;j<=n;j++)
		{cout <<"*";
		}
		cout << endl;//endl means whene one row will over it will take it to the next row.
	}
	return 0;
}