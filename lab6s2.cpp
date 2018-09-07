// hollow star pattern
#include<iostream>

using namespace std;

int main() {
	//declare
	int i,n,j;
	//ask for number
	//print n nunmber of star with some hollow betwen
 	cout << "HELLO LETS MAKE A HOLLOW STAR PATTERN" <<endl;
	cout << "please write the number of rows.\n";
	cin >> n ;
	
	//print n star
	for (i=1; i<=n; i++) 
	{
		for (j=1; j<=n; j++)
		{
			//if(1st or last row print n star )
			//and we need 1st and nth column to print n star
	        	if (i==1 || i == n ||j==1 ||j==n)
			//else print space between 2 to n-1 row`1,
	    		cout << "*";
			else cout<<" ";	
		}
	cout << endl;
	}



return 0;
}
