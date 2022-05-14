#include "head.h"

// 双向链表查找
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

// 双向链表销毁
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

// 双向链表尾插
void ListPushBack(Node* pHead, Val x)
{
	ListInsert(pHead, x);
}


// 双向链表尾删
void ListPopBack(Node* pHead)
{
	ListErase(pHead->_prev);
}


// 双向链表头删
void ListPopFront(Node* pHead)
{
	ListErase(pHead->_next);
}

// 双向链表头插
void ListPushFront(Node* pHead,Val x)
{
	ListInsert(pHead->_next, x);
}

// 双向链表打印
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


// 双向链表在pos的前面进行插入
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

// 双向链表删除pos位置的节点
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