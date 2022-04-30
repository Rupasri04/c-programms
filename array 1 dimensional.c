#include <stdio.h>
int main()
{
	int a[5],i;
	printf("enter the values till a[5]:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ARRAY ELEMENTS:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
