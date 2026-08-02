#include<stdio.h>
int main()
{
    int i, sum, num, cube, rem;
    printf("The following are the armstrong numbers:\n");
    for(i=100; i<1000; i++)
    {
        sum = 0;
        for(num=i; num>0; num = num/10)
        {
            rem=num%10;
            cube = rem*rem*rem;
            sum+=cube;
            
        }
        if(sum==i)
        {
            printf("%d\n", sum);
        }
    }
}