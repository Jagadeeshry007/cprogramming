#include<stdio.h>
double factorial(int n);
double power(float x, int n);
double series(float x, int n);
int main()
{
    float x;
    int n;
    printf("Enter X :");
    scanf("%f", &x);
    printf("Enter number of terms : ");
    scanf("%d", &n);
    printf("%f", series(x, n));
    printf("\n");
    return 0;
}
double series(float x, int n)
{
    int sign=1, i, j;
    float sum = 0;
    float term;
    for(i=1; i<=n; i++)
    {
        sign = (i%2==0)?-1:1;
        j = 2*i-1;
        term = sign*power(x, j)/factorial(j);
        sum += term;
    }
    return sum;
}
double factorial(int n)
{
    int i;
    double fact=1;
    if(n==1)
         return 1;
    for(i=1; i<=n; i++)
    {
        fact*=i;
    }
    return fact;
}
double power(float x, int n)
{
    double pow=1;
    int i;
    for(i=1; i<=n; i++)
    {
        pow *= x;
    }
    return pow;
}

