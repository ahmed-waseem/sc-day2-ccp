#include <stdio.h>
#include <limits.h>

inline void nextInt(int& res)
{
    register char ch;
    res = 0;
    do
    {
        ch = getchar_unlocked();
    }
    while(ch < 33);
    if(ch == '-')
    {
        ch = getchar_unlocked();
        do
        {
            res = res * 10 - ch + '0';
            ch = getchar_unlocked();
        }
        while(ch > 32);
    }
    else
    {
        do
        {
            res = res * 10 + ch - '0';
            ch = getchar_unlocked();
        }
        while(ch > 32);
    }
}

inline void nextUInt(int& res)
{
    register char ch;
    res = 0;
    do
    {
        ch = getchar_unlocked();
    }
    while(ch < 33);
    do
    {
        res = res * 10 + ch - '0';
        ch = getchar_unlocked();
    }
    while(ch > 32);
}

int main()
{
    printf("%d\n", sizeof(int) * 8);

    int x = -1, y=0;

    while(x)
    {
        x = x << 1;
        y++;
    }

    printf("%d\n", y);

    printf("%d\n", __WORDSIZE);

}

