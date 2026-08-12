#include<stdio.h>
#include<stdlib.h>
float raise(float a, int n);
int main()
{
    int n;
    float a;
    printf("Enter two numbers:");
    scanf("%f %d", &a, &n);
    printf("%.1f to the power of %d is %f\n",a, n, raise(a, n));
    return 0;
    
}
float raise(float a, int n)
{
    float num=1;
    int i;
    if(i==0)
        return 1;
    else
    {
        for(i=abs(n); i>0; i--)
        {
            num = num*a;
        }
        if(n>0)
            return num;
        else
            return 1/num;
    }
}