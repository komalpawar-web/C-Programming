#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    (a>b)?printf("%d is max",a):printf("%d is max",b);
    return 0;
}