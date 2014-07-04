#include <stdio.h>
#include <math.h>

int main()
{
    int i, sum=0, x, no, coef;

    printf("Enter the value of x :");
    scanf("%d", &x);

    printf("Enter the number of co-efficients : ");
    scanf("%d", &no);

    printf("Enter the co-efficients (in the order low-high) : ");
    for(i=0; i<no; i++) {
        scanf("%d", &coef);
        sum = (sum * x) + coef;
    }

    printf("The value using Horner's method is %d\n", sum);


}
