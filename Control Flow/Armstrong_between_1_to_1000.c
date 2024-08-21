//C Program to Display Armstrong Numbers Between 1 to 1000

#include<stdio.h>
#include<math.h>
int main(){
	int number, orgNum, reminder, result = 0, n;
	for(number = 1; number <= 1000; number++){
	//Reset variablle for each new iteration
	result = 0;
	reminder = 0;
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
		printf("%d\t",number);	
	}
}
	return 0;
}
