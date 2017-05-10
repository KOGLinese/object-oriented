#include <iostream>
using namespace std;

class Solution
{
public:
	/*
	* 判断以'@'结尾的字符串s是否为回文。
	* 如果是回文，返回true；不是回文，返回false。
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

/* 你的代码将被嵌在这里 */
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