// C program to calculate the area and perimeter of rectangle

#include<stdio.h>
void rectangle(){
    int length, width,area,perimeter;
    printf("enter the value of length:\n");
    scanf("%d",&length);
    printf("enter the value of width:\n");
    scanf("%d",&width);
    area = length * width;
    perimeter = 2*(length + width);
    printf("the area of rectangle is %d and perimeter of rectangle is %d",area,perimeter);

}
int main(){
    rectangle();
    return 0;
}