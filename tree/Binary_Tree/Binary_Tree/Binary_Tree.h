#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <queue>;
#include <vector>


using namespace std;


typedef char BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}Tree;

// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
Tree* BinaryTreeCreate(BTDataType* a, int *pi);
// ����������
void BinaryTreeDestory(Tree** root);
// �������ڵ����
int BinaryTreeSize(Tree* root);
// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(Tree* root);
// ��������k��ڵ����
int BinaryTreeLevelKSize(Tree* root, int k);
// ����������ֵΪx�Ľڵ�
Tree* BinaryTreeFind(Tree* root, BTDataType x);
// ������ǰ����� 
void BinaryTreePrevOrder(Tree* root);
// �������������
void BinaryTreeInOrder(Tree* root);
// �������������
void BinaryTreePostOrder(Tree* root);
// �������
void BinaryTreeLevelOrder(Tree* root);
// �ж϶������Ƿ�����ȫ������
bool IsBeautyTree(Tree* root);
