#include<stdio.h>
int main()
{
    int a;
    float f;
    double d;
    char c;
    short int si;
    long int li;
    long double ld;

    printf("int size: %d bytes\n", sizeof(a));
    printf("float size: %d bytes\n", sizeof(f));
    printf("double size: %d bytes\n", sizeof(d));
    printf("char size: %d bytes\n", sizeof(c));
    printf("short int size: %d bytes\n", sizeof(si));
    printf("long int size: %d bytes\n", sizeof(li));
    printf("long double size: %d bytes\n", sizeof(ld));
    return 0;
}