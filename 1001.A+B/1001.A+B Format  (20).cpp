#include<stdio.h>
#include<math.h>
int main()
{
	void printf_c(int n,int x);
	int a,b,c,k,i;
	scanf("%d %d",&a,&b);
	c=a+b;
	for(i=6;i>=0;i--)
	{
		k=pow(10,i);
		if(c/k!=0) break;
	}
	if(c<0) printf("-");
	c=abs(c);
	if(i+1>=4)
	printf_c(i,c);
	else printf("%d",c);
 	return 0;
}
void printf_c(int n,int x)
{
	int k,i,m;
	for(i=n;i>=0;i--)
	{
		k=pow(10,i);
		m=x/k%10;
		if(n==6&&i==5||i==2)
		printf(",");
		else if(i==2)
		printf(",");
		printf("%d",m);
	}	
}

