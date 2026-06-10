#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter frist number:");
    scanf("%d",&a);
    printf("enter the scond number:");
    scanf("%d",&b);
     printf("enter the third number:");
    scanf("%d",&c);

    if(a+b>c && b+c>a && c+a>b){
        printf("valid number ");
    }
    else{
        printf("not valid nuumber");;
    }
    return 0;
}