//C Program to Print Pascal’s Pattern Triangle Pyramid 
/*
           1
         1   1
       1   2   1
     1   3   3   1
   1   4   6   4   1
*/

#include<stdio.h>
int main(){
	int i,j,space,n;
	int coef = 1;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	//printing spaces
	for( i = 0; i < n; i++){
		for( space = 1; space <= n -i; space++){
			printf("  ");
		}
		//printing numbers
		for( j = 0; j <= i; j++){
			if(j == 0 || i == 0){
				coef = 1;
			}
			else{
				coef = coef*(i-j+1)/j;
			}
			printf("%4d",coef);
		}
		printf("\n");
	}
	return 0;
}
