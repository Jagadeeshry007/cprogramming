// #include<stdio.h>
// int main()
// {
//     int i;
//     printf("Enter the number of i:");
//     scanf("%d",&i);
//     while(i)
//     {
//         printf("%d\n",i);
//         i=i-2;
//         // printf("\n");
//     }
// }

/*using for loop*/ 

#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=num;i>0;i=i-2)
    {
        printf("%d\n",i);
    }
}