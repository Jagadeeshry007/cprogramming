#include<stdio.h>
int main()
{
    int N, sum,rem;
    printf("Enter a number N:");
    scanf("%d",&N);
    sum = 0;
    while (N>0)
    {
        rem=N%10;
        sum = sum + rem;
        N = N/10;
    }
    printf("sum of the digits of the number=%d\n", sum);
}
