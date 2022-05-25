#include "heap_c.h"


void test()
{
	Vals a[10] = { 111,22,5,7,8,9,55,1,222,33 };
	heap* p = (heap*)malloc(sizeof heap);
	HeapCreate(p,a,sizeof a / sizeof a[0]);
	while (!HeapEmpty(p))
	{
		Vals val = HeapTop(p);
		cout << val << ' ';
		HeapPop(p);
	}

}

int main()
{
	test();
	
	return 0;
}