#include <stdio.h>

void main()
{
    char c[50];
    int i;
    printf("Enter the text\n");
    gets(c);
    for(i=0; c[i]!='\0'; i++)
    {
        if((c[i]=='\t') || (c[i]==' ') )
            printf(" ");

        while((c[i]=='\t') || (c[i]==' '))
            i++;

        printf("%c",c[i]);
    }
}
