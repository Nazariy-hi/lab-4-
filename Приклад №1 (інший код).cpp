#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
int main ()
{
	srand( time(0) ); // (��� ����� ��� ���������� ��� ��������)
	int  b, p, s;
	float    
	a = cos ( rand () % 10);   // ����� �������������� � ������ �������	a = rand() % 10;
	b = rand() % 15; // ������� ������� �������
	p = (a + b) * 2;
	s = a * b;
	cout <<"a = " <<a<<endl;
	cout <<"b = "<<b<<endl;
	cout<<"s = "<<s<<endl;
	cout <<"p = " << p<<endl;
	
	return 0;
}


