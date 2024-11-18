#include<stdio.h>
int main(){
//b Write a program to input length and breadth of a rectangle and display its area.
float l,b, area_rectangle;
printf("--> enter the length(m) and breadht(m) : ");
scanf("%f%f",&l,&b);
area_rectangle = l*b;
printf("--> The area of rectangle (l = %.2f m, b = %.2f m) is : %.2f m^2.",l,b,area_rectangle);
return 0;
}