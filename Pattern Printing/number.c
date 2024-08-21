//C Program to Print Number Pattern
/*
    1
   232
  34543
 4567654
567898765
*/

#include <stdio.h>

int main() {
    int i, j, n, num;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        
        // Print the increasing part of the pattern
        num = i;
        for (j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
        }
        
        // Print the decreasing part of the pattern
        num -= 2;
        for (j = 1; j < i; j++) {
            printf("%d", num);
            num--;
        }
        printf("\n");
    }
    
    return 0;
}
