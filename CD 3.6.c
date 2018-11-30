#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void replaceAll(char *str, const char *oldWord, const char *newWord)
{
    char *pos, temp[1000];
    int index = 0;
    int owlen;

    owlen = strlen(oldWord);
    /*
     * Repeat till all occurrences are replaced. 
     */
    while ((pos = strstr(str, oldWord)) != NULL)
    {
        // Bakup current line
        strcpy(temp, str);

        // Index of current found word
        index = pos - str;

        // Terminate str after word found index
        str[index] = '\0';

        // Concatenate str with new word 
        strcat(str, newWord);
        
        // Concatenate str with remaining words after 
        // oldword found index.
        strcat(str, temp + index + owlen);
    }
}
int main() 
{ 
   FILE *fp3; 
   FILE *fp4,*fp1,*fp2; char word[100],word1[100];
   char c,c1,c2; 
   char buffer[1000];
   fp4 = fopen("file1.txt", "r"); 
   if (fp4 == NULL) 
   { 
         puts("Could not open files"); 
         exit(0); 
   }   
   while ((c = fgetc(fp4)) != EOF)
   {	
   		fscanf(fp4,"%s",word);
   		fp3 = fopen("file2.txt", "r+");
		if (fp3 == NULL) 
   		{ 
         puts("Could not open files"); 
         exit(0); 
   		}   
  		while ((c1 = fgetc(fp3)) != EOF)
   		{   
   			fscanf(fp3,"%s",word1);
   			if(!strcmp(word,word1))
			{ 
//				replaceAll(buffer, word1, "#");
//				fputs(buffer, fp3);
			puts(word1);
   			}
		}
		fclose(fp3); 
		 		
  }
   fclose(fp4); 
   fp1 = fopen("file1.txt", "r"); 
   fp2 = fopen("file2.txt", "r"); 
   fp3 = fopen("file3.txt", "w"); 
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL) 
   { 
         puts("Could not open files"); 
         exit(0); 
   } 
  
   while ((c = fgetc(fp1)) != EOF) 
      fputc(c, fp3); 
  
   while ((c = fgetc(fp2)) != EOF) 
      fputc(c, fp3); 
  
   printf("Merged file1.txt and file2.txt into file3.txt");  
   fclose(fp1); 
   fclose(fp2); 
   fclose(fp3); 
  
  
   return 0; 
} 
