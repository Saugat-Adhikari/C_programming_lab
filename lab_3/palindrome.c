#include<stdio.h>
int main(){
    int reverse=0,remainder,number=1232,original_num = number;
    while (number!=0){
        remainder=number%10;
        reverse = reverse*10+remainder;
        number/=10;
    }
    if (reverse!=original_num){
        printf("--> %d is not a palindrome number",original_num);
    }else{
        printf("--> %d is a palindrome number.",original_num);
    }
    return 0;
}