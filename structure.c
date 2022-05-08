#include <stdio.h>
#include <string.h>
struct book
{
	char title[100];
	char author[50];
	int price;
	int dop;
}b1;
int main()
{
	printf("enter the book title:");
	gets(b1.title);
	printf("enter the author name:");
	gets(b1.author);
	printf("enter the price of the book:");
	scanf("%d",&b1.price);
	printf("enter the date of publishing:");
	scanf("%d",&b1.dop);
	printf("THE ENTERED DETAILS ARE:\n");
	printf("TITLE:%s\n",b1.title);
	printf("AUTHOR OF THE BOOK:%s\n",b1.author);
	printf("PRICE OF THE BOOK:%d\n",b1.price);
	printf("YEAR OF PUBLISHING:%d\n",b1.dop);
	return 0;
	
	}
