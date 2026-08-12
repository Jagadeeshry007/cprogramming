#include<stdio.h>
int primefactor(int n, int i);
int primenumber(int i);
int main()
{
    int n, i;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=2; n!=1; i++)
    {
        if(primenumber(i))
        {
            while(n%i==0)
            {
                printf("%d ", i);
                n=n/i;
            }
        }
    }
    printf("\n");
    return 0;
}

int primenumber(int i)
{
    int j;
    if(i>1)
    {
        for(j=2; j*j<=i; j++)
        {
            if(i%j==0)
                return 0;
        }
        return 1;
    }
    return 0;
}