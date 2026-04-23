#include<stdio.h>
int main()
{
    float m1, m2, m3, m4, sum, per;
    printf("Enter the marks of all the subjects:", m1, m2, m3, m4);
    scanf("%f %f %f %f", &m1,&m2, &m3, &m4);
    sum = m1 + m2 + m3 + m4;
    per = sum/4;
    if(per>=85)
        printf("grade A\n");
    else if(per>=70)
        printf("grade B\n");
    else if(per>=55)
        printf("grade C\n");
    else if(per>=40)
        printf("grade D\n");
    else 
        printf("grade E\n");

}