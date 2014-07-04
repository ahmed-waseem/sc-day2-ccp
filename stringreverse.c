#include <stdio.h>
#include <string.h>
void  reverse(char s[]);

void main()
{
    char s[10];
    int i;
    printf("Enter String : ");
    scanf("%s", s);
    printf("The original string is=%s\n", s);
    reverse(s);
}

void  reverse(char s[])
{
    char temp;
    int i, j=0;
    int len = strlen(s) - 1;

    for(i=0; i<=len/2; i++)
    {
        temp = s[i];
        s[i] = s[len-i];
        s[len-i] = temp;
    }
    printf("The reversed string is = %s\n", s);
}
