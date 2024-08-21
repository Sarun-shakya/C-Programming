//C Program to Print Inverted Pyramid 
/* * * * * * * * * * 
   * * * * * * * 
     * * * * * 
       * * * 
         *   */
         
#include<stdio.h>
int main(){
	int i,j,k,n;
	n = 5;
	for(i = n; i >= 1; i--){
		//spaces
		for(j = (n - i); j >= 1; j--){
			printf("  ");
		}
		for(k = 1; k < 2*i; k++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
