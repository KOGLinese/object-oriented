#include<iostream>
using namespace std;
int main()
{
	int i, sum = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "前 sum= "<<sum <<"   i=="<<i<< endl;
		sum += i;
		cout <<"后 sum= " <<sum << endl;
	}
	cout << "最后  " << sum;
	system("pause");
	return 0;
}