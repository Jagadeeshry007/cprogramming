#include<stdio.h>
int ispalindrome(int x);
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(ispalindrome(a)==a)
    {
        printf("The number %d is palindrome\n", a);
    }
    else
    {
        printf("The number %d is not palindrome\n", a);
    }
    return 0;
}
int ispalindrome(int x)
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