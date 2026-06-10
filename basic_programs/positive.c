#include <stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    if(n%5==0){
        printf("positive");
    }
    else{
        printf("negative ");
    }
    return 0;
}