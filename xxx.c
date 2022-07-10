#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;
void insert(int value);
void delete();
void display();
int main()
{
	int value,ch;
	printf("menu:");
	printf("\n1.insert\n2.delete\n3.display");
	do
	{
		printf("enter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the value to be inserted:");
				scanf("%d",&value);
				insert(value);
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
		}
	}while(ch<=3);
	return 0;
}
void insert(int value)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	if(front==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
		
	}
	printf("insertion is success");
}
void delete()
{
	if(front==NULL)
	{
		printf("queue is empty");
	}
	else
	{
		struct node* temp;
		temp=front;
		printf("deleted element:%d",temp->data);
		front=temp->next;
		free(temp);
	}
}
void display()
{
	if(front==NULL)
	{
		printf("queue is empty");
	}
	else
	{
		struct node *temp;
		temp=front;
		while(temp->next!=NULL)
		{
			printf("%d-->",temp->data);
			temp=temp->next;
		}
		printf("%d-->NULL",temp->data);
	}
}
