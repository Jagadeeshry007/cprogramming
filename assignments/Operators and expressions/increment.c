#include<stdio.h>
int main()
{
    int x=8;
    // prefix increment and decrement
    printf("x=%d\t",x);
    printf("x=%d\t",++x);
    printf("x=%d\t",x);
    printf("x=%d\t",--x);
    printf("x=%d\t",x);

    printf("\n");
    
    //postfix increment and decrement
    printf("x=%d\t",x);
    printf("x=%d\t",x++);
    printf("x=%d\t",x);
    printf("x=%d\t",x--);
    printf("x=%d\t",x);
    printf("\n");
    return 0;
}