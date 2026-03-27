#include<stdio.h>
int main()
{   float z;
    int x=20, y=3;
    z = x/y;
    printf("Value of Z: %f\n", z);

    z = (float)x/y;

    printf("Value of Z: %f\n", z);

    z = (float)(x/y);

    printf("Value of Z: %f\n", z);
    return 0;
}