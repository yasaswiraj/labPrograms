#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i=0,t;
	printf("\n enter a string:");
	scanf("%s",s);
	if(s[0]=='/')
	{
		if(s[1]=='/')
		printf("\ncomment");
		else if(s[i]=='*')
		{
			for(i=2;i<strlen(s)-1;i++)
			if(s[1]=='*'&&s[i+1]=='/')
			t=1;
			if(t==1)
			printf("comment");
			else
			printf("invalid input");
		}
	}
	else
	printf("\nnot a comment");
	return 0;
}
