//hollow mirrored rhombus star pattern
#include<iostream>
using namespace std;
int main(){
	///declare
	int n;
	//ask user for row
	cout <<"Hello"<<endl;
	cout<<"please enter the number of rows you want ot print as hollow mirror rhombus."<<endl;
	cin >>n;

	//print star
	for (int i =1;i<=n ;i++ )
	{	//print space
		for(int j=2;j<=i;j++)
		{cout<<" ";
		}
		//print n star at 1 amd n row
		for (int j=1;j<=n ;j++ )
		{if (j==1||j==n||i==1||i==n)
			cout<<"*";
		 else
			 cout<<" ";//print space in between 
		}
	cout <<endl;
	}
return 0;
}