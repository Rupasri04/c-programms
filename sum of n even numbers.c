#include <stdio.h>
int main()
{
	int n,count=0,sum=0;
	printf("enter the n value:");
	scanf("%d",&n);
	while(count<=n)
	{
		if(count%2==0)
		{
			sum=sum+count;
		}
	count=count+1;
    }
	printf("The sum of n even number:%d",sum);
	
	return 0;
}
