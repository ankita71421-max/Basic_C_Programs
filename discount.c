/* While purchasing certain items, a discount of 10 % is offered if the quantity purchased
is more then 1000. The quantity and price per item are input 
through the keyboard ,WAP to calculate the total expenses*/
#include<stdio.h>
int main()
{
    int q1,q2,q3,q4,q5;
    float p1,p2,p3,p4,p5,price,discount,expense;
    
    printf("Price of Lays chips and amount ordered :");
    scanf("%f  %d",&p1,&q1);
    printf("\nPrice of Blue ball pint pen and amount ordered :");
    scanf("%f  %d",&p2,&q2);
    printf("\nPrice of classmate notebook and amount ordered :");
    scanf("%f  %d",&p3,&q3);
    printf("\nPrice of classmate practical file and amount ordered :");
    scanf("%f  %d",&p4,&q4);
    printf("\nPrice of oreo biscuit and amount ordered :");
    scanf("%f  %d",&p5,&q5);
    price = (p1*q1)+(p2*q2)+(p3*q3)+(p4*q4)+(p5*q5);
    printf("\nTOTAL AMOUNT : Rs.%.2f",price);
    if(price>1000)
        {
    discount = (10 * price)/100;
    printf("\nDISCOUNT : Rs.%.2f",discount);
    expense = price-discount;
    printf("\nTotal expense after discount : Rs.%.2f",expense);
        }
    else
        {
        printf("\nNo discount");   
        }
    return 0;
}