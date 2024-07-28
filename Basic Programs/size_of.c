// C Program to Find the Size of int, float, double and char

#include<stdio.h>

int main(){
    int integerType;
    char charType;
    float floatType;
    double doubleType;
    printf("size of int is %ld \n", sizeof(integerType));
    printf("size of char is %ld \n", sizeof(charType));
    printf("size of float is %ld \n", sizeof(floatType));
    printf("size of double is %ld \n", sizeof(doubleType));
    return 0;
}

