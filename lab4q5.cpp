//library
#include<iostream>

using namespace std;

int main() {
double x,y,z;

//ask for two angle
cout << "please input first angle of a tringle " <<endl;
cin >> x;
cout << "please input the second angle " << endl;
cin >> y;
//find the third angle
z=180-(x+y);
cout << "the third angle is " << z << " degree" <<endl;
return 0;
}
