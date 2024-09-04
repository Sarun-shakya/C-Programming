// C Program to Find All Roots of a Quadratic Equation

#include<stdio.h>
#include<math.h>

//function to find roots
void allRoots(int a, int b, int c){
	int d,root1,root2,real,imaginary;
	d = pow(b,2) - 4*a*c;
	if(d == 0){
		root1 = -b/2*a;
		printf("Roots are real and the same\n");
		printf("The roots are %d and %d\n",root1,root1);
	}
	else if(d > 0){
		root1 = (-b + sqrt(d))/(2*a);
		root2 =  (-b - sqrt(d))/(2*a);
		printf("Roots are real and different\n");
		printf("The roots are %d and %d\n",root1,root2);
	}
	else{
		real = -b/2*a;
		imaginary = sqrt(-d)/2*a;
		printf("Roots are complex\n");
		printf("The root1 = %d + %di\n",real,imaginary);
		printf("The root1 = %d - %di\n",real,imaginary);
	}
}

int main(){
	int a,b,c;
	printf("Enter all the cofficeints of quadratic quation: ");
	scanf("%d%d%d",&a,&b,&c);
	allRoots(a,b,c);
	return 0;
}
