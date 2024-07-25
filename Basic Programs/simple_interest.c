//C Program to Find Simple Interest

#include<stdio.h>

// Function to calculate simple interest
void simIntr() {
    int p, t, r;
    printf("Enter the values of principal (p), time (t), and rate (r): ");
    scanf("%d%d%d", &p, &t, &r);
    // Calculate simple interest
    int  si = (p * t * r) / 100;
    // Display the calculated simple interest
    printf("The simple interest is %d\n", si);
}

int main() {
    // Call the function to calculate simple interest
    simIntr();
    return 0;
}
