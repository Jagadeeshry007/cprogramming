// example to show return statement terminates the function exucution
#include<stdio.h>

int compare_data(int a, int b){
    if (a==b)
        return 0;
    if (a>b)
        return 1;
    if (a<b)
        return -1;
    return 255;
}

int main(){
    int x, y, sum;
    x=10;
    y=20;
    printf("comparison output:%d\n", compare_data(x, y));
}