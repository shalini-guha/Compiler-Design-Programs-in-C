#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char str[70];
	int i=0,j=0,k=0,dom=0,flag=0,len=0;
	gets(str);
	len = strlen(str);
		while(str[i]!='@' && i<len)
		{	
			if(str[i]>='a'&&str[i]<='z'||str[i]>='0'&&str[i]<='9')
			{
				
				if(k>10)
				{
					printf("\n ID too long! \n");
					flag=1;
					exit(1);
				}
				else
				{
					k++;
					i++;
				}
			}
			else
			{
				printf("\n Invalid ID");
				flag=1;
				exit(1);
			}
		}
		i++;
		while(str[i]!='.' && i<len)
		{  
			if(str[i]>='a'&&str[i]<='z'||str[i]>='0'&&str[i]<='9')
			{
				if(j>5)
				{
					printf("\n Domain name too long!\n");
					flag=1;
					exit(1);
				}
				else
				{
					j++;
					i++;
				}
			}
			else
			{
				printf("\n Invalid ID");
				flag=1;
				exit(1);
			}
		}
		i++;
		while(str[i]!='\0')
		{	
			if(str[i]>='a'&&str[i]<='z')
			{
				
				if(dom>3)
				{
					printf("\n Domain name too long!\n");
					flag=1;
					exit(1);
				}
				else{
					dom++;
					i++;
				}
			}
			else
			{
				printf("\n Invalid ID");
				flag=1;
				exit(1);
			}
		}
	
		if(flag==0)
		printf("\n Valid E-Mail ID");
	
		
		
}
