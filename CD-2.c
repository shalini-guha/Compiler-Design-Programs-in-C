/* WAP to take string as input, and print all alphabets, digits, and whitespaces separately and the count of each.
	Author: Shalini Guha
	Version : 1.0
	Date : 7.11.18 */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[50],alpha[50],digit[50];
	int i=0,j=0,k=0,n=0,wc=0,a=0,d=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			
			alpha[a++]=str[i];
			
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit[d++]=str[i];
		}
		else
		{
			wc++;
		}
	}
	printf("\n The alphabets are:\n");
	for(i=0;i<=a;i++)
	{
		printf(" %c",alpha[i]);
	}
		printf("\n The digits are:\n");
	for(i=0;i<=d;i++)
	{
		printf(" %c",digit[i]);
	}
		printf("\n Their are %d white spaces\n",wc);

}
