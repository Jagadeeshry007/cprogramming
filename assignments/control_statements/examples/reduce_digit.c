#include<stdio.h>
int main()
{
    int count=0, sum=0;
    printf("Enter any number:\n");
    scanf("%d", num);
    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num/10;
    }
}