#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isType(char *word)
{
	char arr[10][10]={{"int"},{"char"},{"double"},{"float"}};
	int i=0;
	for(i=0;i<4;i++)
	{
		if(!strcmp(arr[i],word))
		{
			return 1;
		}
	}
	if(i==4)
	return 0;
}
int main()
{
	FILE *fp;
	char ch,ch1,ch2,word[50];
	int flag=0;
	fp = fopen("one.c","r");
	if(fp==NULL)
	{
		printf("\n Could not open file \n");
		exit(EXIT_FAILURE);
	}
	else
	{
		if(!strcmp(word,"struct") || !strcmp(word,"typedef"))
		{
			while((ch=fgetc(fp))!='{');
			while((ch2=fgetc(fp)!=EOF)  && (ch2=fgetc(fp)!='}'))
			{
				fscanf(fp,"%s",word);
				if(!isType(word))
				{
					printf("Data type required");
					flag=1;
					exit(1);
				}
				else
				{
					 while((ch1=fgetc(fp))!=';');
				}
			}
		}
		else
		{
			printf("\n Invalid structure format");
		}
	}
	fclose(fp);
	if(flag==0)
	printf("\n Valid Structure");
}
