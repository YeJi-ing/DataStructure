#include <stdio.h>
#include<string.h>
#include <stdlib.h>

struct node
{
	int a;
	struct node* next;
	struct node* prev;
};

struct node* head = 0;

struct node* addToDLL(int x)
{
	//새로운 노드를 생성
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->a = x;
	new_node->next = 0;
	new_node->prev = 0;

	if (head == 0)
	{
		head = new_node;
		return;
	}
	else
	{
		struct node* cur = head;

		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		//cur은 마지막 노드를 가리키고 있다.
		cur->next = new_node;
		new_node->prev = cur;
		return new_node;
	}

}

