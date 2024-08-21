//Reverse Number Program in C
#include<stdio.h>
int main()
{
	int num,rev_num;
	printf("Enter any number: ");
	scanf("%d",&num);
	while(num > 0){
		rev_num = (rev_num*10) + (num%10); // 0 + remainder
		num = num/10; // numbers last digit will be elimintaed
	}
	printf("The reversed number is %d",rev_num;
	return 0;
}
