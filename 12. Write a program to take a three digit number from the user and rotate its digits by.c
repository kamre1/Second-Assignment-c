#include<stdio.h>
int main()
{
    int x;

    printf("Enter your three digit number:");
    scanf("%d",&x);
    x=(x%10)*100+(x/10);

    printf(" Rotate digits is:%d",x);

    return 0;
}
