#include<stdio.h>
int main()
{
    int num1, num2, rem, quo;
    printf("Enter a numbers:");
    scanf("%d %d", &num1, &num2);
    if(num2!=0)
    {
        printf("quo=%d\n", num1/num2);
        printf("rem=%d\n", num1%num2);
    }
    else
    {
        printf("zero division error");
    }
}