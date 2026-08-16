#include<stdio.h>
int main()
{
    int num1, num2, i, sum;
    printf("Enter any two numbers:");
    scanf("%d %d", &num1, &num2);
    sum = 0;
    for(i=num2; i>0; i--)
    {
        sum=sum + num1;
    }
    printf("mul=%d\n", sum);
}