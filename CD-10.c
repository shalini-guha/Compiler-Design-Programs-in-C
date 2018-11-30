/* Take string as input and delete all extra spaces.
	Author: Shalini Guha
	Version : 1.0
	Date : 7.11.18 */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50]; 
	int i,j=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			str[j++]=str[i];
		}
	}
	 str[j] = '\0'; 
	puts(str);
}
