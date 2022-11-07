
#include<stdio.h>
int main()
{

    int x;
    printf("Enter Your Digit:");
    scanf("%d",&x);

    x=x/10;

    printf("Remove last Digit of Number is: %d ",x);

    return 0;
}
