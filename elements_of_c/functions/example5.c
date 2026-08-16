//Main function
#include<stdio.h>
int main(){ // function declaration by the c compiler
    int a, b, i, s; // function defination is done by the programmer
    printf("Enter value of b\n");
    scanf("%d", &b);
    if(b==2)
        return 5;
    return 0;
}// end of main

// function is called by the operating system when program is executed.

// echo $? from the terminal will print the return value of the last executed program from the terminal
