#include<stdio.h>
int main(){
//WAP to check whether the input character is vowel or consonant. 
char alpha;
printf("-->enter a alphabet (in lowercase) : ");
scanf(" %c",&alpha);
if (alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u' ){
    printf("%c is a vowel letter .",alpha);
}else{
    printf("%c is a consonant letter .",alpha);
}
       return 0;
}