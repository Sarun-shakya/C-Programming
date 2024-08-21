//C Program to Generate Multiplication Table 

#include<stdio.h>
int main(){
	int n,i; //multiplication table of n
	int result,range;
	printf("Enter the number whose multiplication table you wanna see: ");
	scanf("%d",&n);
	printf("Enter the range: ");
	scanf("%d",&range);
	for( i = 1; i <= range; i++){
		result = i*n;
		printf("%d X %d = %d\n",n,i,result);
	}
	return 0;
}
