/*WAP to create a function to swap two numbers with concept of 
call by value and call by reference.*/
#include <stdio.h>

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping by call by value:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

void swapByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping by call by reference:\n");
    printf("a = %d\n", *a);
    printf("b = %d\n", *b);
}

int main()
{
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    swapByValue(a, b);          
    swapByReference(&a, &b);    

    return 0;
}
