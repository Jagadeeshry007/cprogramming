#include<stdio.h>

int main(){
    // declaration of variable
    /* int a; 
    int b;
    int c;
    int n;
    float d;
    float m;
    a = 10;
    b = 20;
    d = 23.5;
    n = 15;
    
    // Addition
    c = a + b;
    printf("Sum of %d and %d is %d\n", a, b, c);

    // Uniry minus
    c = -b;
    printf("Value of c %d\n", c);

    // Devision
    c = n / a;
    printf("Value of c %d\n", c);

    // Modulus operation
    c = (b + 3) % a;
    printf("Value of c %d\n", c);
    
    m = a + b;
    printf("Value of m %f\n", m);

    printf("Value of 5/2: %f\n", 5/2.0);
 */
    // int a=10, b=10, c, d;
    
    // if((++a > b) && (a++)){
    //     printf("value of a, b: %d %d\n", a, b);
    // } else {
    //     printf("value of a, b: %d %d\n", a, b);
    // }

    // a > b ? printf("a %d is greater than b: %d", a++, b) : printf("b is greater than b: %d\n", ++b);

    // printf("b value: %d\n", b++);
    // // return from the main function
    // c = a, a++, d=a+b, ++a;
    // printf("a value: %d\n", a);
    // printf("c value: %d\n", c);
    // printf("d value: %d\n", d);
    // c = (a, ++a, a--, --a, a++);
    // printf("a value: %d %d %d %d %d\n", a, ++a, a--, --a, a++);
    // printf("c value: %d\n", c);

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