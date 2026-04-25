#include<stdio.h>
int main()
{
    int i;
    printf("Enter the number of i:");
    scanf("%d",&i);
    while(i)
    {
        printf("%d\n",i);
        i=i-2;
        // printf("\n");
    }
}