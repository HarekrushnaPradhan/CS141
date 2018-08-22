//library
#include<iostream>
#include<string>

using namespace std;
int main() {
cout << "hello \nyou can put the number of days,and i will give what is the no of years ,weeks and days. \n";
 int a;
//ask days
cout << "what is the no. of days \n";
cin >> a;
//convert into years,weeks,days
int b , c, d, e , mod;
b = a/365;
mod = a%365;

c= mod/7;
d= mod%7;
cout << b << " year " << c << " week and " << d << " no of days"  <<endl;
 
return 0;

}
