#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
typedef int VAL;
class Queue {
	//�ö���û������

	
private:
	typedef	struct Node {

		VAL val;
		struct Node* next;

	}Node;
public:
	Queue()
	{
		Ram = 0;
		head = now = nullptr;
	}
	int Ram;//���ڳ�Ա��
	Node* head;
	Node* now;
	bool Push(VAL x);
	bool Pop();
	VAL RePop(Queue& p);
	void Print()
	{
		Node* tmp = head;
		while (tmp)
		{
			std::cout << tmp->val << " ";
			tmp = tmp->next;
		}
	}
	~Queue()
	{	
		Node* tmp ;
		while (head)
		{
			tmp = head;
			head = head->next;
			delete tmp;

		}
	}
};
