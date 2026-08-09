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
    int i=2;
    while(i<=sqrt(a))
    {
        if(a%i==0)
    {
        return 0;
    }
    i++;
    
}
return 1;
}