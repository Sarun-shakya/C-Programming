//C Program to Swap Two Numbers

#include<stdio.h>

// Function to swap two integers
void swap() {
    int a, b;
    printf("Enter the value of a and b:\n");
    scanf("%d%d", &a, &b);
    printf("The numbers before swapping are %d and %d\n", a, b);
    // Temporary variable to hold the value of 'a'
    int temp = a;
    // Swap the values
    a = b;
    b = temp;
    // Display the numbers after swapping
    printf("The numbers after swapping are %d and %d\n", a, b);
}

int main() {
    // Call the swap function with uninitialized variables 'a' and 'b'
    swap();
    return 0;
}
