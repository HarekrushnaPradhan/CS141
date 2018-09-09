//hollow sqaure pattern with two diagonal
#include<iostream>
using namespace std;
int main(){
	//declare
	int n,i;
	//ask the user for number of * he/she wnat to print
	cout <<"hello"<<endl;
	cout << "lets make star pattern."<<endl;
	cout << "what is the number of row for the square ?"<<endl;
	cin >> n;

	//lets make pattern
	for (i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
		//square means all boundry have *
			if (i==1 || i==n||j==1||j==n )
				cout << "*";
			//the star are at place where no of row and column is =
			//& where col=n-row+1
			else if(i==j||j==(n-i+1))
				cout<<"*";
			//otheer are empty means space
			else
				cout<<" ";
		}
		cout <<endl;
	}
	return 0;
	}
	
	