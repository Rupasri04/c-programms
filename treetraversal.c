#include <stdio.h>
#include <stdlib.h>
struct node
{
	int value;
	struct node *leftchild,*rightchild;
};
struct node *newnode(int value)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->value=value;
	temp->leftchild=temp->rightchild=NULL;
	return temp;
}
struct node *insertnode(struct node *node,int value)
{
	if(node==NULL)
	return newnode(value);
	if(value<node->value)
	node->leftchild=insertnode(node->leftchild,value);
	else if(value>node->value)
	node->rightchild=insertnode(node->rightchild,value);
	return node;
}
void preorder(struct node *rootnode)
{
	if(rootnode)
	{
		printf("%d-->",rootnode->value);
		preorder(rootnode->leftchild);
		preorder(rootnode->rightchild);
	}
}
void inorder(struct node *rootnode)
{
	if(rootnode)
	{
		inorder(rootnode->leftchild);
		printf("%d-->",rootnode->value);
	
		inorder(rootnode->rightchild);
	}
}
void postorder(struct node *rootnode)
{
	if(rootnode)
	{
		postorder(rootnode->leftchild);
		postorder(rootnode->rightchild);
		printf("%d-->",rootnode->value);
	}
}
int main()
{
	struct node *root=NULL;
	int choice,ch,value;
	printf("\nmenu\n");
	printf("1.create\n2.preorder\n3.inorder\n4.postorder\n");
	do
	{
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the element to be inserted:");
				scanf("%d",&value);
				root=insertnode(root,value);
				break;
			case 2:
				printf("\n preorder \n");
				preorder(root);
				break;
			case 3:
				printf("\n inorder \n");
				inorder(root);
				break;
			case 4:
				printf("\n postorder \n");
				postorder(root);
				break;
			default:
				printf("invalud option");
				break;
		}
		printf("\n do you want to continue:");
		scanf("%d",&ch);
	}while(ch==1);
	return 0;
}


