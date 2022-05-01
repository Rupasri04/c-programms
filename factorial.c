#include <stdio.h>
int main()
{
	int n,fact=1,i=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	while (i<=n)
	{
		fact=fact*i;
		i=i+1;
	}
	printf("FACTORIAL:%d",fact);
	return 0;
}
