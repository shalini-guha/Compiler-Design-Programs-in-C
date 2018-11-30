#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k;
	char str[50];
	printf("Enter a string:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='+'||str[i]=='-'||str[i]=='%'||str[i]=='/')
		{
			if((str[i-1]>='a'&&str[i-1]<='z'||str[i-1]>='A'&&str[i-1]<='Z'||str[i-1]>='0'&&str[i-1]<='9')&&(str[i+1]>='a'&&str[i+1]<='z'||str[i+1]>='A'&&str[i+1]<='Z'||str[i+1]>='0'&&str[i+1]<='9'))
			{
				printf("\n %c The operator is valid",str[i]);
			}
			else
			{
				printf("\n %c The operator is invalid",str[i]);
			}
		}
	}
}

