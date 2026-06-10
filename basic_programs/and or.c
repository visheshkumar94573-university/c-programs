#include <stdio.h>
int main(){
    int a;
    printf("Enter number:");
    scanf("%d",&a);

    if(a<99 && a>1000){
        printf("three digid number");
    }
    else{
        printf("not tthree digit");
    }
    return 0;
}