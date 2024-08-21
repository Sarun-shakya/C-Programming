//C Program to Print Fibonacci Series

#include<stdio.h>
int main(){
	int i,result;
	int a = 0, b = 1;
	for(i = 1; i <= 10; i++){
		result = a + b;
		printf("%d\n",result);
		a = b;
		b = result;
	}
	return 0;
}
