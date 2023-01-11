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

//특정 숫자(where) 뒤에 어떤 숫자(what) 추가

void InsertToDLL(struct node* head, int where, int what)
{
	//where 뒤에 what 추가
	struct node* cur = head;

	while (1)
	{
		if (cur == NULL)
		{
			//값이 없을 때
			return;
		}
		if (cur->a != where)
		{
			cur = cur->next;
		}
		else { break; }
	}

	//cur은 끼워넣을 위치 가리키고 있음
	
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
