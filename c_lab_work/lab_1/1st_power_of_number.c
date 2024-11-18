#include<stdio.h>
#include<math.h>
int main(){
//	Read Integer N and Print the First Three Powers (N^1, N^2, N^3).
float n = 5;
printf("--> The first 3 power of %.2f is %.2lf , %.2lf , %.2lf .",n,pow(n,1),pow(n,2),pow(n,3));
return 0;
}