#include <stdio.h>
void fact(int n);
int main()
{
	int n;
	printf("enter the value of n: ");
	scanf("%d",&n);
	fact(n);
	printf("FACTORIAL:%d",fact);
	return 0;
}
void fact(int n )
{
	int i,num=1;
	for(i=1;i<=n;i++)
	{
		i=num*i;
	}
	
}
