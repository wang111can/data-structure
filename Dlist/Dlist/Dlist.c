#define  _CRT_SECURE_NO_WARNINGS
#include"List.h"
void test1()
{
	LIST* head = BuyHead();
	Hnode(head, 1);
	Hnode(head, 2);
	Hnode(head, 5);
	
	Hnode(head, 7);
	Wnode(head, 3);
	Wnode(head, 4);
	Wnode(head, 6);Print(head);//��ӡ
	
	LIST* cop = SeekList(head, 7);
	if (cop != NULL)
	{
	Print(head);//��ӡ
		SpDen(cop);//ɾ��ָ��λ��
	}
	cop= SeekList(head, 1);
	if (cop != NULL)
	{
		SpAdd(cop, 100);
	}
	


	

	

	Print(head);//��ӡ
}
int main()
{
	test1();
	return 0;
}