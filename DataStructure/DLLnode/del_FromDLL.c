//DLL���� which �����
void del_FromDLL(int which)
{
	struct node* cur = head;

	while (1)
	{
		if (cur == NULL)
		{
			//���� ���� ��
			return;
		}
		if (cur->a != which)
		{
			cur = cur->next;
		}
		else { break; }
	}
	//cur�� ���� ��� ����Ű�� ����
	if (cur == head)
	{
		head = head->next;
		if (head->next != 0)
		{
			head->next->prev = 0; //����Ű�� ���� �Ǿ��̴ϱ� 0����
		}
		free(cur);
	}
	else
	{
		cur->prev->next = cur->next;
		if (cur->next != 0)
		{
			//���� cur->next�� null�ε� null�� prevã����� �ϸ� �������� ����
			cur->next->prev = cur->prev;
		}
		free(cur); //�̰� ������ ���� �Ȱ��� ����
	}
}