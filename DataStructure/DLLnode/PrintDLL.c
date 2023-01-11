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

void PrintDLL()
{
	struct node* cur = head;

	while (cur != NULL)
	{
		printf("%d ", cur->a);
		cur = cur->next;
	}
}