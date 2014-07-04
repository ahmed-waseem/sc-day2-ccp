#include <stdio.h>
#include <math.h>

int rightRot(unsigned int x, unsigned int y)
{
    unsigned int odd, i;
    unsigned int msb = 1 << 31;

    for(i=0; i<y; i++)
    {
        odd = 0;
        if (x % 2 != 0) odd = 1;
        x = x >> 1;
        if (odd == 1)
            x = x | msb;
    }

    return x;
}

int main()
{
    unsigned int x, y, result;

    printf("Please enter a number : ");
    scanf("%d", &x);

    printf("How to much to right-shift? ");
    scanf("%d", &y);

    result = rightRot(x, y);

    printf("The number shifted by %u is %u\n", y, result);
}
