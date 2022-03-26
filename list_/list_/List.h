#define  _CRT_SECURE_NO_WARNINGS
#pragma
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SListNode;

// ��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType x);
// �������ӡ
void SListPrint(SListNode* plist);
// ������β��
void SListPushBack(SListNode** pplist, SLTDateType x);
// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x);
// �������βɾ
void SListPopBack(SListNode** pplist);
// ������ͷɾ
void SListPopFront(SListNode** pplist);
// ���������
SListNode* SListFind(SListNode* plist, SLTDateType x);
// ��������posλ��֮ǰ����x
void SListInsert(SListNode** pplist, SListNode* pos, SLTDateType x);
// ������ɾ��posλ�õ�ֵ
void SListErase(SListNode** pplist, SListNode* pos);