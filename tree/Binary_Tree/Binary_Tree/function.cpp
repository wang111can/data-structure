#include "Binary_Tree.h"

//前序遍历构建二叉树 "ABD##E#H##CF##G##"
Tree* BinaryTreeCreate(BTDataType* a, int *pi) {

	if (a[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}
	Tree* node = (Tree*)malloc(sizeof Tree);
	node->_data = a[*pi];
	(*pi)++;
	node->_left = BinaryTreeCreate(a, pi);
	node->_right = BinaryTreeCreate(a, pi);
	return node;
}





void BinaryTreeDestory(Tree** root)
{
	if (!(*root)) return;
	BinaryTreeDestory(&(*root)->_left);
	BinaryTreeDestory(&(*root)->_right);
	free(*root);
	*root = NULL;
}

int BinaryTreeSize(Tree* root)
{
	if (!root) return NULL;
	
	return BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;

}

int BinaryTreeLeafSize(Tree* root)
{
	if (!root) return 0;
	if (!root->_left && !root->_right) return 1;

	return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
}

int BinaryTreeLevelKSize(Tree* root, int k)
{
	if (k < 1) return 0;
	if (!root) return 0;
	if (k == 1) return 1;

	return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
}

Tree* BinaryTreeFind(Tree* root, BTDataType x)
{
	if (!root) return NULL;

	if (root->_data == x) return root;
	
	Tree* res = BinaryTreeFind(root->_left, x);
	if (res != NULL && res->_data == x) return res;
	
	res = BinaryTreeFind(root->_right, x);
	if (res != NULL && res->_data == x) return res;

	return NULL;
}

void BinaryTreePrevOrder(Tree* root)
{
	if (!root) {
		printf("#");
		return;
	}
	printf("%c", root->_data);
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
}

void BinaryTreeInOrder(Tree* root)
{
	if (!root) {
		printf("#");
		return;
	}
	BinaryTreePrevOrder(root->_left);
	printf("%c", root->_data);
	BinaryTreePrevOrder(root->_right);
}

void BinaryTreePostOrder(Tree* root)
{
	if (!root) {
		printf("#");
		return;
	}
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
	printf("%c", root->_data);
}

void BinaryTreeLevelOrder(Tree* root)
{
	if (!root) return;
	std::queue<Tree*> q;
	q.push(root);
	while (q.size())
	{
		auto t = q.front(); q.pop();
		std::cout << t->_data;
		if (t->_left) q.push(t->_left);
		if (t->_right) q.push(t->_right);
	}
}

bool IsBeautyTree(Tree* root)
{
	if (!root) return true;
	queue<Tree*> q;
	q.push(root);
	while (q.size())
	{
		auto t = q.front(); q.pop();
		if (!t->_left && t->_right) return false;
		if (t->_left && !t->_right)
		{
			if (t->_left->_left != NULL || t->_left->_right != NULL) return false;
			if (q.size() == 0) return true;
			else return false;
		}

		if (t->_left) q.push(t->_left);

		if (t->_right) q.push(t->_right);


	}

	return true;

}
