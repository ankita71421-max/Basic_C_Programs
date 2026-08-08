//Accept the radius of a circle and display its area.
#include<stdio.h>
int main()
{
    float r,area;
    printf("Enter radius :");
    scanf("%f",&r);
    area = 3.1415*r*r;
    printf("\nArea of the circle :%f ",area);
}