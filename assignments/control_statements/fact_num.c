#include<stdio.h>
int main()
{
    int n, fact;
    printf("Enter The number:");
    scanf("%d",&n);
    fact = 1;
    while(n>0)
    {
        fact = fact*n;
        n--;
    }
    printf("The factorial of the number:%d\n",fact);
}