#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the values of a,b,c,d:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	{
		printf("%d is the maximum",a);
	}
	else if(b>a&&b>c&&b>d)
	{
		printf("%d is the maximum",b);
	}
	else if(c>a&&c>b&&c>d)
	{
		printf("%d is the maximum",c);
	}
	else
	{
		printf("%d is the maximum",d);
	}
	return 0;
}
