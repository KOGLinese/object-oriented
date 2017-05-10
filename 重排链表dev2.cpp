#include<stdio.h>
#include<stdlib.h>
int n,first,i;
struct Node{
	int add;
	int data;
	int nadd;
	struct Node * next;
};
int a[100001][4];
typedef struct Node N;
struct Node * create(int k)//创建 
{
	N *head,*p1,*p2;
	head=(N *)malloc(sizeof(N));
	if(head==NULL)
	{
		printf("创建失败");
		return NULL;
	}
	head->next=NULL;
	p2=head;
	while(1)
	{
		p1=(N *)malloc(sizeof(N));
		if(p1==NULL)
		{
			printf("创建失败");
			return NULL;
		}
		for(i=0;i<n;i++)
		{
			if(k==a[i][0])
			{ 
				p1->add=a[i][0];
				p1->data=a[i][1];
				p1->nadd=a[i][2];
				k=a[i][2];
				break;
			}
		}
		p1->next=NULL;
		p2->next=p1;
		p2=p1;
		if(p1->nadd ==-1) break;
	}
	return head;
}
void print(N * head)//输出 
{
	N * p;
	p=head;
	if(head->next!=NULL)
	{
		for(p=head->next;p->next!=NULL;p=p->next)
		{
			printf("%05d %d %05d\n",p->add,p->data,p->nadd);
		}
		printf("%05d %d %d",p->add,p->data,p->nadd);
	}
	else printf("链表为空");
}
void InsertAfter(N * p,N * nextp)//插入 
{
	nextp->next=p->next;
	p->next=nextp;
}
N * DeleteAfter(N*p)//删除 
{
	N * t =p -> next;
	if(t!=NULL)
	{
		p->next=t->next;
	}
	return t;
}
void Revert(N *head)//转置 
{
	N * p =head;
	N * del;
	if(head->next!=NULL)
		p=head -> next;
	while(p->next!=NULL)
	{
		del = DeleteAfter(p);
		InsertAfter(head,del);
	}
}
N * change(N *head1,N * head2)//合并 
{
	N * head,*p1,*p2,*p;
	int i;
	p=head2;
	p1=head1->next;
	p2=head2->next;
	head=p;
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			p->next=p2;
			p2=p2->next;
			p->next->next=NULL;
		}
		else 
		{
			p->next=p1;
			p1=p1->next;
			p->next->next=NULL;
		}
		p=p->next;
	}
	return head;
}
void complete(N * head)//修改下一个地址 
{
	N * p,*p1;
	p=head;
	p1=p;
	int m=n;
	while(n--)
	{
		p1=p->next;
		p->nadd=p1->add;
		p=p->next;
	}
	p->nadd=-1;
}
int main()
{
	N * head,*head1,*head2;
	scanf("%d %d",&first,&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
	}
	head1=create(first);
	head2=create(first);
	Revert(head2);
	head=change(head1,head2);
	complete(head);
	print(head);
	return 0;
}
