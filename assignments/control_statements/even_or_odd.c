#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("Entered number is even=%d\n",num);
    }
    else
    {
        printf("The entered number is odd=%d\n",num);
    }
    return 0;
}