//C Program to Display Prime Numbers Between Two Intervals Using Functions 

#include<stdio.h>

void primeNums(int num1, int num2){
	int i,j,count = 0;
	for(i = num1; i <= num2; i++){
		for(j = 1; j <= i; j++ ){
			if(i%j == 0){
				count++;
			}
		}
		if(count == 2){ // prime numbers has exactly two divisors
			printf("%d ",i);
		}
		count = 0;
	}
}
int main(){
	int num1, num2;
	printf("Enter first interval: ");
	scanf("%d",&num1);
	printf("Enter second interval: ");
	scanf("%d",&num2);
	printf("The prime numbers between %d and %d are ",num1,num2);
	primeNums(num1,num2);
	return 0;
}
