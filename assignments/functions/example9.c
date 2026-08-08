// functions with arguments and no return value

#include<stdio.h>
#include<math.h>
void type(float a, float b, float c);
void area(float a, float b, float c);
int main()
{
    int a, b, c;
    printf("Enter the values\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a+b>c && b+c>a && c+a>b)
    {
        type(a, b, c);
        area(a, b, c);
        
    }
    else
    {
        printf("With these sides the triangle is not possible\n");
    }
    return 0;
}
void type(float a, float b, float c)
{
        if(a==b || b==c || c==a)
        {
            printf("Isosceles Triangle\n");
        }
        else if(a==b && b==c && c==a)
        {
            printf("Equilateral Triangle\n");
        }
        else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
        {
            printf("Right angle triangle\n");
        }
        else
        {
            printf("Scalene triangle\n");
        }

}
void area(float a, float b, float c)
{
    float s, area;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is %f\n", area);
}