#include <stdio.h>

int main()
{
    char word[100];

    gets(word);

    int x=0;
    while (word[x] != '\0')
    {
        if (word[x] == ' ' || word[x] == '\t') {
            printf(" ");
            x++;
            while (word[x] == ' ' || word[x] == '\t') x++;
        }
        printf("%c", word[x]);
        x++;
    }
    printf("\n");
}
