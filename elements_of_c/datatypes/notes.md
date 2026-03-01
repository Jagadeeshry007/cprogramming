# Data types of C programming

## What is a datatype?
- Defines What kind of Value a variable can store
- Defines how much memory is allocated
- Defines the range of values
- Defines the operations allowed

``` c
int age=20;
float marks = 85.5;
char grade = 'A';
```

## Data types in C 

Fallowing table is for a x32 bit CPU

+------------------------------+
|Data Type | Used for | Size   |
+----------|----------|--------+
|Char      | single   |        |
|          | Character| 1 byte |
+----------|----------|--------+
|int       | Integer  |        |
|          | Character|4 byte  |
+----------|----------|--------+
|float     | single   |        |
|          |precision |4 byte  |
|          |          |        |
+----------|----------|--------+
|double    | Double   | 8 bytes|
|          | Precision|        |
|          |decimal   |        |
+----------|----------|--------+

## character Type

* character data type is also called as "one byte integer".

        int main() {
            char c = 'a';
        }
    in the above example character with single quote is declared.
    the ascii value of the smaller letter 'a' is stored in the memory.
    refer decimal value from ascii table https://www.ascii-code.com/
    lower case letter a value is 97 in decimal, so 97 is stored in memory as below

        0110 0001

### signed char
- Range -128 to 127
- uses 1 byte
### unsigned char
- Range 0 to 255
- Uses 1 byte 

## Integer Type 
if sign is not mentioned - signed int is assumed.

type of integers:
- signed int-2 bytes
- short int-2 bytes
- unsigned int-2 bytes
- long int-4 bytes
- unsigned int-4 bytes

## Floating Point Types
Used to store decimal numbers

### types
float - 4 bytes
double - 8 bytes
long double - 10 bytes

long gives more precision than float

## Type Qualifiers
- size qualifiers
- sign qualifiers


