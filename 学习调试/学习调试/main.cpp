#include<iostream>
using namespace std;
int main()
{
	int i, sum = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "ǰ sum= "<<sum <<"   i=="<<i<< endl;
		sum += i;
		cout <<"�� sum= " <<sum << endl;
	}
	cout << "���  " << sum;
	system("pause");
	return 0;
}