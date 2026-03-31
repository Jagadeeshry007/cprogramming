#include<stdio.h>
int main()
{
    int var;
    printf("Size of int=%u bytes\n", sizeof(int));
    printf("Size of float=%u bytes\n", sizeof(float));
    printf("Size of var=%u bytes\n", sizeof(var));
    printf("Size of an integer constant=%u bytes\n", sizeof(45));
    return 0;
}