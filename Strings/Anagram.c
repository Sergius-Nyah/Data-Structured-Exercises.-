/* Checks if two strings are anagrams of one another
   Conditions ; 
   - Thesame Length
   - Contain thesame number of similar characters.
                                                    */
/***Algorithm
   - Convert strings to lowercase using tolower()
   - Compare String lengths, 
   - Sort both strings using the bubble sort procedure
   - Compare string content
   - End...
***/
#include <stdio.h>
#include<string.h>
#include<ctype.h>

void lower(char str1[], char str2[]) // Converts strings to lower case
{
    for(int i=0;i<strlen(str1);i++)
    {
        str1[i] = tolower(str1[i]);
    }
       for(int i=0;i<strlen(str2);i++)
    {
        str2[i] = tolower(str2[i]);
    }
}
void bubble_sort(char str1[], char str2[])
{
    for(int i=0;i<strlen(str1)-1;i++)
    {
        for(int j=0;j<strlen(str1)-1-1;j++)
        {
        if(str1[j]> str1[j+1])
        {
            int temp = str1[j];
            str1[j]= str1[j+1];
            str1[j+1]= temp;
        }
        if(str2[j]> str2[j+1])
        {
            int temp = str2[j];
            str2[j]= str2[j+1];
            str2[j+1]= temp;
        }
        }
    }
}
void is_anagram(char str1[], char str2) // Finally checks if both strings are anagrams by comparing them
{
    if(strcmp(str1,str2)==0)
    printf(" %s and %s are Anagrams!\n", str1, str2);
    else
    printf("%s and %s are Not Anagrams!\n", str1, str2);
}

int main(int argc, char **argv)
{
    char str1[10], str2[10];
    printf("Enter first string:\n");
    scanf("%s", str1);
    printf("Enter second string:\n");
    scanf("%s", str2);
    
    lower(str1, str2);
    bubble_sort(str1, str2);
    is_anagram(str1, str2);
    
return 0;
}

