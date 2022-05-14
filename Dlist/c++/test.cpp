#include "head.h"

// ˫���������
Node* ListFind(Node* pHead, Val x)
{
	Node* t = pHead->_next;
	while (t != pHead)
	{
		if (t->_data == x)
			return t;
		t = t->_next;
	}
	return NULL;
}

// ˫����������
void ListDestory(Node* pHead)
{
	Node* t = pHead ->_next;
	while (t != pHead)
	{
		Node* d = t;
		t = t->_next;
		ListErase(d);
	}
	free(pHead);

}

// ˫������β��
void ListPushBack(Node* pHead, Val x)
{
	ListInsert(pHead, x);
}


// ˫������βɾ
void ListPopBack(Node* pHead)
{
	ListErase(pHead->_prev);
}


// ˫������ͷɾ
void ListPopFront(Node* pHead)
{
	ListErase(pHead->_next);
}

// ˫������ͷ��
void ListPushFront(Node* pHead,Val x)
{
	ListInsert(pHead->_next, x);
}

// ˫�������ӡ
void ListPrint(Node* pHead)
{
	Node* t = pHead->_next;
	while (t != pHead)
	{
		printf("%d ", t->_data);
		t = t->_next;
	}
	printf("\n");
}


// ˫��������pos��ǰ����в���
void ListInsert(Node* pos, Val x)
{
	Node* p = pos->_prev;

	Node* newnode = (Node*)malloc(sizeof Node);
	newnode->_data = x;
	newnode->_next = pos;
	newnode->_prev = p;
	p->_next = newnode;
	pos->_prev = newnode;

}

// ˫������ɾ��posλ�õĽڵ�
void ListErase(Node* pos)
{

	if (pos->_next == pos) {
		printf("The list is null\n");
		return;
	}
	Node* p = pos->_prev;
	Node* c = pos->_next;
	p->_next = c;
	c->_prev = p;
	free(pos);
	pos = NULL;
}


Node* ListCreate()
{
	Node* res = (Node*)malloc(sizeof Node);
	if (!res) {
		printf("malloc error\n");
		return NULL;
	}
	res->_prev = res;
	res->_next = res;
	return res;
}

void test()
{
	Node* p = ListCreate();
	//ListPopFront(p);

	ListInsert(p, 1);
	ListInsert(p, 2);
	//ListPopFront(p);
	ListPushFront(p, 6);
	ListPrint(p);
	ListPushBack(p, 7);
	ListInsert(p, 3);
	ListInsert(p, 4);

	ListPrint(p);	
	ListDestory(p);


}

int main()
{
	test();
	return 0;
}