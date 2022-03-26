#define  _CRT_SECURE_NO_WARNINGS
#include"Stack.h"
void InitStack(Tc* ps)//��ʼ��
{
	assert(ps);
	ps->data =(DATA*)malloc(sizeof(DATA) * 4);
	ps->max = 4;
	ps->top = -1;//ָ��ջ������
	
}
 void AddStack(Tc* ps, int x)//��
 {
	 assert(ps);

	 if (ps->top == ps->max-1)
	 {
		 MaxStack(ps);

	}
	 ps->top++;
	 ps->data[ps->top]= x;
	 
}

 void PusStack(Tc* ps)//��
 {
	 assert(ps);
	 assert(ps->top > -1);

	 ps->top--;
 }

 int TopStack(Tc* ps)//������
 {
	 assert(ps);
	 assert(ps->top > -1);
	 return ps->data[ps->top];
 }
 
 void MaxStack(Tc* ps)//����
 {
	 assert(ps);
	 DATA*tmp= (DATA*)realloc(ps->data, ps->max * 2*sizeof(DATA));
	 if (tmp == NULL)
	 {
		 printf("error!\n");
		 return;
	 }
	 else
	 {
		 ps->data = tmp;
	ps->max *= 2;
	 }
	

 }
 void DesStack(Tc* ps)//����
 {
	 assert(ps);
	 free(ps->data);
	 ps->data = NULL;
	 ps->max = 0;
	 ps->top = -1;
 }
 int PanStack(Tc* ps)//�жϿ�
 {
	 assert(ps);
	 return ps->top;
 }
 //PrintStack(Tc* ps)//���
 //{
	// assert(ps);
	// assert(ps->top > -1);
	// int a = ps->top;
	// while (a>-1)
	// {
	//	 printf("%d ", ps->data[a]);
	//	 a--;
	// }

 //}