/*Given two integer 20 and 10 , write a program to add
and subtract these numbers and show output as 20+10 = 30, and
20-10 =10 */
#include<stdio.h>
int main()
{
    int a=20,b=10,c,d;
    c=a+b;
    d=a-b;
    printf("%d+%d=%d",a,b,c);
    printf("\n%d-%d=%d",a,b,d);
    return 0;
}