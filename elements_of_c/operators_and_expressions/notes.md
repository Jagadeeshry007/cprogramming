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

# Relational operators

* Relation operators are used to compare the two values
* If result of the expression is True,the value is 1, otherwise 0

==
!=
>
<
>=
<=

# Logical or Boolean operators
* Logical operators are used to combine more than one expressions.
* Operands may be variables, constants, expressions

Logical AND &&
Logical OR  ||
Logical NOT !

a=10, b=4, d=11

e.g (a > b) && (b > d) -> FALSE -> 0
e.g (a > b) || (b > d) -> TRUE -> 1
e.g !(a > b) -> FALSE -> 0

* While evaluating multiple statements, logical AND does not evaluate the second expression if first expression becomes FALSE
if((a > b) && (++a)){
    printf("%d", a);
} else {
    printf("%d", a);
}

* While evaluating multiple statements, logical OR does not evaluate the second or more expressions if first expression becomes TRUE

# Conditional operator or ternary operator
      ? :
TestExpression? Expression1:Experssion2
Evaluate Expression? if result is TRUE: if result is FALSE

a=10, b=4, c
c=a>b?a:b

a>b?printf("a is greater than b", a++):printf("a is greater than b", b++)

# Comma operator: ,

* Comma operator is used for allowing mulitple expression in single line. expressions are evaluated from left to right, and the right most expression value becomes the value of the expression

c = a, a++, a+b, ++a;
c = (a, ++a, a--, --a, a++);

# Size of operator
* It gives the size of the operands in bytes

e.g sizeof(a) -> 4