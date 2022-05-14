#include <stdio.h>
#include <stdlib.h>

typedef int Val;
typedef struct ListNode
{
	Val _data;
	struct ListNode* _next;
	struct ListNode* _prev;
}Node;

// 创建返回链表的头结点.
Node* ListCreate();

// 双向链表销毁
void ListDestory(Node* pHead);

// 双向链表打印
void ListPrint(Node* pHead);

// 双向链表尾插
void ListPushBack(Node* pHead, Val x);

// 双向链表尾删
void ListPopBack(Node* pHead);

// 双向链表头插
void ListPushFront(Node* pHead, Val x);

// 双向链表头删
void ListPopFront(Node* pHead);

// 双向链表查找
Node* ListFind(Node* pHead, Val x);

// 双向链表在pos的前面进行插入
void ListInsert(Node* pos, Val x);

// 双向链表删除pos位置的节点
void ListErase(Node* pos);
