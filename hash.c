#include <stdio.h>
struct node
{
	int key,value;
}hash[10];
int main()
{
	int number , i, size;
	printf("enter the total number of size of the table:\n");
	scanf("%d",&size);
	printf("enter the elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&number);
		hash[number%size].value=number;
		hash[number%size].key=number%size;
	}
	printf("\n hash table \n");
	printf("key\tvalue");
	for(i=0;i<size ;i++)
	{
		printf("\n%d\t%d",hash[i].key,hash[i].value);
		
	}
	return 0;
}
