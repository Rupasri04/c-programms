#include <stdio.h>
struct students
{
	int rollno,total,sub1,sub2;
	char name[25];
	float avg;
}s[25];
int main()
{
	FILE *fp;
	int i,n;
	fp=fopen("student.txt","w");
	printf("enter the number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the roll number:\n");
		scanf("%d",&s[i].rollno);
		printf("enter the name of the student:\n");
		scanf("%s",&s[i].name );
		printf("enter the sub1:\n");
		scanf("%d",&s[i].sub1);
		printf("enter the sub 2:");
		scanf("%d",&s[i].sub2);
	    s[i].total=s[i].sub1+s[i].sub2;
	    s[i].avg=(s[i].sub1+s[i].sub2)/2;
	    fwrite(&s,sizeof(struct students),1,fp);
	}
	printf("written successfully");
	fclose(fp);
	fp=fopen("student.txt","r");
	if(fp==0)
	{
		printf("\n ERROR IN OPENING THE FILE\n");
		
	}
	else
	{
		printf("\n rollno \t name \t sub1 \t sub2 \t total \t avg");
		for(i=0;i<n;i++)
		{
			fread(&s,sizeof(struct students),1,fp);
			printf("\n%d\t%s\t%d\t%d\t%d\t%f",s[i].rollno,s[i].name,s[i].sub1,s[i].sub2,s[i].total,s[i].avg);
		}
	}
	fclose(fp);
	return 0;
}
