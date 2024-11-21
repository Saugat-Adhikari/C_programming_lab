#include <stdio.h>
#include <math.h>
int main()
{
    float number = 153, remainder, count = 0, sum = 0;
    int original = number;
    while (original != 0){
        original /= 10;
        count++;
    }
    original = number;
    while (original != 0){
        remainder = original % 10;
        sum += pow(remainder, count);
        original /= 10;
    }
    if (sum == number){
        printf("--> %.1f is a armstrong number.", number);
    }else{
        printf("--> %.1f is not a armstrong number.", number);
    }
    return 0;
}