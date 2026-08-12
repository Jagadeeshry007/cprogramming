#include<stdio.h>
int decimal(int a, int base);
int main()
{
    int a, base;
    char choice;
    printf("Enter choice 'b' or 'o':");
    scanf("%c",&choice);
    printf("Enter a number:");
    scanf("%d",&a);
    base = (choice == 'b')?2:8;
    printf("The decimal form of base %d is %d\n",base, decimal(a, base));
}
int decimal(int a, int base)
{
    int i, rem, exp=1, count=1, dec=0;
    for(i=a; i>0; i/=10)
    {
        rem=i%10;
        dec= dec+rem*exp;
        exp=count*base;
        count*=base;
    }
    return dec;
}