/* WAP insert the marks of phy, chem. And maths and find out the 
total and percentage */
#include<stdio.h>
int main()
{
    float m1,m2,m3,total,percentage;
    printf("Enter physics score :");
    scanf("%f",&m1);
    printf("Enter maths score :");
    scanf("%f",&m2);
    printf("Enter chemistry score :");
    scanf("%f",&m3);
    total=m1+m2+m3;
    printf("Total marks scored : %f",total);
    percentage = total/3;   //each subject was of 100 marks 
    printf("Percentage obtained : %f",percentage);
    return 0;

}