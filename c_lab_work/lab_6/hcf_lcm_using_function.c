#include<stdio.h>
int hcf(int num1,int num2);
int lcm(int num1,int num2);
int main(){
   printf("the hcf is : %d\n",hcf(10,20));
    printf("the lcm is : %d",lcm(10,20));
    return 0;
}//hcf function
int hcf(int num1,int num2){
     int i,hcf;
    for ( i = 1; i <= num1&&i<=num2; i++){
        if (num1%i==0&&num2%i==0){
            hcf=i;
        }
    }
    return hcf;
}//lcm function
int lcm(int num1,int num2){
    int lcm;
    lcm = (num1*num2)/hcf(num1,num2);
    return lcm;
}






