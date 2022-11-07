
#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter your Number:");

    scanf("%d %d", &a,&b);

       a=a+b;
       b=a-b;
       a=a-b;

       printf("After Swapping Number is : %d %d ", a,b);

       return 0;
}
