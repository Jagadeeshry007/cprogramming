//functions with no arguments but a return value
#include<stdio.h>
int func(void);
int main()
{
    printf("%d\n", func());
    return 0;
}
int func(void)
{
    int i, sum=0, sqr;
    for(i=1; i<26; i++)
    {
        if(i%2!=0)
        {
            sqr=i*i;
            sum += sqr;
        }
    }
    return sum;
}