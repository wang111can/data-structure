#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>

using namespace std;
	

typedef int Vals;


typedef struct Heap
{
	Vals* data;
	int idx;
	int capacity;
}heap;

// �ѵĹ���
void HeapCreate(heap* hp, Vals* a, int n);
// �ѵ�����
void HeapDestory(heap* hp);
// �ѵĲ���
void HeapPush(heap* hp, Vals x);
// �ѵ�ɾ��
void HeapPop(heap* hp);
// ȡ�Ѷ�������
Vals HeapTop(heap* hp);
// �ѵ����ݸ���
int HeapSize(heap* hp);
// �ѵ��п�
int HeapEmpty(heap* hp);

// TopK���⣺�ҳ�N�����������/��С��ǰK�����⡣
// ���磺δ��������ǰ10�����ɣ�������ͨ��ѧ������ҫ����ǰ10�ĺ��ţ�ȫ������ǰ10����ס��ȵ����ⶼ��Topk���⣬
// ��Ҫע�⣺
// ������ǰK��������K������С��
// ����С��ǰK��������K�����Ĵ��
void PrintTopK(int* a, int n, int k);
void TestTopk();