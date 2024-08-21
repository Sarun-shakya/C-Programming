//C Program to Calculate Sum of Natural Numbers 

#include<stdio.h>
int main(){
	int n,i;
	int sum = 0;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		sum += i;
	}
	printf("The sum to natural number upto %d is %d",n,sum);
	return 0;
}
