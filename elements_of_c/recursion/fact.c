/* program to find the factorial of a number by recursive method*/
#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    printf("%d",fact(n));
    printf("\n");
    return 0;
}
int fact(int n)
{
    if(n==0)
        return 1;
    return (n * fact(n-1));
}