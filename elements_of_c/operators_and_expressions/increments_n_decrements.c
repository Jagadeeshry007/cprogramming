#include<stdio.h>
int main(void)
{
int a=10, b=10, c, d;
    
    if((++a > b) && (a++)){
        printf("value of a, b: %d %d\n", a, b);
    } else {
        printf("value of a, b: %d %d\n", a, b);
    }

    a > b ? printf("a %d is greater than b: %d", a++, b) : printf("b is greater than b: %d\n", ++b);

    printf("b value: %d\n", b++);
    // return from the main function
    c = a, a++, d=a+b, ++a;
    printf("a value: %d\n", a);
    printf("c value: %d\n", c);
    printf("d value: %d\n", d);
    c = (a, ++a, a--, --a, a++);
    printf("a value: %d %d %d %d %d\n", a, ++a, a--, --a, a++);
    printf("c value: %d\n", c);
    return 0;
}