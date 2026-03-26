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
* when a prime number is divided then the decimal part will be truncated.
* The second operand must be nonzero for division and modulus operation.
* When both operand is floating point number then the result is also the floating point number.
* when one operand is of integer type and other is of floating type. the resulting value will be a floating point type.

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

               ==, !=, >, <, >=, <=,

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

* Size of data types is decided by the compiler and os based on the data model it uses.
Linux, MacOs and Osx based system uses LP24. In the size of int is 4 bytes

# Bitwise operators
* C has the operators to manipulate data types at bit levels.

* Below are supported bitwise operators in c

bitwise and: &
bitwise or: |
one's complemenmt: ~
left shift: <<
right shift: >>
xor: ^

* bitwise opearators are only  used on Integers.

# Type conversion

* when a operation has mixed types of operands, data types have to converted to common data type.
c support fallowing type type conversions in the expression.

Implicit type conversion
Explicit type conversion

* Implicit type conversion
- Automatic type conversion
- Conversion in assignment

* Automatic type conversion
- Unary and binary

* Type conversion in assignment
 - The datatype of the right hand side is converted into type of the left hand type during assignment of different data types.

 * Explicit type conversion

 - In certain situation, implicit type conversion does not solve the problem for e.g

 float z;
 int x=20, y=3;
 z = x/y;

 In this kind of situation, c provides a operator called "cast operator"
 Cast operator is an unary operater and used for converting a expression to a perticular data type *temperorily*

 syntax: (datatype)expression

Lets take above example.

z=(float)(x/y);

* Precedence and Associativity of Operators

TODO:
* Insert the associativity table with precedence order.
