#include<iostream>
using namespace std;
class Date {
private:
	int year;
	int month;
	int day;
	int isleap();
public:
	void set(int y, int m, int d);
	int cal();
};
void Date::set(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
int Date::isleap()
{
	if (year % 4 == 0) return 1;
	else return 0;
}
int Date::cal()
{
	int m[2][12] = { 31,28,31,30,31,30,31,31,30,31,30,31,
				  31,29,31,30,31,30,31,31,30,31,30,31 };
	int sum = 0;
		for (int i = 0; i < month-1; i++)
		{
			sum += m[isleap()][i];
		}
		sum += day;
		return sum;

}
int main()
{
	Date k;
	int y1, m1, d1;
	cin >> y1 >> m1 >> d1;
	k.set(y1, m1, d1);
	cout << k.cal();
	system("pause");
	return 0;
}