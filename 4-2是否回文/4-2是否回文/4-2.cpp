#include <iostream>
using namespace std;

class Solution
{
public:
	/*
	* �ж���'@'��β���ַ���s�Ƿ�Ϊ���ġ�
	* ����ǻ��ģ�����true�����ǻ��ģ�����false��
	*/
	bool isPalindrome(char *s);
};
int main()
{
	Solution obj;
	char ss[100];
	cin >> ss;
	if (obj.isPalindrome(ss)) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	system("pause");
	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
bool Solution::isPalindrome(char *s)
{
	int len,i;
	for (i = 0;; i++)
	{
		if (s[i] == '@') break;
	}
	len = i;
	//cout << len << endl;
	for (i = 0; i < (len) / 2; i++)
	{
	//	cout << s[i] << " " << s[len - 1 - i] << endl;
		if (s[i] != s[len - 1 - i]) return false;
	}
	return true;
}