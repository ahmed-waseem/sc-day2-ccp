#include <stdio.h>

int main()
{
    int gcd, lcd, num1, num2;
    int temp, temp1, temp2;

    printf("Please enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    temp1 = num1;
    temp2 = num2;

    while (temp2 != 0)
    {
        printf("Current values are num1=%d, num2=%d\n", temp1, temp2);
        temp = temp2;
        temp2 = temp1 % temp2;
        temp1 = temp;
    }

    gcd = temp1;
    printf("The gcd is %d\n", gcd);

    lcd = (num1 * num2)/gcd;
    printf("The lcd is %d\n", lcd);
}
