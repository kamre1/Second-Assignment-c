#include <stdio.h>

int main() {
  /*  int a, b , x, sum;

    printf("Enter Your three digit:");
    scanf("%d",&x);

     a=x%10;        // x=123 --> a=3   /
     x=x/10;        // x=12
     b=x%10;        // x=12 -->  b=2
     x=x/10;        // x=1
                    //


     sum=a+b+x;

     printf("%d",sum);


    return 0; */

    int x, sum;

    printf("Enter Your Number:");
    scanf("%d",x);

    sum=x%10;
    x=x/10;

    sum= (x%10)+sum;

    x= (x/10);

    sum= x+sum;

    printf(" sum=%d",sum);

    return 0;

}


