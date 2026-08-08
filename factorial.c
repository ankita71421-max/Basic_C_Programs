/*Accept a number and WAP to calculate factorial of 
  given number*/
#include<stdio.h>
int main()
    {
        int n,i;
        long long int factorial = 1;
        printf("Enter the no. :");
        scanf("%d",&n);
        if(n<0)
            printf("Factorial of negative no. is not possible");
        else if(n==0)
            printf("Factorial of 0 is 1");
        else
            {
                for(i=n;i>=1;i--)
                    {
                        factorial = factorial*i;
                    }
                printf("\nFactorial of %d = %lld",n,factorial);
            }
        return 0;    
    }