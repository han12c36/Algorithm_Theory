#include <iostream>
using namespace std;
int num = 15;

typedef struct node *treePointer;

typedef struct node{
	int data;
	treePointer LeftChild;
	treePointer RightChild;
};

void preorder(treePointer ptr)
{
	if(ptr)
	{
		cout << ptr->data << ' ';
		preorder(ptr->LeftChild);
		preorder(ptr->RightChild);
	}
}

void inorder(treePointer ptr)
{
	if(ptr)
	{
		preorder(ptr->LeftChild);
		cout << ptr->data << ' ';
		preorder(ptr->RightChild);
	}
}

void postorder(treePointer ptr)
{
	if(ptr)
	{
		
		preorder(ptr->LeftChild);
		preorder(ptr->RightChild);
		cout << ptr->data << ' ';
	}
}

int main(void)
{
	node nodes[num + 1];
	for(int i = 1; i <= num; i++)
	{
		nodes[i].data = i;
		nodes[i].LeftChild = NULL;
		nodes[i].RightChild = NULL;
	}
	
	for(int i = 1; i <= num; i++)
	{
		if(i % 2 == 0) nodes[i / 2].LeftChild = &nodes[i];
		else nodes[i / 2].RightChild = &nodes[i];
	}
	preorder(&nodes[1]);
	//inorder(%nodes[1]);
	//postorder(%nodes[1]);
	
	return 0;
}
