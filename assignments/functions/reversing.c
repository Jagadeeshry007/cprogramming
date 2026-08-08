#include<stdio.h>
int rev_num(int x);
int main (void)
{
    int a = 1293;
    printf("The reverse of the number %d is %d\n", a, rev_num(a));
    return 0;
}
int rev_num(int x)
{
    int rem, quo, rev=0;
    while(x>0)
    {
        rem = x%10;
        rev=rev*10 + rem;
        x = x/10;
    }
    return rev;
}