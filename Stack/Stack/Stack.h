#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef int DATA;


typedef struct Tc
{
	DATA *data;//����Ĭ�ϳ�ʼ��Ϊ4
	
	int top;//ָ��ջ������
	int max;//����

}Tc;
extern void InitStack(Tc* ps);//��ʼ��
extern void  MaxStack(Tc* ps);//����//Ĭ��ÿ����������
extern void AddStack(Tc* ps, int x);//������
extern void PusStack(Tc* ps);//������
extern void DesStack(Tc* ps);//����
extern  int TopStack(Tc* ps);//����ջ������
extern int PanStack(Tc* ps);//�жϿ�
//extern PrintStack(Tc *ps);//���