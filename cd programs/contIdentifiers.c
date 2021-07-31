#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,t=0;
	printf("enter string :\n");
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a' && a[i]<='z'))
	if(a[i+1]=='+'||a[i+1]=='='||a[i+1]=='-'||a[i+1]=='*'||a[i+1]=='/'||a[i+1]=='\0')
	t=t+1;
	printf("no.of identifiers are %d",t);
	return 0;
}
