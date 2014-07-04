#include <stdio.h>
#include <string.h>

int matchany(char s1[], char s2[]);

void main()
{
    char str1[20], str2[20];
    int x;
    printf("\nEnter first String:");
    scanf("%s", str1);
    printf("\nEnter second String:");
    scanf("%s", str2);
    x=matchany(str1, str2);
    if(x == -1)
        printf("No character matching\n");
    else
        printf("The position is %d and charecter is %c\n", x+1, str2[x]);
}

int matchany(char s1[10], char s2[10])
{
    int i, j;
    for(i=0; s1[i]!='\0'; i++)
    {
        for(j=0; s2[j]!='\0'; j++)
        {
            if(s1[i] == s2[j])
                return j;
        }
    }
    return -1;
}
