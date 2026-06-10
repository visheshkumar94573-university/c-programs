#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the cost and sele price:");
    scanf("%d %d",&a,&b);

    if(b > a){
        printf("profit");
    }
    else if(a > b){
        printf("loss");
    }
    else {
        printf("no profit no loss");
    }
    return 0;
}