//Prime Number Program in C

#include<stdio.h>
int main(){
	int n,count,i;
	printf("Enter a number to check prime or not: ");
	scanf("%d",&n);
	//check prime
	for(i=1;i<=n;i++){
			if(n%i==0){
				count ++;
			}
	}
	//print answer
	if(count == 2){
		printf("%d is a prime number",n);
	}
	else{
		printf("%d is not a prime number",n);
	}
	return 0;
}









