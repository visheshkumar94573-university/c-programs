#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter frist number:");
    scanf("%d",&a);
    printf("enter the scond number:");
    scanf("%d",&b);
     printf("enter the third number:");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("largest number is %d",a);
    }
    else if(b>a && b>c){
        printf("largest number is %d",b);
    }
    else{
        printf(" largest number is %d",c);
    }
    return 0;
}