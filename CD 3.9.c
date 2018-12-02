#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,k,len=0;
	FILE *fp;
	char word[50][50];
	char lhs[10][10],ch;
	int n;
	fp = fopen("one.txt","r");
	if(fp==NULL)
	{
		printf("\n Could not open the file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		i = 0;
		while((ch = fgetc(fp))!=EOF)
		{
			fscanf(fp,"%s",word[i]);
			i++;
		}
		n = i;
		for(i=0;i<n;i++)
		{
			puts(word[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;word[i][j]!='-';j++)
			{
				
				lhs[i][j] = word[i][j];
			}
			lhs[i][j] == '\0';
		}
		for(i=0;i<n;i++)
		{
			len = strlen(lhs[i]);
			if(len!=1)
			{
				printf("Production %d is not valid\n",i);
			}
			else
			{	
				printf("Production %d is valid\n",i);
			}
		}
	}
	fclose(fp);
}
