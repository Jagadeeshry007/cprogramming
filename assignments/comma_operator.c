#include<stdio.h>
int main()
{
    // program to print the larger of two numbers using conditional operator
    int a, b, c, sum;
    sum = (a=8, b=7, c=9,a+b+c);
    printf("Sum=%d\n", sum);

    // program to interchange the value of two variables using comma operator
    int d=8, e=7, temp;
    printf("d=%d, e=%d\n", d,e);
    temp = d, d=e, e=temp;
    printf("d=%d,e=%d\n", d,e);
    return 0;
}