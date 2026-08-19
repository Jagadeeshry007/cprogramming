#include<stdio.h>
int main()
{
    int d, d1, d2, m, m1, m2, y, y1, y2;
    printf("Enter first date(dd/mm/yyyy) : ");
    scanf("%d/%d/%d", &d1, &m1, &y1);
    printf("Enter second date(dd/mm/yyyy) : ");
    scanf("%d/%d/%d", &d2, &m2, &y2);
    if(d2<d1)
    {
        if(m2==3)
        {
            if((y%100!=0 && y%4==0) || y%400==0)
                d2=d2+29;
            else
                d2=d2+28;
        }
        else
        {
            if(m==4 || m==6 || m==9 || m==11)
                d2 = d2+31;
            else
                d2 = d2+30;
        }
    }
    if(m2<m1)
    {
        y2=y2-1;
        m2 = m2 + 12;
    }
    y=y2-y1;
    m=m2-m1;
    d=d2-d1;
    printf("The difference is %d days, %d months, %d years\n", d, m, y);
    return 0;
}