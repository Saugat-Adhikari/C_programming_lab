#include<stdio.h>
int main(){
    int arr[10]={1,3,4,5,7,8,9,2,6,0};
    int length = sizeof(arr)/sizeof(arr[0]);
    int found=0,i,num;
    printf(" enter a number : ");
    scanf("%d",&num);
    for ( i = 0; i < length; i++){
        if (num==arr[i]){
            found=1;
            printf("%d is found in the array.",num);
            break;
        }
    }
        if(found!=1){
            printf("%d is not found in the array.",num);
        }
    return 0;
}