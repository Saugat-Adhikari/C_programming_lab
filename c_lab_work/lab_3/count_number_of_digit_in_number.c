#include<stdio.h>
int main(){
    int number = 1234567,i,count=0,remainder,original=number;
    while (number!=0){
    number/=10;
    count++;
    }
    printf("-->there are %d digit in (%d)",count,original);  
    return 0;
}