//C Program to Print a 2D Array

#include<stdio.h>
int main(){
	int i, j;
	//array initialization
	int arr[2][3] = {10, 20, 30, 40, 50, 60};
	//printing array
	for(i = 0; i < 2; i++){
		for( j = 0; j < 3; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
