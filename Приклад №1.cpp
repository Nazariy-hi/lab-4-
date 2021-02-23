#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
	int a, b, p, s;
	a = rand() % 10;
	b = rand() % 15;
	p = (a + b) * 2;
	s = a * b;
	cout <<"a = " <<a<<endl;
	cout <<"b = "<<b<<endl;
	cout<<"s = "<<s<<endl;
	cout <<"p = " << p<<endl;
	
	return 0;
}


