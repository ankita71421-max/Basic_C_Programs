/*Generate the first 20 terms of Fibonacci series.*/
#include<stdio.h>
int main()
    {
        int a = 0,b=1, c,n=18,i;
        c = a+b;
        printf("%d\n",a);
        printf("%d\n",b);
        for(i=1;i<=n;i++)
            {
                c = a+b;
                a = b;
                b = c;
                printf("%d\n",c);
            }
        return 0;

    }