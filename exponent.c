/*WAP to create a function to find out X^Y for X and Y.*/

#include <stdio.h>
long long power(int x, int y)
    {
        long long result = 1;
        int i;

        for(i = 1; i <= y; i++)
            {
                result = result * x;
            }

        return result;
    }

int main()
    {
        int x, y;

        printf("Enter base (X): ");
        scanf("%d", &x);

        printf("Enter exponent (Y): ");
        scanf("%d", &y);

        printf("%d^%d = %lld\n", x, y, power(x, y));

        return 0;
    }
