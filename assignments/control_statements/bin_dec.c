#include<stdio.h>
int main()
{
    int n, m, dec,ex,d,rem;
    printf("Enter the binary number:");
    scanf("%d", &n);
    m=0;
    dec=0;
    ex=1;
    while(n>0)
    {
        rem=n%10;
        d=rem*ex;
        ex=ex*2;
        dec = dec+d;
        n=n/10;
    }
    printf("The decimal value of the given binary number = %d\n", dec);
}