#include <stdio.h>
int main(){
    int a;
    printf("Enter number:");
    scanf("%d", &a);
    if(a%5 ==0 ||a%3 ==0){
        printf("Divisibble");
    }
    else{
        printf("not devisible");
    }
    return 0;
}