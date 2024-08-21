//C Program to Find Factorial of a Number

#include<stdio.h>
int main(){
	int n,i;
	int res;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		res = res * i;
	}
	printf("The factorial of %d is %d",n,res);
	return 0;
}

// 5! = 5x4x3x2x1
