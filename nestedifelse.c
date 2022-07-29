#include<stdio.h>
int main()
    {
        int age;
        printf("enter the age: ");
        scanf("%d", &age);

        if(age>=18){
            if(age>=24){
                printf("you are above 24");
            }
            else{
                printf("you are below 24");
            }
        }
        else{
            printf("you are below 18");
        }
    }