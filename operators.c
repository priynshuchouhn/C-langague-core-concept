#include<stdio.h>
int main()
    {
       int a,b,c,d;
       a = 20;
       b = 10;
       c = 31;
    //    printf("%d\n", a+b);
    //    printf("%d\n", a-b);
    //    printf("%d\n", a*b);
    //    printf("%d\n", a/b);
    //    printf("%d\n", c%b);

    // printf("%d\n", a<b && a<c); // both condition should be true
    // printf("%d\n", a<b || a<c); // either condition should be true
    // printf("%d\n", !(a<b)); // returns true if condition is false vice versa

     d = a<b?a:b;
     printf("%d",d);
    }