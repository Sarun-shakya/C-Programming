//C Program to Check Whether a Character is Vowel or Consonant 

#include<stdio.h>
int main(){
	char ch;
	printf("Enter any character: ");
	scanf("%c",&ch);
	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
		printf("%c is vowel letter",ch);
	}
	else{
		printf("%c is consonant letter",ch);
	}
	return 0;
}
