#include<stdio.h>
int main()
{
    int num,sum;
    sum = 0;
    do
    {
        printf("Enter the number:");
        scanf("%d",&num);
        sum = sum + num;
        printf("sum of the numbers = %d\n", sum);
    }while(num!=0);
    
}