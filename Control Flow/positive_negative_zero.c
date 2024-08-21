//C Program to Check Whether a Number is Positive, Negative, or Zero

#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	if(n>0){
		printf("%d is positive",n);
	}
	else if (n<0){
		printf("%d is negative",n);
	}
	else{
		printf("%d is zero",n);
	}
	return 0;
}
