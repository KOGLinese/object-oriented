#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
	
public:
	Point();
	~Point();
	void set(int init_x,int init_y);
	void cal(int x1, int y1);
	int get_x()
	{
		return x;
	}
	int get_y()
	{
		return y;
	}
};

Point::Point()
{
	x = 0;
	y = 0;
}
Point::~Point()
{
}
void Point::cal(int x1, int y1)
{
	x += x1;
	y += y1;
}
void Point::set(int init_x,int init_y)
{
	x = init_x;
	y = init_y;
}
int main()
{
	Point m;
	int a, b;
	int a1, b1;
	cin >> a >> b>>a1>>b1;
	m.set(a, b);
	m.cal(a1, b1);
	cout << m.get_x()<<" "<<m.get_y();
	system("pause");
	return 0;
}