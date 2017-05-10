/*#include<stdio.h>
#include<stdlib.h>
int a[100001][3];
struct Node
{
	int add;
	int data;
	int nextadd;
	struct Node * next;
};
typedef struct Node node;
struct Node * create(int first, int n)
{
	int i;

	node *head, *p1, *p2;
	head = (node *)malloc(sizeof(node));
	if (head == NULL)
	{
		printf("创建失败");
		return NULL;
	}
	head->next = NULL;
	p2 = head;//尾节点 
	printf("将要进入循环\n");
	while (1)
	{
		p1 = (node *)malloc(sizeof(node));
		if (p1 = NULL)
		{
			printf("创建失败");
			return NULL;
		}
		printf("第一个赋值 %d\n", first);
		p1->add = first;
		printf("赋值结束\n开始查找\n");
		for (i = 0; i<n; i++)
		{

			if (first == a[i][0])
			{
				first = a[i][2];
				break;
			}
		}
		printf("查找结束\n");
		p1->data = a[i][1];
		p1->nextadd = a[i][2];
		if (p1->nextadd == -1) break;
		p1->next = NULL;
		p2->next = p1;
		p2 = p1;
	}
	p1->next = NULL;
	p2->next = p1;
	p2 = p1;
}
void print(node * head)
{
	node * p;
	p = head;
	for (p = head->next; p != NULL; p = p->next)
	{
		printf("%05d %d %05d\n", p->add, p->data, p->nextadd);

	}
}
int main()
{
	node * head;
	int first = 0;
	int n;
	scanf("%d %d", &first, &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
	}
	head = create(first, n);
	print(head);
	return 0;

}*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
string a[100001][3];
struct Node
{
	string add;
	string data;
	string nextadd;
	struct Node * next;
};
typedef struct Node node;
struct Node * create(string first, int n)
{
	int i;

	node *head, *p1, *p2;
	head = (node *)malloc(sizeof(node));
	if (head == NULL)
	{
		printf("创建失败");
		return NULL;
	}
	head->next = NULL;
	p2 = head;//尾节点 

	printf("将要进入循环\n");
	while (1)
	{
		p1 = (node *)malloc(sizeof(node));
		if (p1 = NULL)
		{
			printf("创建失败");
			return NULL;
		}
		p1 = p2;
		printf("第一个赋值\n ");
		p1->add = a[i][0];
		printf("赋值结束\n开始查找\n");
		for (i = 0; i<n; i++)
		{

			if (first == a[i][0])
			{
				first = a[i][2];
				break;
			}
		}
		printf("查找结束\n");
		p1->data = a[i][1];
		p1->nextadd = a[i][2];
		if (p1->nextadd == "-1") break;
		p1->next = NULL;
		p2->next = p1;
		p2 = p1;
	}
	p1->next = NULL;
	p2->next = p1;
	p2 = p1;
}
void print(node * head)
{
	node * p;
	p = head;
	for (p = head->next; p != NULL; p = p->next)
	{
		cout << p->add << " " << p->data << " " << p->nextadd << endl;

	}
}
int main()
{
	node * head;
	string first;
	int n;
	cin >> first >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> a[i][0] >> a[i][1] >> a[i][2];
	}
	head = create(first, n);
	print(head);
	return 0;

}