#include<stdio.h>

// function declaration
// syntax
// returntype name_function(int)
// void fibonfibonacci_1acci_1(int);

// Syntax
// return_type name_function(arugments) 
// arguments are also called as parameters or formal parameters
// function defination
void fibonacci_1(char number){
    int i, ft, st, ct; // local variables
    ft=0;
    st=1;
    printf("The sum of first %d series:%d, %d",number,ft, st);                                                                          
    for(i=number; i>0; i--)
    {
        ct=ft+st;
        ft=st;
        st=ct;
        printf(", %d", ct);
    }
    printf("\n");
    return;
    printf("caloing after return"); // dead code
}//end  of the fu 

int main(void)
{
    int n;
    printf("Enter the number of the terms:");
    scanf("%d",&n);
    fibonacci_1(n); //calling a function
    return 0;
}



