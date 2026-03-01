# C supports fallowing operators
1. Arthmatic operators
2. Assignment operators
3. Increment and decrement operators
4. Relational operators
5. Logical operators
6. Conditional operator
7. Comma operator
8. sizeof operator
9. bitwise operators
10. Other operators

## Arthmatic operators
1. Unary operator: +, -
2. Binary operator: +, -, *, /, %

y = x + y

y = -x;

Key points:
* Modulus operator can't be operated on floating point operands.
* When both operands are integers, resulting value will be integer.
TODO: Write remaining key points

## Assignment
'=' is asignment operator

x=y=z=10 - Multiple variables assignment

s=x+y-z

compound assignment

x=x+5 -> x += 5
x=x*5 -> x *= 5
sum=sum/5 -> sum/= 5

## Increment and Decrement operator
* pre-increment and post-increment operators
* Increment or operators can't be operated on expression or constants, only on the variables.

### Pre-increment or decrement operator
* In preincrement operator value of a variable is increased by 1 and then used in the expression

++x -> x = x+1
y=++x; -> x=x+1
           y=x
y=++x*z; x=x+1
         y=x*z            

--x -> x=x-1
y=--x; -> x=x-1
          y=x
y=--x*z; x=x-1
         y=x*z
