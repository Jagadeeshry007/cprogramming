#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if(num<0)
    {
        printf("Negative number=%d\n",num);
    }
    else
    {
        printf("The positive number=%d\n",num);
    }
    return 0;
}