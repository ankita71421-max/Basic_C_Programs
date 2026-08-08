/*Given the values of three variables a,b and c ,write a
program to compute the value of x , where x=a/b-c */
#include<stdio.h>
int main()
{
   float a,b,c;
   float x;
   printf("Enter value of a :");
   scanf("%f",&a);
   printf("Enter value of b :");
   scanf("%f",&b);
   printf("Enter value of c :");
   scanf("%f",&c);
   x=a/b-c;
   printf("Value of x : %f" , x);
   return 0;
}
