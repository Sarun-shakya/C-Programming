//C program to  Sum of Fibonacci Numbers at Even Indexes up to N Terms 

#include<stdio.h>
int main(){
	int term1 = 0, term2 = 1, nxtTerm, n, i, result = 0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i = 2; i <= 2*n+1; i++){
		nxtTerm = term1 + term2;
		term1 = term2;
		term2 = nxtTerm;
		printf("%d\t",nxtTerm);
		if(i % 2 == 0){
			result += nxtTerm;
		}
	}
	printf("The sum of fibonacci numbers at even indexes up to %d terms is %d",n,result);
	return 0;
}
