/*Program to convert a decimal number to binary number*/
#include<stdio.h>
int main()
{
    int num, i=0, j,quo, rem, arr[15];
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num>0)
    {
        arr[i]=num%2;      
        num=num/2;
        i++;
    }
    for(j=i-1; j>=0; j--)
    {
        printf("%d", arr[j]);
        printf("\n");
    }
    return 0;
}