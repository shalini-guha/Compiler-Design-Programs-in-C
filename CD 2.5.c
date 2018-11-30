#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,j,k;
	printf("\n Enter a line:\n");
	gets(str);
	if(str[0]=='/' && str[1]=='/' || str[0]=='/' && str[1]=='*')
	{
		if(str[0]=='/' && str[1]=='/' )
		{
			printf("\n The line is a comment");
			exit(1);		
		}
		if(str[0]=='/' && str[1]=='*')
		{
			if(str[strlen(str)-2]=='*' && str[strlen(str)-1]=='/')
			{
				printf("\n The line is a comment");
			}
			else
			{
				printf("\n The line is not a comment here");
			}
		}
	}
	else
	{
		printf("\n The line is not a comment"); 
	}
}
