#include<stdio.h>
void prime(int m, int n);
int isprime(int n);
int main()
{
    int m, n;
    printf("Enter the two numbers:");
    scanf("%d %d", &m, &n);
    prime(m,n);
    printf("\n");
}
void prime(int m, int n)
{
    int i, x;
    for(i=m; i<=n; i++)
    {
        if(isprime(i))
            printf("%d,",i);
        }
}
int isprime(int n)
{
    int i;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        return 1;
    }
}