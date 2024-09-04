// C Program to Find Sum of Natural Numbers using Recursion

#include<stdio.h>

int sum(int n){
	if(n == 0){
		return 0;
	}
	else{
		return n + sum(n-1);
    }
}
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int result = sum(n);
	printf("The sum of natural numbers upto %d is %d",n,result);
	return 0;
}


