//C Program to Calculate the Factorial of a Number Using Recursion 

#include<stdio.h>

int fact(n){
	if(n <= 1){
		return 1;
	}
	else{
		return n * fact(n-1); //recursion function
	}
}
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("The factorial of %d is %d",n,fact(n));
	return 0;
}
