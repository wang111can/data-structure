#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct LIST
{
	struct LIST* prev;
	struct LIST* next;
	int data;
}LIST;

LIST* BuyHead();
LIST* BuyNode(int x);

void Hnode(LIST* phead,int x);
void Wnode(LIST* phead, int x);
void DenHnode(LIST* phead);//ͷɾ
void DenWnode(LIST* phead);//βɾ

void SpDen(LIST* cop);//ɾ��ָ��Ԫ��
LIST* SeekList(LIST* head, int x);//����
void SpAdd(LIST* cop,int x);
void Print(LIST* phead);

