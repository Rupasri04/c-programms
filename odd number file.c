#include <stdio.h>
int main()
{
	FILE *fp;
	int i,n,sum=0;
	fp=fopen("fact.txt","w+");
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		sum=sum+i;
	}
	fprintf(fp,"%d",sum);
	printf("the sum of odd numbers:%d",sum);
	fclose(fp);
	return 0;
}
