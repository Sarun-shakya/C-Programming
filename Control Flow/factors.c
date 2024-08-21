//C Program to Find All Factors of Number

#include<stdio.h>
int main(){
	int num,i;
	printf("Enter the number to find factors: \n");
	scanf("%d",&num);
	printf("The factors of %d are\n",num);
	for(i = 1; i <= num; i++){
		if(num % i == 0){
			printf("%d\n",i);
		}
	}
	return 0;
}

