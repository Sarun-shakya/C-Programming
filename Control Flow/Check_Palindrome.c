//C Program to Check Whether a Number is a Palindrome or Not 

#include<stdio.h>
int main(){
	int number, reminder, result = 0, orgNum;
	printf("Enter the number: ");
	scanf("%d",&number);
	orgNum = number;
	while( orgNum != 0){
		reminder = orgNum % 10;
		result = result *10 + reminder;
		orgNum /= 10;	
	}
	if(number == result){
		printf("%d is a palindrome number",number);
	}
	else{
		printf("%d is not a palindrome number",number);
	}
	return 0;
}
