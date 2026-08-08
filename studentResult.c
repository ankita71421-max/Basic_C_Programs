/*The marks obtain by in 5 different subjects are input
through keyboard .the students gets a division as per the
following rules Percentage between 50 and 59–First Division 
Percentage between 40 and 49–Second Division 
Percentage less
than 40-Fail*/
#include<stdio.h>
int main()
    {
       float m1,m2,m3,m4,m5,marks,percentage;
       printf("Maths score :");
       scanf("%f",&m1);
       printf("Science score :");
       scanf("%f",&m2);
       printf("Social Science :");
       scanf("%f",&m3);
       printf("English score :");
       scanf("%f",&m4);
       printf("Hindi score :");
       scanf("%f",&m5);
       marks=m1+m2+m3+m4+m5;
       percentage=(m1+m2+m3+m4+m5)/5; //assuming max. marks of each subject as 100
       printf("Total marks scored : %.2f",marks);
       printf("\nPercentage scored : %.2f",percentage);
       if(percentage>=50 && percentage<=59)
         printf("Pass by 1st division");
       else if(percentage>=40 && percentage<=49)
         printf("Pass by 2nd division");
       else
         printf("FAIL");
       return 0;  


    }
