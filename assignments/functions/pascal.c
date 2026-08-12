#include<stdio.h>
long pascal(int a, int b);
long fact(int a);
int main()
{
    int n, i, j;
    printf("Enter the number of rows for pascal's triangle:");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%5ld", pascal(i,j));
        }
        printf("\n");
    }
    return 0;
}
long pascal(int a, int b)
{
    long comb;
    comb = fact(a)/(fact(b)*fact(a-b));
    return comb;
}
long fact(int a)
{
    long fact=1;
    int i;
    for(i=a; i>0; i--)
    {
        fact*=i;
    }
    return fact;
}