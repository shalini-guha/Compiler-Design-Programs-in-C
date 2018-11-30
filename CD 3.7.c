#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp,*fptr;
    char ch,ch1;
    char name1[100];
     char name2[100]; char name3[100];char name4[100];char name5[100];
    int val,val2,val1,val3,flag=0;
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
    	fscanf(fp, "%s", name1);
    	if(!strcmp(name1,"int") || !strcmp(name1,"double") || !strcmp(name1,"float") || !strcmp(name1,"char"))
    	{
    		while(1)
    		{
    			fptr = fp;
    			fscanf(fp, "%s", name2);
    			
    			if(!strcmp(name2,";"))
    			{
    				break;
    			}
    			else
				{
    				if(!strcmp(name2,"="))
    				{
    				flag=1;
    				exit(1);
					}
				}
				
    		}
			}
		}
	}
			if(flag==0)
    		{
    				fseek(fp, -1, SEEK_END);
					fprintf(fp,"%s", " = 0;");
			}
	fclose(fp);
}
