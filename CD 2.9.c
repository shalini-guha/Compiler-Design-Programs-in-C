#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,j,k;
	printf("\n Enter a line \n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{	
		if(str[i]=='\\' && str[i+1]=='n')
		{
			printf("\n");
			i++;
		}
		else if(str[i]=='\\' && str[i+1]=='b')
		{
			printf("\b");
			i++;
		}
		else if(str[i]=='\\' && str[i+1]=='t')
		{
			printf("\t");
			i++;
		}
		else
		{
			putchar(str[i]);
		}
	}
}
