#include<stdio.h>
int main()
{
    int i, ft, st, ct,n;
    printf("Enter the number of the terms:");
    scanf("%d",&n);
    ft=0;
    st=1;
    printf("The sum of first %d series:%d, %d",n,ft, st);                                                                          
    for(i=n; i>0; i--)
    {
        ct=ft+st;
        ft=st;
        st=ct;
        printf(", %d", ct);
    }
    printf("\n");
    
}