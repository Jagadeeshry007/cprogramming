#include<stdio.h>
void func1(void);
void func2(void);
int a,b=3;
int main()
{
 printf("inside main: a = %d, b = %d\n", a,b);
 func1();
 func2();
 return 0;
}
void func1(void)
{
    printf("inside func1: a = %d, b = %d\n", a,b);
}
void func2(void)
{
    printf("inside func2: a = %d, b = %d\n", a,b);
}