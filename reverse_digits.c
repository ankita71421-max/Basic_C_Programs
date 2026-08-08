/*WAP to reverse an
integer of any length e.g. 987324 is converted to 423789.*/
#include<stdio.h>
int main()
    {
        int n, rev = 0, digit;
        printf("Enter an integer: ");
        scanf("%d", &n);
        while(n != 0)
            {
                digit = n % 10;  //extracting last digit        
                rev = rev * 10 + digit;  // reversing digit
                n = n / 10;    //removing last digit         
            }
        printf("Reversed number = %d\n", rev);
        return 0;
    }