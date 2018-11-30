#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp,*fptr;
    char ch,ch1;
    char name2[100];
    int val1=0,val=0;
    scanf("%d",&val);
    fp = fopen("one.txt", "r+");
 
    while( (ch = getc(fp))!= EOF)
    {
    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");

        exit(EXIT_FAILURE);
    }
    else
    {
    	fscanf(fp, "%s", name2);
    	if(!strcmp(name2,"int") || !strcmp(name2,"double") || !strcmp(name2,"float") || !strcmp(name2,"char"))
    	{
    		if(!strcmp(name2,"int"))
    		{
    			val1+=2;
			}
			if(!strcmp(name2,"double"))
    		{
    			val1+=8;
			}
			if(!strcmp(name2,"float"))
    		{
    			val1+=4;
			}
			if(!strcmp(name2,"char"))
    		{
    			val1+=1;
			}
		}
	}
}
printf("\n %d bytes required \n",val1);
if(val>val1)
printf("\n Within prescribed limit.\n");
else
printf("\n Not within prescribed limit.\n");
	fclose(fp);
}
