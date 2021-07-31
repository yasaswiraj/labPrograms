#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int flag=0,i;
	char s[10][10]={"for","while","if","char","switch","int"},n[20];
	printf("enter the string :\n");
	scanf("%s",n);
	if(isalpha(n[0]))
	{
		for(i=0;i<6;i++)
		if(strcmp(s[i],n)==0)
		{
		flag=1;
		break;
		}
		if(flag==1)
		printf("keyword");
		else
		printf("identifier");
	}
	else
	if(isdigit(n[0]))
	printf("digit");

	for(i=0;i<strlen(n);i++)
	switch(n[i])
	{
		case '+':printf("+ operator");
			break;
		case '-':printf("- operator");
			break;
		case '*':printf("* operator");
			break;
		case '/':printf("/ operator");
			break;
		case '%':printf("%% operator");
			break;
		case '=':printf("= operator");
			break;
		case '(':printf("( operator");
			break;
		case ')':printf(") operator");
			break;
	}
	return 0;
}
