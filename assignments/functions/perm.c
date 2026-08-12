#include<stdio.h>
int fact(int a);
int permutations(int n, int r);
int combinations(int n, int r);
int main()
{
    int n, r;
    printf("Enter The number of permutations:");
    scanf("%d",&n);
    printf("Enter the value r:");
    scanf("%d",&r);
    printf("The permutations = %d \n The combinations = %d\n", permutations(n,r), combinations(n,r));
    // printf("%d",fact(n));
}
int fact(int a)
{
    int fact = 1;
    while(a>0)
    {
        fact*=a;
        a-=1;
    }
    return fact;
}
int permutations(int n, int r)
{
    int permutations;
    permutations = fact(n)/fact(n-r);
    return permutations;
}
int combinations(int n, int r)
{
    int combinations;
    combinations=permutations(n, r)/fact(r);
    return combinations;
}