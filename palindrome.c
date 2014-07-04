#include <stdio.h>

int main()
{
    int num1, num2, rem, temp;

    printf("Please enter a number : ");
    scanf("%d", &num1);

    temp = num1;

    while(temp > 0) {
        rem = temp % 10;
        temp = temp / 10;
        num2 = (num2*10) + rem;
    }

    printf("The reversed number is %d\n", num2);

    if (num1 == num2)
        printf("The number is a palindrome!\n");
    else
        printf("The number is not a palindrome!\n");
}
