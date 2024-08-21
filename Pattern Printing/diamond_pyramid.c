// Diamond Pyramid of ” * ” & Numbers
/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include<stdio.h>
int main(){
	int i, j, k, n;
	n = 5;
	// upper part
	for(i = 1; i <= n; i++){
		//spaces
		for(j = 1; j <= (n-i); j++){
			printf("  ");
		}
		//stars
		for(k = 1; k < 2*i; k++){
			printf("* ");
		}
		printf("\n");
	}
	
	//lower part
	for(i = (n-1); i >= 1; i--){
		//spaces
		for(j = 1; j <= n-i; j++){
			printf("  ");
		}
		//stars
	  	for( k = 1; k < 2*i; k++){
	  		printf("* ");
		  }
		printf("\n");
	}
	return 0;
}
