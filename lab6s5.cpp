//star pattern	HOLLOW RHOMBUS STRA PATTERN
#include<iostream>
using namespace std;
int main (){
	//declare
	int n;
	cout << "hello"<<endl;
	cout << "we will make Hollow Rhombus star pattern now."<<endl;
	cout << "please enter the number of rows."<<endl;
	cin >> n;
	
	//print outer loop
	for (int i=1;i<=n ;i++ )
	{
		//print space
		for (int j=i;j<n ;j++ )
		{cout <<" ";
		}
		//print star
		for (int j=1;j<=n;j++ )
		{if (i==1||i==n ||j==1||j==n)//print star at 5 star at 1 & n row
			cout <<"*";//j is printing the out line.
		else//print space 
			cout<<" ";
		}
		cout<<endl;//exit from inner loop.
	}
return 0;
}