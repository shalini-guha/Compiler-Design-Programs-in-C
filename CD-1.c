/* Check whether a string ends with ;
	Author: Shalini Guha
	Version : 1.0
	Date : 7.11.18 */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],ch;
	int len,i,j,k;
	scanf("%s",str);
	puts(str);
	len = strlen(str);
	ch = str[len-1];
	if(ch == ';')
	printf("\n Yes");
	else
	printf("\n No");
}
