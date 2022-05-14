#include <stdio.h>
#include <stdlib.h>

typedef int Val;
typedef struct ListNode
{
	Val _data;
	struct ListNode* _next;
	struct ListNode* _prev;
}Node;

// �������������ͷ���.
Node* ListCreate();

// ˫����������
void ListDestory(Node* pHead);

// ˫�������ӡ
void ListPrint(Node* pHead);

// ˫������β��
void ListPushBack(Node* pHead, Val x);

// ˫������βɾ
void ListPopBack(Node* pHead);

// ˫������ͷ��
void ListPushFront(Node* pHead, Val x);

// ˫������ͷɾ
void ListPopFront(Node* pHead);

// ˫���������
Node* ListFind(Node* pHead, Val x);

// ˫��������pos��ǰ����в���
void ListInsert(Node* pos, Val x);

// ˫������ɾ��posλ�õĽڵ�
void ListErase(Node* pos);
