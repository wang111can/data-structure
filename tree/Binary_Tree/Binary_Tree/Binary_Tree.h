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

// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
Tree* BinaryTreeCreate(BTDataType* a, int *pi);
// 二叉树销毁
void BinaryTreeDestory(Tree** root);
// 二叉树节点个数
int BinaryTreeSize(Tree* root);
// 二叉树叶子节点个数
int BinaryTreeLeafSize(Tree* root);
// 二叉树第k层节点个数
int BinaryTreeLevelKSize(Tree* root, int k);
// 二叉树查找值为x的节点
Tree* BinaryTreeFind(Tree* root, BTDataType x);
// 二叉树前序遍历 
void BinaryTreePrevOrder(Tree* root);
// 二叉树中序遍历
void BinaryTreeInOrder(Tree* root);
// 二叉树后序遍历
void BinaryTreePostOrder(Tree* root);
// 层序遍历
void BinaryTreeLevelOrder(Tree* root);
// 判断二叉树是否是完全二叉树
bool IsBeautyTree(Tree* root);
