#include<stdio.h>
int main()
{
    int i, lastnumber, t1,sum;
    printf("Enter the no. of terms:");
    scanf("%d", &t1);
    lastnumber=1;
    sum=0;
    for(i=0; i<t1; i++)
    {
        lastnumber = lastnumber + i;
        sum = sum + lastnumber;
    }
    printf("sum of the terms= %d\n", sum);
}