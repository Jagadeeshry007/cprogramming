#include<stdio.h>

int main(){
    
    int a; // a will have garbage or unknown value
    int b=0;

    if(!b){
        printf("b value is non zero %d\n",a);
    }
    else{
        printf("b value is zero:%d\n",a);
    }
}