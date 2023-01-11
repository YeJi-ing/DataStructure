#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
	int a;
	struct node* next;
	struct node* prev;
};

struct node* head = 0;

//Ư�� ����(where) �ڿ� � ����(what) �߰�

void InsertToDLL(struct node* head, int where, int what)
{
	//where �ڿ� what �߰�
	struct node* cur = head;

	while (1)
	{
		if (cur == NULL)
		{
			//���� ���� ��
			return;
		}
		if (cur->a != where)
		{
			cur = cur->next;
		}
		else { break; }
	}

	//cur�� �������� ��ġ ����Ű�� ����
	
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->a = what;
	new_node->next = new_node->prev = 0;

	new_node->next = cur->next;
	new_node->prev = cur;
	cur->next = new_node;
	if (new_node->next != 0)
	{
		new_node->next->prev = new_node;
	}

}
