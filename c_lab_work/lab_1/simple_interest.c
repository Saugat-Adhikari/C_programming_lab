#include<stdio.h>
int main(){
// Write a program to input necessary data and display the simple interest. 
float si, p,t,r;
printf("\n Enter the p(rs) , t(yrs) , r(%) : ");
scanf("%f%f%f",&p,&t,&r);
si = (p*t*r)/100;
printf("the simple interest of :( p = rs.%.2f, t = %.2f yrs, r = %.2f %%) is : %.2f .\n\n",p,t,r,si);
    return 0;
}