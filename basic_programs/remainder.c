#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter frist number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    int q = a/b;
    int r = a-(b*q);
    printf("your reminder is:%d",r);
    return 0;

    

}