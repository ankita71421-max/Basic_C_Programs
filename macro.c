/*WAP to show use of pre-processor directive and
 header file.*/

#include <stdio.h>   // header file for input/output functions
#define PI 3.14159    // pre-processor directive (macro definition)
float areaOfCircle(float radius)
{
    return PI * radius * radius;
}

int main()
{
    float r;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Area of circle = %.2f\n", areaOfCircle(r));

    return 0;
}
