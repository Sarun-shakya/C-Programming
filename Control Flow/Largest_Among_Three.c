//C Program to Find Largest Number Among Three Numbers

#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter the value of first number: ");
	scanf("%d",&num1);
	printf("Enter the value of second number: ");
	scanf("%d",&num2);
	printf("Enter the value of third number: ");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3){
		printf("%d is the largest number",num1);
	}
	else if(num2>num3){
		printf("%d is the largest number",num2);
	}
	else{
		printf("%d is the largest number",num3);
	}
	return 0;
	
}
