#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,j=0,k;
	char str[100],str1[50];
	printf("\n Enter a statement");
	gets(str);
	while(str[i]!=' ')
	{
		str1[i]=str[i];
		i++;
	}
	str1[i]='\0';
	if(!strcmp(str1,"int"))
	{
		while(str[j]!='=')
		{
			j++;
		}
		if(str[j+1]>='0' && str[j+1]<='9')
		printf("\n Valid Constant");
		else
		printf("\n Invalid constant");
	}
	else if(!strcmp(str1,"char"))
	{
		j=0;
		while(str[j]!='=')
		{
			j++;
		}
		if(str[j+1]>='a' && str[j+1]<='z' || str[j+1]>='A' && str[j+1]<='Z')
		printf("\n Valid Constant");
		else
		printf("\n Invalid constant");
	}
	else
	printf("\n Invalid Identifier");
}
