//C Program to Find G.C.D Using Recursion

#include<stdio.h>

int gcd(int a, int b){
	int result;
	//check the largest one
	if(a > b){
		result = a;
	}
	else{
		result = b;
	}
	//finding GCD
	while( result > 0){
		if(a%result == 0 && b%result  == 0 ){
			break;
		}
		result--;
	}
	return result;
}
int main(){
	int a,b;
	printf("Enter any two numbers: ");
	scanf("%d%d",&a,&b);
	printf("The gcd of %d and %d is %d",a,b,gcd(a,b));
	return 0;
}
