#define  _CRT_SECURE_NO_WARNINGS
#include"List.h"
SListNode* BuySListNode(SLTDateType x)// ��̬����һ���ڵ�
{
	SListNode* p = (SListNode*)malloc(sizeof(SListNode));
	p->data = x;
	p->next = NULL;
	return p;
}

void SListPushBack(SListNode** pplist, SLTDateType x)// ������β��
{
	assert(pplist);
	SListNode* p = BuySListNode(x);
	SListNode* pr = *pplist;
	while (pr->next)
	{
		pr = pr->next;
	}
	pr->next = p;
}
void SListPushFront(SListNode** pplist, SLTDateType x)// �������ͷ��
{
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		newnode->next = *pplist;
		*pplist = newnode;
	}
}