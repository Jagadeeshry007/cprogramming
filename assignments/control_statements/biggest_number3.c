#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter numbers:", a, b, c);
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {   if(a>c)
            printf("a is the biggest number\n");
        else
            printf("c is the biggest number\n");
    }
    else
    {
        if(b>c)
            printf("b is the biggest number\n");
        else
            printf("c is the biggest number\n");
    }
}