//C Program to Print Hollow Star pyramid 
/*
      *
    *   *
   *     *
  *       *
 ***********
*/

#include<stdio.h>
int main(){
	int i, j, n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		for( j = i; j < n; j++){
			printf(" ");
		}
		for( j = 1; j <= (2*i-1); j++){
			if(j == 1 || i == n || j == (2*i-1)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
