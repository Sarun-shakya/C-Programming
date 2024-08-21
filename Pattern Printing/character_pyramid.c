//C Program To Print Character Pyramid Pattern
/*
A 
B B 
C C C 
D D D D 
E E E E E
*/

#include<stdio.h>
int main(){
	char ch = 'A';
	int i,j;
	int n = 5;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("%c",ch);
			}
			printf("\n");
			ch++;
	}
	return 0;
}
