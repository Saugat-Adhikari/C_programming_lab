#include<stdio.h>
int main(){
    int i,num1=10,num2=20,hcf,lcm;
    for ( i = 1; i <= num1&&i<=num2; i++){
        if (num1%i==0&&num2%i==0){
            hcf=i;
        }
    }
lcm = (num1*num2)/hcf;
    printf("%d is the hcf of %d and %d.\n",hcf,num1,num2);
    printf("%d is the lcm of %d and %d.",lcm,num1,num2);
    return 0;
}