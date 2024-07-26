//C program to multiply two floating point numbers

#include<stdio.h>

int main(){
    float num1,num2;
    printf("enter any two floating point numbers:\n");
    scanf("%f%f",&num1,&num2);
    float result = num1*num2;
    printf("the multiplication of %f and %f is %.2f",num1,num2,result);
    return 0;
}