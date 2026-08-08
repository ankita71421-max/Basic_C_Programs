/*Write a program to create a function that find factorial of 
a number with using recursion*/
#include <stdio.h>
long long factorial(int n)
    {
        if(n == 0 || n == 1)
            {
                return 1;   
            }
        else
            {
                return n * factorial(n - 1);  
            }
    }

int main()
    {
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        if(num < 0)
            {
                printf("Factorial of negative number is not possible.\n");
            }
        else
            {
                printf("Factorial of %d = %lld\n", num, factorial(num));
            }

        return 0;
    }
