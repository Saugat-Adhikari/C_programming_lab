#include<stdio.h>
int main(){
    float num;
    printf("\n-> enter a number : ");
    scanf("%f",&num);
    if (num>0){
        printf("%.2f is a positive number .",num);
    }else if (num==0){
        printf("%.2f is zero .",num);
    }else{
        printf("%.2f is a negative number .",num);
    }
    return 0;
}