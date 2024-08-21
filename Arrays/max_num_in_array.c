//C Program to Find the Largest Element in an Array

#include<stdio.h>
int main(){
	int arr[6] = {19, 58, 388, 89, 67, 90};
	int i, max=0;
	for(i = 0; i < 6; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	printf("The maximum number in the array is %d",max);
	return 0;
}
