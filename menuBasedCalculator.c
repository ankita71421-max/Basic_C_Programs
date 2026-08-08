/*WAP to create a menu base simple calculator (Using switch case) giving the following
options to the user Sum , Product, Difference, Division,*/

#include<stdio.h>
int main()
    {
        double a, b;
        int choice;

        printf("Enter a and b : ");
        scanf("%lf %lf", &a, &b);

        
            printf("\n----MENU BASED CALCULATOR----");
            printf("\n1. ADDITION");
            printf("\n2. SUBTRACTION");
            printf("\n3. MULTIPLICATION");
            printf("\n4. DIVISION");
            printf("\n5. EXIT");

            printf("\nEnter your choice: ");
            scanf("%d", &choice);

            switch(choice) 
                {
                    case 1:
                        printf("Result = %.2lf\n", a+b); 
                        break;
                    case 2: 
                        printf("Result = %.2lf\n", a-b); 
                        break;
                    case 3: 
                        printf("Result = %.2lf\n", a*b); 
                        break;
                    case 4:
                        if(b != 0)
                            printf("Result = %.2lf\n", a/b);
                        else
                            printf("Division by 0 not possible\n");
                        break;
                    case 5:
                        printf("Exiting the program....\n");
                        break;
                        
                    default: 
                        printf("Invalid Choice....\n"); 
                        break;
                } 
            return 0;
            }
    

