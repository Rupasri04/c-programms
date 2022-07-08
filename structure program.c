#include <stdio.h>
struct student
{
	int rollno,sub1,sub2,total;
	char name[25];
	float avg;
}s[25];
int main()
{
	int i,n;
	printf("enter the number of students\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the rollno of the student:");
		scanf("%d",&s[i].rollno);
		printf("\nenter the name of the student:");
		scanf("%s",&s[i].name);
		printf("\nenter sub1:");
		scanf("%d",&s[i].sub1);
		printf("\nenter sub2:");
		scanf("%d",&s[i].sub2);
		s[i].total=s[i].sub1+s[i].sub2;
		s[i].avg=(s[i].sub1+s[i].sub2)/2;
    }
	
		
	printf("\nrollno\tname\tsub1\tsub2\ttotal\tavg");
	for(i=0;i<n;i++)
    printf("\n%d\t%s\t%d\t%d\t%d\t%f",s[i].rollno,s[i].name,s[i].sub1,s[i].sub2,s[i].total,s[i].avg);
    
	return 0;
	
}
