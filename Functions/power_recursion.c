//C Program to Calculate Power Using Recursion

#include<stdio.h>
int power(int num, int n){
	if(n == 0 ){
		return 1; // return 1 if value of power is 1
	}
	else{
		return num * power(num, n-1); // recursive function
	}
}
int main(){
	int num,n;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("Enter power: ");
	scanf("%d",&n);
	printf("The power of %d raised to %d is %d\n", num, n, power(num, n));
	return 0;
}
