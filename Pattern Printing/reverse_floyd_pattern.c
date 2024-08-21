//C Program To Print Reverse Floyd’s Pattern
/*
15 14 13 12 11 
10 9 8 7 
6 5 4 
3 2 
1
*/

#include<stdio.h>
int main(){
	int i, j, n,num;
	n = 5;
	num = n*(n + 1)/2;
	for( i = n; i >= 1; i--){
		for(j = 1; j <= i; j++){
			printf("%d ",num);
			num--;
		}
		printf("\n");
	}
	return 0;
}
