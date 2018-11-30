/* Take string as input and recognize all keywords (assume a set of 10 keywords).
	Author: Shalini Guha
	Version : 1.0
	Date : 7.11.18 */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	char token[10][20];
	int i,j=0,k=0;
	gets(str);
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
	 if (!strcmp(token[i], "if") || !strcmp(token[i], "else") || 
        !strcmp(token[i], "while") || !strcmp(token[i], "do") ||  
        !strcmp(token[i], "break") ||  
         !strcmp(token[i], "continue") || !strcmp(token[i], "int") 
        || !strcmp(token[i], "double") || !strcmp(token[i], "float") 
        || !strcmp(token[i], "return")) 
    printf("\n'%s' is a Keyword",token[i]);
    else
    printf("\n'%s' is not a Keyword",token[i]);
        
    }
		
}
