#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k;
	char str[50];
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='c')
		{
			str[i]='m';
			break;
		}
	}
	for(j=i;str[j]!='\0';j++)
	{
		if(str[j]==',')
		{
			str[j]='*';
			break;
		}
	}
	puts(str);
}
