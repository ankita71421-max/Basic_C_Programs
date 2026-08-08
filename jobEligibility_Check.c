/*Accept the age ,number of years of work experience and display either
“Eligible” or “Not eligible” after checking whether the age is 
less than 56 and the number of years of work experience is 
greater than 4*/
#include<stdio.h>
int main()
    {
        int age , years;
        printf("Enter candidate's age :");
        scanf("%d",&age);
        printf("Enter candidate's years of work experience :");
        scanf("%d",&years);
        if(age<56 && years>4)
            printf("Eligible");
        else
            printf("Not eligible");
        return 0;
        }