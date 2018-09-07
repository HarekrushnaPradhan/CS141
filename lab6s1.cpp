#include<iostream>

using namespace std;

int main (){
	//declare
	int i,n;
	//print n star in n row
	//ask for n
	cout << "HELLO"<<endl;
	cout << "write number for row.\n";
	cin >> n;
	
	//print star n times
	// i must be <n
	for (i=1; i<= n;i++){
		for (int j =1; j<= n; j++)		
		{
			cout << "*";
		}	
	cout << endl;
						
}
	


return 0;
}
