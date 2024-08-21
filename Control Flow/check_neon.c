//C Program to Check whether the input number is a Neon Number

#include<stdio.h>
int main(){
	int number, reminder, result = 0, square;
	printf("Enter the number: ");
	scanf("%d",&number);
	//Square of a number
	square = number*number;
	//Checking for neon
	while(square != 0){
		reminder = square % 10;
		result += reminder;
		square /= 10;
	}
	if(result == number){
		printf("%d is a neon number",number);
	}
	else{
		printf("%d is not a neon number",number);
	}
	return 0;
}
