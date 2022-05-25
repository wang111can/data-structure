#include "heap_c.h"

void swap(Vals* x, Vals* y)
{
	Vals t = *x;
	*x = *y;
	*y = t;
}

void down(heap* hp, int x)
{
	int t = x; int idx = hp->idx;
	if (x * 2 <= idx && hp->data[t] > hp->data[x * 2]) t = x * 2;

	if (x * 2 + 1 <= idx && hp->data[t] > hp->data[x * 2 + 1]) t = x * 2 + 1;
	
	if (t != x)
	{
		swap(&(hp->data[t]), &(hp->data[x]));
		down(hp, t);
	}
}

void HeapCreate(heap* hp, Vals* a, int n)
{
	hp->idx = 0;
	hp->capacity = n;
	hp->data = (Vals*)malloc(n * sizeof Vals);
	if (hp->data == NULL)
	{
		printf("malloc fail\n");
		return;
	}
	for (int i = 0; i < n; i++) hp->data[++(hp->idx)] = a[i];

	for (int i = n / 2; i; i--)	down(hp, i);

}

void HeapDestory(heap* hp)
{
	if (!hp || hp->data == NULL) return;
	free(hp->data);
	free(hp);
}


Vals HeapTop(heap* hp)
{
	if (!hp || !hp->data) return 0x3f3f3f3f;
	if (!hp->idx) return 0x3f3f3f3f;

	return hp->data[1];
}


void HeapPop(heap* hp)
{
	if (!hp || !hp->data) return ;
	if (!hp->idx) return ;

	swap(&(hp->data[1]), &(hp->data[hp->idx]));
	hp->idx--;
	down(hp, 1);
}



int HeapEmpty(heap* hp)
{
	if (!hp || !hp->data) 1;
	if (!hp->idx) return 1;
	return !hp->data;
}
