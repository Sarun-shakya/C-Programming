//Program to Print Alphabets From A to Z Using Loop

#include<stdio.h>
int main(){
	char i;	
	printf("Alphabets from A to Z are ");
	for( i = 'A'; i <= 'Z'; i++){
		printf("%c\t",i);
	}
	return 0;
}


//Using the ASCII valuue
//#include<stdio.h>
//int main(){
//	int i;	
//	for( i = 65; i <= 90; i++){
//		printf("%c\n",i);
//	}
//	return 0;
//}
