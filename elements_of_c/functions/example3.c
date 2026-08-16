// example to show call by value
#include<stdio.h>

int incremet(int a, int z){
    printf("a:%d,z:%d\n", a, z);
    ++a;
}

int main(){
    int x, y, sum;
    x=10;
    y=20;
    printf("increment:%d\n", incremet(++x, x--));
    printf("x:%d\n", x);
}