#include<stdio.h>
int dectobinary(int num1);
int main()
{
    int num1;
    printf("Enter a number:");
    scanf("%d",&num1);
    printf("The binary of %d is %d\n", num1, dectobinary(num1));
}
int dectobinary(int num1)
{
    int i, rem,bin=0,a=1;
    // for(i=num1; i>0; i=i/2)
    i = num1;
    while(i>0)
    {
        rem=i%2;
        bin=bin+rem*a;
        i=i/2;
        a*=10;

    }
    return bin;
}