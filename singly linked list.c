#include <stdio.h>
#include <malloc.h>
struct node
{
	int data;
	struct node *next;
}*head;
int main()
{
	head=(struct node*)malloc(sizeof(struct node));
	head->data=200;
	head->next=NULL;
	printf("%d",head->data);
	return 0;
}
