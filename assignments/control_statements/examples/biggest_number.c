// Program to print the bigger number
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter a and b:");
    scanf("%d %d", &a, &b);

    if(a>b)
    {
        printf("a is greater than b\n");
    }
    else
    {
        printf("b is greater than a\n");
    
    }
    return 0;
}