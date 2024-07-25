// C program to convert fahrenheit to celsius

#include<stdio.h>

// Function to convert Fahrenheit to Celsius
void converter() {
    float f, c; // Declare variables for Fahrenheit and Celsius
    printf("Enter the value in Fahrenheit:\n"); 
    scanf("%f", &f); 
    c = (f - 32) * 5 / 9; // Convert Fahrenheit to Celsius using the formula
    printf("%.2f Fahrenheit = %.2f Celsius\n", f, c); 
}

int main() {
    converter(); // Call the converter function
    return 0; 
}