/*If the basic salary is less then 1500, then hra =10 % of basic 
salary and da= 90 % of salary. If his basic salary is either 
equal to or above 1500,then hra = 500 and da = 98 % of basic 
salary,. If the emp salary is put through keyboard write a 
program to find his gross salary*/

#include<stdio.h>
int main()
{
     float basic_salary,hra,da,gross_salary;
     printf("Enter employee basic salary : ");
     scanf("%f",&basic_salary);
     if(basic_salary<1500)
        {
            hra = (10*basic_salary)/100;
            da =  (90*basic_salary)/100;
        }
     else
        {
           hra = 500;
            da =  (98*basic_salary)/100;
        }
         gross_salary = basic_salary + hra + da;
     printf("\nhra : %.2f",hra );
            printf("\nda : %.2f",da);
            printf("\nThe gross salary of employee is : %.2f",
            gross_salary);
   
    return 0;
}