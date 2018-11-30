/* Take string as input and recognize all identifiers using identifier rules.
	Author: Shalini Guha
	Version : 1.0
	Date : 7.11.18 */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	char string[10][20];
	int i,j=0,k=0,count=0,flag=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		string[j][k++]=str[i];
		else
		{
			string[j][k++]='\0';
			j++;
			k=0;
		}
	}
	for(k=0;k<j;k++)
	{
		if( (string[k][0]>='a'&&string[k][0]<='z')||(string[k][0]>='A'&&string[k][0]<='Z')||(string[k][0]=='_'))
        {
   			for(i=1;i<=strlen(string[k]);i++)
   			{
     			if((string[k][i]>='a'&& string[k][i]<='z')||(string[k][i]>='A' && string[k][i]<='Z')||(string[k][i]>='0'&& string[k][i]<='9')||(string[k][i]=='-'))
				 {
 					count++;
     			}
   			}
    	if(count==strlen(string[k]))
    	{
      		flag=0;
    	}
  		}
 		else
 		{
  			flag=1;
 		}
		if(flag==1)
 			printf("\n %s is not a valid identifier",string[k]);
 		else
 			printf("\n %s is a valid identifier",string[k]);

	}
}
