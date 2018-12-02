#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp,*fp1;
	char ch,ch1,ch2,word[50],word1[50],word2[50],word3[50];
	int flag=0,len=0;
	fp = fopen("one.c","r");
	if(fp==NULL)
	{
		printf("\n Could not open file \n");
		exit(EXIT_FAILURE);
	}
	else
	{
		fscanf(fp,"%s",word);
		fscanf(fp,"%s",word1);
		while(strcmp(word1,"return"))
		{
			fscanf(fp,"%s",word1);
		}
		fscanf(fp,"%s",word1);
		// word1 has the returned variable
		fp1 = fopen("one.c","r");
		if(fp1==NULL)
		{
		printf("\n Could not open file \n");
		exit(EXIT_FAILURE);
		}
		else
		{
			fscanf(fp1,"%s",word3);
			while(strcmp(word3,word1))
			{
				fscanf(fp1,"%s",word3);
			}
			len = strlen(word1)+7;
			fseek(fp1,-len,SEEK_CUR);
			fscanf(fp1,"%s",word2);
			puts(word);
			puts(word2);
			if(!strcmp(word,word2))
			{
				printf("Valid return type");
			}
			else
			{
				printf("\n Invalid return type");
			}
		}
}
}
