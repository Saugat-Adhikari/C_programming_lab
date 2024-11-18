#include <stdio.h>
int main()
{
    // b.	Write a C program to determine the grade of a student based on their marks using if-else statements.
    float marks;
    printf("\n--> enter your marks in precentage : ");
    scanf("%f", &marks);
    if (marks>=91&&marks<=100){
        printf("your grade is A+");
    }else if (marks>=81&&marks<=90){
        printf("your grade is A");
    }else if (marks>=71&&marks<=80){
        printf("your grade is B+");
    }else if (marks>=61&&marks<=70){
        printf("your grade is B");
    }else if (marks>=51&&marks<=60){
        printf("your grade is C+");
    }else if (marks>=41&&marks<=50){
        printf("your grade is C");
    }else if (marks>=31&&marks<=40){
        printf("your grade is D+");
    }else if (marks<31){
        printf("your grade is f , you are failed.");
    }
    return 0;
}