#include<stdio.h>
int main()
{
    int n, i, rem, sum;
    printf("Enter the number:");
    scanf("%d",&n);
    sum=0;
    for(i=n; i>0; i--)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    printf("Sum of the digits is %d\n", sum);
}