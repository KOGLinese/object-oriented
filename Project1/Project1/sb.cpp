#include<iostream>
#define pi 3.14
using namespace std;
double scanf()
{
	double r = 0;
	cin >> r;
	return r;
}
double cal(double x)
{
	double area = 0;
	area = pi*x*x;
	return area;
}
void print(double y)
{
	cout << y << endl;
}