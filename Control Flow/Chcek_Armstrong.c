//C Program to Check Armstrong Number

#include<stdio.h>
#include<math.h>
int main(){
	int number, orgNum, reminder, result = 0, n;
	//Taking input from the user
	printf("Enter the number: ");
	scanf("%d",&number);
	//Counting the digits in a number
	orgNum = number;
	n = 0;
	while(orgNum != 0){
		orgNum /= 10;
		n++;
	}
	//Chceking the Number for Armstrong
	orgNum = number;
	while(orgNum != 0){
		reminder = orgNum%10;
		result += pow(reminder,n);
		orgNum /= 10;
	}
	if(result == number){
		printf("%d is an Armstrong Number",number);
	}
	else{
		printf("%d is not an Armstrong Number",number);
	}
	return 0;
}
