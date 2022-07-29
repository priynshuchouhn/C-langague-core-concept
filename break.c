#include<stdio.h>
int main() 
    {
        int i,count;
        count=10;
        for(i=0;i<=count;i++){
            if (i==8)
            {
                continue;
            }
            printf("%d\n",i);
        }
        printf("the control is outside the loop");
    }