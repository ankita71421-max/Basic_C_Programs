/* Accept a temperature in Fahrenheit, covert it into Celsius
using the formula Celsius = 5 * (Fahrenheit – 32)/9 and display 
in the format Temperature in Celsius = <result> */
#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter the temperature in fahrenheit : ");
    scanf("%f",&F);
    C = 5 * (F-32)/9;
    printf("Temperature in Celcius = <%f>",C);
    return 0;
}