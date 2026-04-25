#include<stdio.h>
int main()
{
    int N, mul, rem;
    printf("Enter a number N:");
    scanf("%d",&N);
    mul = 1;
    while (N>0)
    {
        rem=N%10;
        mul = mul * rem;
        N = N/10;
    }
    printf("multiple of the digits of the number=%d\n", mul);
}
