#include<stdio.h>
#include<math.h>
int main(){
    int number=153,remainder,count=0,sum=0,original=number;
    while (original!=0){
        original/=10;
        count++;
    }
    original=number;
while (original!=0){
    remainder=original%10;
    sum+=(int)pow(remainder,count);
    original/=10;
}
if (sum==number){
    printf("%d is a armstrong number.",number);
}else{
    printf("%d is not a armstrong number.",number);
}
    return 0;
}