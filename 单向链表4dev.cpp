#include<stdio.h>
#include<stdlib.h>
struct node
{
	int num;
	struct node * next;
};
typedef struct node A;
struct node * create()
{
	A *head,*p1,*p2;
	int num;
	head=(A *)malloc(sizeof(A));
	if(head==NULL)
	{
		printf("创建失败");
		return NULL; 
	}
	head->next=NULL;
	p2=head;
	while(1)
	{
		scanf("%d",&num);
		if(num<0) break;
		p1=(A *)malloc(sizeof(A));
		if(p1==NULL)
		{
			printf("创建失败");
			return NULL;
		}
		p1->num=num;
		p1->next=NULL;
		p2->next=p1;
		p2=p1;
	}
	return head;
}
void print(A *head)
{
	A* p;
	p=head->next;
	while(p!=NULL)
	{
		printf("%d",p->num);
		if(p->next!=NULL) printf(" ");
		p=p->next;
	}
}
void InsertAfter(A * p,A * nextp)
{
	nextp->next=p->next;
	p->next=nextp;
}
A * DeleteAfter(A*p)
{
	A * t =p -> next;
	if(t!=NULL)
	{
		p->next=t->next;
	}
	return t;
}
void Revert(A *head)
{
	A * p =head;
	A * del;
	if(head->next!=NULL)
		p=head -> next;
	while(p->next!=NULL)
	{
		del = DeleteAfter(p);
		InsertAfter(head,del);
	}
}
int main()
{
	A * head;
	head=create();
	Revert(head);
	print(head);
	return 0;
}























