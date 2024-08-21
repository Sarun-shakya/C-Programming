//C Program to Display Prime Numbers Between Intervals

#include<stdio.h>
int main(){
	int i,j,count,intr1,intr2;
	printf("Enter the  interval: ");
	scanf("%d%d",&intr1,&intr2);
	printf("the prime numbers from %d to %d  is \n",intr1,intr2);
	for(i=intr1;j<=intr2;i++){
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
