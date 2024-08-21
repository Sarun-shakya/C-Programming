//WAP to print prime numbers to n

#include<stdio.h>
int main(){
	int n,i,j,count;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("the prime numbers upto %d is \n",n);
	for(i=1;j<=n;i++){
		count = 0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				count ++;
			}
		}
		if(count == 2){
		printf("%d ",i);
		}
	}
	return 0;
}
