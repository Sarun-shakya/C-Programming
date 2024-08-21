// Program to Reverse two Number
#include<stdio.h>
int main(){
	int a,b,temp;
	printf("Enter any two numbers: \n");
	scanf("%d%d",&a,&b);
	printf("The numbers before swapping is %d and %d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("The numbers after swapping is %d and %d\n",a,b);
	return 0;
}
