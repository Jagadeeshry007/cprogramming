#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d", &n);
    i=0;
    do
    {
        n%10;
        i++;
        n=n/10;
    }while(n>0);
    printf("number of digits in the number=%d \n",i);
}