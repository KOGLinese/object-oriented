#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node*next;
};
typedef struct node NODE;
struct node *create()
{
	NODE *head, *p1,*p2;

	int num;
	p2 = p1 = (NODE *)malloc(sizeof(NODE));
	//head = (NODE *)malloc(sizeof(NODE));//����ͷ�ڵ�
	head = NULL;
	if (p1 == NULL)
	{
		cout << "����ʧ��";
		return NULL;
	}
//	head->next = NULL;
	//tail = head;//��ʼʱβָ��ָ��ͷ�ڵ�
	while (1)
	{
		p1 = (NODE *)malloc(sizeof(NODE));
		cin >> num;
		if (num == -1)	break;
		p1->data = num;
		if (NULL == head)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1;	
	}
	p2->next = NULL;
	return head;//���ش��������ͷָ��
}
struct node  * pdelete(NODE *head)
{
	NODE *p1,*p2;
	p1 = head;
	while (p2->next != NULL)
	{
		p2 = p1;
		if ((p1->data) % 2 != 0)
		{
			if (head == p1)
			{
				head = p1->next;

			}
			else
			{
				p1 = p2 - >next;//qָ��Ҫɾ���Ľ���ָ����
			}
			cout << "ɾ���ڵ�" << endl;
		}
	}
	return head;
}
void print(NODE *head)//���
{
	NODE *p;
	p = head;
	if (NULL == head)
	{
		cout << "����Ϊ��";
		return;
	}
	else 
	{
		while (p != NULL)
		{
			printf("%d ", p->data);
			p = p->next;
		}
	}
}
int main()
{
	int repeat = 0;
	NODE *head;
	cin >> repeat;
	while (repeat--)
	{
		head = create();
		head=pdelete(head);
		print(head);
		cout << endl;
	}
	system("pause");
	return 0;
}