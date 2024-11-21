#include<stdio.h>
int main(){
    int reverse=0,remainder,number=12345,original_num = number;
    while (number!=0){
        remainder=number%10;
        reverse = reverse*10+remainder;
        number/=10;
    }
    printf("-->the reverse of %d is %d.",original_num,reverse);
    return 0;
}