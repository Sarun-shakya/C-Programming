//C Program to Make a Simple Calculator
/*First number: 10
Second number: 5
Operator: +
Output:
Result: 15
Explanation: 10 + 5 = 15*/

#include<stdio.h>
int main(){
	int a,b,result;
	char op;
	printf("Enter the operator:");
	scanf("%c",&op);
	printf("First number: ");
	scanf("%d",&a);
	printf("second number: ");
	scanf("%d",&b);
	switch (op)	{
		case '+':
			result = a+b;
			break;
		case '-':
			result = a-b;
			break;
		case '*':
			result = a*b;
			break;
		case '/':
			result = a/b;
			break;
		default:
			printf("You entered the wrong operator!!!");
	}
	printf("your result is %d ",result);
	return 0;
}
