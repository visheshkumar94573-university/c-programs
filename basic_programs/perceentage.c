#include <stdio.h>
int main()
{
    float marks1 = 25;
    float marks2 = 38;
    float marks3 = 23;
    float marks4 = 33;
    
    float p = (marks1+marks2+marks3+marks4)/4;
    float percentage = (p/160)*100;
    printf("percentage of five subject is : %f",p);

    return 0;
}