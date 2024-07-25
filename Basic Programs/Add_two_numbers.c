//C Program to Add Two Numbers

#include<stdio.h>

// Function to add two numbers
void Add() {
    int num1, num2;
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    int sum = num1 + num2;
    // Display the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
}

int main() {
    // Call the Add function with uninitialized variables num1 and num2
    Add();
    return 0;
}
