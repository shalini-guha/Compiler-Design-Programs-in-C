/* WAP to take string as input, print vowels and consonants separately with the position at which they appear in the string.
	Author: Shalini Guha
	Version : 1.0
	Date : 7.11.18 */
#include<stdio.h>
#include<string.h>
int main()
{
	char line[50],vowel[50],cons[50]; 
	int i,j=0,j1=0,k1=0,k=0,pos[50],pos1[50];
	gets(line);
	for(i=0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            vowel[j++]=line[i];
            pos[j1++]=i;
            
        }
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            cons[k++]=line[i];
            pos1[k1++]=i;
        }
    }
    printf("\n The vowels are:\n");
	for(i=0;i<j;i++)
	{
		printf("\n%c at %d",vowel[i],pos[i]);
	}
		printf("\n The consonants are:\n");
	for(i=0;i<k;i++)
	{
		printf("\n%c at %d",cons[i],pos1[i]);
	}
}
