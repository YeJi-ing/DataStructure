//DLL에서 which 지우기
void del_FromDLL(int which)
{
	struct node* cur = head;

	while (1)
	{
		if (cur == NULL)
		{
			//값이 없을 때
			return;
		}
		if (cur->a != which)
		{
			cur = cur->next;
		}
		else { break; }
	}
	//cur은 지울 노드 가리키고 있음
	if (cur == head)
	{
		head = head->next;
		if (head->next != 0)
		{
			head->next->prev = 0; //가리키는 것이 맨앞이니까 0으로
		}
		free(cur);
	}
	else
	{
		cur->prev->next = cur->next;
		if (cur->next != 0)
		{
			//만약 cur->next가 null인데 null의 prev찾으라고 하면 오류나기 때문
			cur->next->prev = cur->prev;
		}
		free(cur); //이거 지워도 값은 똑같이 나옴
	}
}