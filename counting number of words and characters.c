#include <stdio.h>
#include <string.h>
int main()
{
	int words=0,characters=0,i=0;
	char ch[100];
	printf("enter the string:");
	gets(ch);
	while(ch[i]!='\0')
	{
		if(ch[i]==' ')
		words=words+1;
		else
		characters=characters+1;
		i=i+1;
    }
    words=words+1;
	printf("no of words:%d",words);
	printf("no of characters:%d",characters);
	return 0;
	
}
