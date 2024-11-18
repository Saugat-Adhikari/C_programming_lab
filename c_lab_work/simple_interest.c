#include<stdio.h>
int main(){
// Write a program to input necessary data and display the simple interest. 
float si, p = 100000, t= 1.5, r = 10;
si = (p*t*r)/100;
printf("the simple interest of :( p = %.2f, t = %.2f, r = %.2f %%) is : %.2f .\n\n",p,t,r,si);
    return 0;
}