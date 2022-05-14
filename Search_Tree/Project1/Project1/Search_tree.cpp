
//typedef int VAL;
//
//typedef  struct Node
//{
//	VAL val;
//	struct Node* left;
//	struct Node* right;
//}Node;
//
//void MakerTree(Node* root,VAL x)
//{
//	
//	root->val = x;
//	root->left = nullptr;
//	root->right = nullptr;
//}
//
//
//Node* find(VAL x, Node*root)
//{
//	if (root == nullptr)
//		return nullptr;
//	else if (x > root->val)
//	{
//		return find(x, root->right);
//	}
//	else if (x < root->val)
//		return find(x, root->left);
//	else
//		return root;
//
//}
//
//Node* find_min( Node* root)
//{
//	if (root == nullptr)
//		return nullptr;
//	else if (root->left == nullptr)
//		return root;
//	else
//		return find_min(root->left);
//
//}
//
//Node* find_max(Node* root)
//{
//	if (root == nullptr)
//		return nullptr;
//	else if (root->right == nullptr)
//		return root;
//	else
//		return find_min(root->right);
//
//}
//
//Node* Insert(VAL x, Node* root)
//{
//
//	if (root == nullptr)
//	{
//		root = new Node;
//		root->val = x;
//		root->right = nullptr;
//		root->left = nullptr;
//		
//	}
//	else if (x > root->val)
//		root->right= Insert(x, root->right);
//	else if (x < root->val)
//		root->left= Insert(x, root->left);
//	return root;
//
//
//}
//
//Node* Delete(VAL x, Node* root)
//{
//	if (root == nullptr)
//	{
//		cout << "Tree is empty!";
//		return nullptr;
//	}
//	else if (x > root->val)
//		root->right = Delete(x, root->right);
//	else if (x < root->val)
//		root->left = Delete(x, root->left);
//	else if (root->left && root->right)
//	{
//		Node* tmp = find_min(root->right);
//		root->val = tmp->val;
//		root->right = Delete(root->val, root->right);
//
//	}
//	else
//	{
//		Node* tmp = root;
//		if (tmp->left == nullptr)
//			tmp = tmp->right;
//		else if (tmp->right == nullptr)
//			tmp = tmp->left;
//		else
//			delete tmp;
//	}
//	return root;
//}
//
//void Print(Node* root)
//{
//	if (root == nullptr)
//	{
//		cout << " NULL ";
//		return;
//	}
//	Print(root->left);
//	cout << root->val<<" ";
//	Print(root->right);
//
//}
//
//void test1()
//{
//	Node* xx=NULL;
//	
//	Insert(11, xx);
//	Insert(12, xx);
//	Insert(13, xx);
//	Insert(14, xx);
//	Insert(15, xx);
//	Print(xx);
//}
//
//union ll {
//
//	int x;
//	char y;
//
//};
//
//int main()
//{	
//	ll c;
//	c.x = 10;
//	cout << c.x;
//	
//	return 0;
//}

#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iostream>

using namespace std;

class List {

private:
    typedef  struct Node {

        int val;
        struct Node* next;

    }Node;
    Node* Head;

public:
    List() {
        Head = new Node;
        Head->next = nullptr;
    }
    void Insert(int x, int y = 0) {
        auto p = Head->next, q = Head;
        while (y--)
        {
            q = q->next;
            p = p->next;
        }
        auto node = new Node;
        node->val = x;
        node->next = p;
        q->next = node;
    }
    void Dele(int y = 0)
    {
        auto p = Head->next, q = Head;
        while (y--)
        {
            p = p->next;
            q = q->next;
        }

        q->next = p->next;
        delete p;
    }
    void Print()
    {
        auto p = Head->next;
        while (p)
        {

            cout << p->val << ' ';
            p = p->next;
        }

    }
    ~List()
    {
        while (Head)
        {
            auto p = Head;
            Head = Head->next;
            delete p;
        }


    }
};

#include<iostream>

using namespace std;

const int sz = 200010;
long long  s[sz],a[sz];
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    for (int i = 1; i <= n; i++) scanf("%d", &s[i]);
//    for (int i = 1; i <= n; i++)a[i] = a[i - 1] + s[i];
//
//    long long sum = 0;
//    for (int i = 1; i <= 4; i++)
//    {
//        sum += s[i] * (a[n] - a[i]);
//    }
//    cout << sum;
//
//}



#include<iostream>

using namespace std;

const int N = 100010;

int a[N], sz[N];
int n, m;

int find(int x)
{
    if (a[x] != x) a[x] = find(a[x]);
    return a[x];

}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        a[i] = i;
        sz[i] = 1;//每个节点默认为一个点数量
    }
    while (m--)
    {
        string ch;
        cin >> ch;
        int x, y;
        if (ch == "C")
        {

            scanf("%d %d", &x, &y);
            if (find(x) == find(y))continue;
            sz[find(y)] += sz[find(x)];//保证只有根节点的sz有效
            a[find(x)] = find(y);//注意x,y的顺序
        }
        else if (ch == "Q1")
        {

            if (find(x) == find(y))cout << "Yes" << endl;
            else cout << "No" << endl;

        }
        else {

            scanf("%d", &x);
            cout << sz[find(x)] << endl;
        }

    }



}