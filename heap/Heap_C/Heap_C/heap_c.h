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

// 堆的构建
void HeapCreate(heap* hp, Vals* a, int n);
// 堆的销毁
void HeapDestory(heap* hp);
// 堆的插入
void HeapPush(heap* hp, Vals x);
// 堆的删除
void HeapPop(heap* hp);
// 取堆顶的数据
Vals HeapTop(heap* hp);
// 堆的数据个数
int HeapSize(heap* hp);
// 堆的判空
int HeapEmpty(heap* hp);

// TopK问题：找出N个数里面最大/最小的前K个问题。
// 比如：未央区排名前10的泡馍，西安交通大学王者荣耀排名前10的韩信，全国排名前10的李白。等等问题都是Topk问题，
// 需要注意：
// 找最大的前K个，建立K个数的小堆
// 找最小的前K个，建立K个数的大堆
void PrintTopK(int* a, int n, int k);
void TestTopk();