/* WAP to print following patterns
                     * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 

          1 
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9

*/

#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
