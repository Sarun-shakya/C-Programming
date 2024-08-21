//C Program to Print Full Pyramid Pattern of Numbers
/*
        1 
      2 2 2 
    3 3 3 3 3 
  4 4 4 4 4 4 4 
5 5 5 5 5 5 5 5 5 
*/

#include<stdio.h>
int main(){
	int i, j, k;
	int n = 5;
	for(i = 1; i <= n; i++){
		//spaces
		for(j = 1; j <= (n-i); j++){
			printf(" ");
		//numbers
		}
		for(k = 1; k < i*2; k++){
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
