#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    char ch,ch1;
    char name1[100];
     char name2[100]; char name3[100];char name4[100];char name5[100];
    int val,val2,val1,val3,flag=0;
    fp = fopen("one.txt", "r");
 
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
    	puts(name1);
    	val = strcmp(name1,"include<stdio.h>");
    	if(!val)
    	{
    		fscanf(fp, "%s", name2);
    		puts(name2);
    		val1 = strcmp(name2,"int");
    		if(!val1)
    		{
    			fscanf(fp, "%s", name3);
    			puts(name3);
    			val2 = strcmp(name3,"main(){");
				if(!val2)
				{
					while((ch1 = getc(fp))!='}')
					{
						fscanf(fp, "%s", name4);
    					puts(name4);
    					val3 = strcmp(name4,"return");
    					if(!val3)
    					{
    						printf("} \n Valid Program \n");
    						exit(1);
						}
					}
				}
			}
		}
		else
    	printf("\n Invalid Program \n");
	}
}						
	fclose(fp);
}
