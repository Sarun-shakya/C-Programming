#include<stdio.h>

int isPrime(int n){
	int i;
	if(n <= 0){
		return 0;
	}
	for(i = 2; i <= n/2; i++){
		if(n%i == 0){
			return 0;
		}
		else{
			return 1;
		}
	}
}
int main(){
	int n, result = 0, i;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i = 1; i <= n/2; i++){
		if(isPrime(n) && isPrime(n - i)){
			printf("%d can be expressed as sum of two prime numbers %d and %d\n",n,i,n-i);
			result = 1;
		}
	}
	if(result == 0){
		printf("%d can not be expressed as sum of two prime numbers",n);
	}
	return 0;
}
