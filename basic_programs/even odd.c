#include <stdio.h>
int main(){
    int n;
    printf("Ener number:");
    scanf("%d",&n);

    if(n%2==0){
        printf("Even number:");
    }
    else
    {
        printf("odd number:");
    }
    return 0;
}