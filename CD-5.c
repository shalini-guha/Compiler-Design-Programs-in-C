/* Check whether a word is present or not in string.
	Author: Shalini Guha
	Version : 1.0
	Date : 7.11.18 */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],word[50];
	char token[10][20];
	int i,j=0,k=0;
	gets(str);
	gets(word);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		token[j][k++]=str[i];
		else
		{
			token[j][k++]='\0';
			j++;
			k=0;
		}
	}
	for(i=0;i<=j;i++)
	{
		if(strcmp(word,token[i])==0)
		{
			printf("%s found \n",token[i]);
			break;
		}
	}
	if(i==j+1)
	{
		printf("\n Not Found");
	}
}
  
