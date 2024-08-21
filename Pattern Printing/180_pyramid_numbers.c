//Full Pyramid of Numbers  in 180 Degree
/*
    1
    22
    333
    4444
	55555
    4444
    333
    22
    1
*/

#include<stdio.h>
int main(){
	int n, i, j;
	n = 10;
	//printing first part
	for( i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("%d",i);
		}
		printf("\n");
	}
	
	// printing second part
	for(i = n - 1; i >= 1; i--){
		for(j = 1; j <= i; j++ ){
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
