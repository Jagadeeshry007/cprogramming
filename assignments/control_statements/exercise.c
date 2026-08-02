#include <stdio.h>

int main(void)
{
    // Program 1
    int a1 = -3;
    a1 = -a1 - a1 + !a1;
    printf("Program 1 Output: %d\n", a1);

    // Program 2
    int a2 = 2, b2 = 1, c2, d2;
    c2 = a2 < b2;
    d2 = (a2 > b2) && (c2 < b2);
    printf("Program 2 Output: c=%d, d=%d\n", c2, d2);

    // Program 3
    int a3 = 9, b3 = 15, c3 = 16, d3 = 12, e3, f3;
    e3 = !(a3 < b3 || b3 < c3);
    f3 = (a3 > b3) ? a3 - b3 : b3 - a3;
    printf("Program 3 Output: e=%d, f=%d\n", e3, f3);

    // Program 4
    int a4 = 5;
    a4 = 6;
    a4 = a4 + 5 * a4;
    printf("Program 4 Output: a=%d\n", a4);

    // Program 5
    int a5 = 5, b5 = 5;
    printf("Program 5 Output: ");
    printf("%d, %d\t", ++a5, b5--);
    printf("%d, %d\t", a5, b5);
    printf("%d, %d\t", ++a5, b5++);
    printf("%d, %d\n", a5, b5);

    // Program 6 
    // int x, y, z;         /* This program can't be compiled due to some errors of increment and decrement operation, here the errors are
    // x=8++;                           1. constants can't be compiled
    // y = ++x++;                       2. post and prefix increments are used at a time */
    // z = (x + y)--;
    // printf("Program 6 Output: x=%d, y=%d, z=%d\n", x, y, z);
    
    /* Program 7 */
    int a7 = 4, b7 = 8, c7 = 3, d7 = 9, z7;
    z7 = a7++ + ++b7 * c7-- - d7;
    printf("Program 7 Output: a=%d, b=%d, c=%d, d=%d, z=%d\n", a7, b7, c7, d7, z7);

    /* Program 8 */
    int a8 = 14, b8, c8;
    a8 = a8 % 5;
    b8 = a8 / 3;
    c8 = a8 / 5 * 3;
    printf("Program 8 Output: a=%d, b=%d, c=%d\n", a8, b8, c8);

    /* Program 9 */
    int a9 = 15, b9 = 13, c9 = 16, x9, y9;
    x9 = a9 - 3 % 2 + c9 * 2 / 4 % 2 + b9 / 4;
    y9 = a9 = b9 + 5 - b9 + 9 / 3;
    printf("Program 9 Output: x=%d, y=%d\n", x9, y9);

    /* Program 10 */
    int x10, y10, z10, k10 = 10;
    k10 += (x10 = 5, y10 = x10 + 2, z10 = x10 + y10);
    printf("Program 10 Output: x=%d, y=%d, z=%d, k=%d\n", x10, y10, z10, k10);

    /* Program 11 */
    float b11;
    b11 = 15 / 2;
    printf("Program 11 Output: %f\t", b11);
    b11 = (float)15 / 2 + (15 / 2);
    printf("%f\n", b11);

    /* Program 12 */
    int a12 = 9;
    char ch12 = 'A';
    a12 = a12 + ch12 + 24;
    printf("Program 12 Output: %d, %c\t%d, %c\n", ch12, ch12, a12, a12);

    /* Program 13 */
    int a13, b13, c13, d13;
    a13 = b13 = c13 = d13 = 4;
    a13 = b13 + 1;
    c13 = d13 * 3;
    printf("Program 13 Output: a=%d, c=%d\n", a13, c13);

    /* Program 14 */
    int a14 = 5, b14 = 10, temp14;
    temp14 = a14;
    a14 = b14;
    b14 = temp14;
    printf("Program 14 Output: a=%d, b=%d\n", a14, b14);

    /* Program 15 */
    int a15 = 10, b15 = 3, max15;
    a15 > b15 ? (max15 = a15) : (max15 = b15);
    printf("Program 15 Output: %d\n", max15);

    /* Program 16 */
    int a16 = 5, b16 = 6;
    printf("Program 16 Output: ");
    printf("%d\t", a16 = b16);
    printf("%d\t", a16 == b16);
    printf("%d %d\n", a16, b16);

    /* Program 17 */
    int a17 = 3, b17 = 4, c17 = 3, d17 = 4, x17, y17;
    x17 = (a17 = 5) && (b17 = 7);
    y17 = (c17 = 5) || (d17 = 8);
    printf("Program 17 Output: a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n", a17, b17, c17, d17, x17, y17);

    x17 = (a17 == 6) && (b17 = 9);
    y17 = (c17 == 6) || (d17 = 10);
    printf("Program 17 (2nd) Output: a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n", a17, b17, c17, d17, x17, y17);

    /* Program 18 (undefined behavior but kept as is) */
    int a18 = 10;
    a18 = a18++;
    a18 = a18++ * a18--;
    printf("Program 18 Output: %d\n", a18);
    printf("%d\n", a18++ * a18++);

    /* Program 19 */
    int a19 = 2, b19 = 2, x19, y19;
    x19 = 4 * (++a19 * 2 + 3);
    y19 = 4 * (b19++ * 2 + 3);
    printf("Program 19 Output: a=%d, b=%d, x=%d, y=%d\n", a19, b19, x19, y19);


    return 0;
}