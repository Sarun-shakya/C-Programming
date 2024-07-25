// C program to calculate the compound interest

#include<stdio.h>
#include<math.h> 
// Function to calculate compound interest
void compIntr() {
    float p, r, a, CI; 
    int n, t; 
    printf("Enter the principal 'p':\n");
    scanf("%f", &p); 
    printf("Enter the rate 'r':\n");
    scanf("%f", &r);
    printf("Enter the number of times interest is compounded per year 'n':\n");
    scanf("%d", &n); 
    printf("Enter the time period 't':\n");
    scanf("%d", &t); 
    a = p * pow(1 + r / 100 / n, n * t); // Convert rate to decimal and compute amount
    // Calculate the compound interest
    CI = a - p; // Subtract the principal from the total amount
    // Display the compound interest
    printf("The value of compound interest is %.2f\n", CI);
}

int main() {
    compIntr(); // Call the function to perform the calculation
    return 0; 
}
