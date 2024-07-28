// C Program to Add Two Complex Numbers

#include<stdio.h>

int main(){
    int real1, real2, img1, img2, sum_real, sum_img;
    printf("enter the real part of first complex number: ");
    scanf("%d",&real1);
    printf("enter the imaginary part of first complex number: ");
    scanf("%d",&img1);
    printf("%d + %di\n",real1,img1);
    printf("enter the real part of second complex number: ");
    scanf("%d",&real2);
    printf("enter the imaginary part of second complex number: ");
    scanf("%d",&img2);
    printf("%d + %di\n",real2,img2);
    sum_real = real1 + real2;
    sum_img = img1 + img2;
    printf("sum is %d + %di",sum_real,sum_img);
    return 0;
}

