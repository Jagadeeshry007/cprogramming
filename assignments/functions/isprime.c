#include<stdio.h>
#include<math.h>
int isprime(int a);
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("%d",isprime(a));
}
int isprime(int a)
{
    int i=2,n;
    while(i<=sqrt(a))
    {
        if(n%i==0)
    {
        i++;
    }
    
    return 0;
}
return 1;
}