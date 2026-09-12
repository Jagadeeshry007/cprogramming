#include<stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    return n + sum(n-1);
}
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    printf("Summation until %d is %d", num, sum(num));
    printf("\n");
}