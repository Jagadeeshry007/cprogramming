/*program to show the use of comma operator*/
#include<stdio.h>
int main()
{
    int i, j;
    for(i=0, j=10; i<=j; i++, j--)
    {
        printf("i=%d, j=%d \n", i, j);
    }
    return 0;
}