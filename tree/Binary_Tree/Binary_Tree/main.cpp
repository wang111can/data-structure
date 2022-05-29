#include "Binary_Tree.h"




void test()
{
	char a[] = "ABD##E#H##CF##G##";
	int cnt = 0;
	Tree* Node = BinaryTreeCreate(a, &cnt);
	printf("%d\n", BinaryTreeSize(Node));
	printf("%d\n", BinaryTreeLeafSize(Node));
	printf("%d\n", BinaryTreeLevelKSize(Node, 1));
	printf("%d\n", BinaryTreeLevelKSize(Node, 2));
	printf("%d\n", BinaryTreeLevelKSize(Node, 3));
	printf("%d\n", BinaryTreeLevelKSize(Node, 4));
	printf("%d\n", BinaryTreeLevelKSize(Node, 5));

	printf("%c\n", BinaryTreeFind(Node, 'A')->_data);
	printf("%c\n", BinaryTreeFind(Node, 'B')->_data);
	printf("%c\n", BinaryTreeFind(Node, 'C')->_data);
	printf("%c\n", BinaryTreeFind(Node, 'D')->_data);
	printf("%c\n", BinaryTreeFind(Node, 'E')->_data);
	printf("%c\n", BinaryTreeFind(Node, 'F')->_data);
	printf("%c\n", BinaryTreeFind(Node, 'G')->_data);
	printf("%c\n", BinaryTreeFind(Node, 'H')->_data);

	BinaryTreePrevOrder(Node);
	printf("\n");
	BinaryTreeInOrder(Node);
	printf("\n");
	BinaryTreePostOrder(Node);
	printf("\n");
	BinaryTreeLevelOrder(Node);
	printf("\n");
	cout << IsBeautyTree(Node) << endl;
	BinaryTreeDestory(&Node);
	BinaryTreePrevOrder(Node);


}

int main()
{
	test();

	return 0;
}