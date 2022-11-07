#include<stdio.h>
int main()
{
    int x;
    printf("Enter your Number:");
    scanf("%d",&x);

    (x&1) ? printf("Even") : printf("Odd");

    return 0;

}
