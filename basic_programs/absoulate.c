#include <stdio.h>
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);

    if(n<0){
        n = n *(-1);
    }
    printf("the absoulate valute is: %d",n);
}