#include<iostream>

using namespace std;

int main() {
	//declare
	int i,n;
	//ask user for number
	cout << "enter the starting number from where you want to countdown to 0" <<endl;
	cin >> n;
	//countdown till 0
	while (n>=0){
	cout << n<<endl;
	--n;}
	
	cout << "done !!!";


return 0;
}
