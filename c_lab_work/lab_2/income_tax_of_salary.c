#include<stdio.h>
int main(){
    float salary,tax_amt;
    printf("\n--> Enter your salary (rs) : ");
    scanf("%f",&salary);
    tax_amt = (15.0/100.0)*salary;
    printf(" the tax of your salary(%.2f) is rs. %.2f.",salary,tax_amt);
    return 0;
}