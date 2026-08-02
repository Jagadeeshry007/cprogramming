// example to show garbage value return if return is not specified to a caller function
#include<stdio.h>

int printsum(int a, int b){
    printf("Sum of values is:%d\n", a+b);
}

int main(){
    int x, y, sum;
    x=10;
    y=20;
    sum = printsum(x, y) + 20;
    printf("Sum of values in main:%d\n", sum);
}