# C Programming — Chapter 9: Pointers

## Complete Revision Notes

## 1. Introduction to Pointers

**Definition:** A pointer is a variable that stores the memory address of another variable.

Pointers are useful for:
1. Passing arguments by reference to functions.
2. Returning more than one value from a function through pointer arguments.
3. Accessing dynamically allocated memory.
4. Implementing data structures such as linked lists, trees, and graphs.
5. Improving memory-handling efficiency in suitable situations.

**Example:**
```c
int age = 20;
int *ptr = &age;
```

Here:
- `age` is an integer variable.
- `&age` gives the address of `age`.
- `ptr` is a pointer to an integer.
- `ptr` stores the address of `age`.

---

## 2. Understanding Memory

Computer memory consists of a sequence of bytes. Each byte has a unique address.

Consider:
```c
int age = 20;
```

Suppose `age` occupies four consecutive bytes, starting at address `2580`.

| Memory address | Purpose |
|---|---|
| 2580 | First byte of `age` |
| 2581 | Second byte of `age` |
| 2582 | Third byte of `age` |
| 2583 | Fourth byte of `age` |

The address of `age` is `2580` in this example.

**Important points:**
- The compiler reserves memory for variables.
- The memory required depends on the variable's data type and the implementation.
- The address of a variable identifies its location in memory.
- Actual memory addresses can differ between program executions.

---

## 3. Address Operator (`&`)

The address operator `&` returns the address of a variable.

**Syntax:**
```c
&variable_name
```

**Example:**
```c
int age = 20;
printf("%p", (void *)&age);
```

Here, `&age` represents the address of `age`, and `%p` is the format specifier used to print a pointer value.

### Valid and invalid uses

| Expression | Validity | Reason |
|---|---|---|
| `&age` | Valid | `age` is a variable |
| `&arr[0]` | Valid | An array element is an object |
| `&289` | Invalid | `289` is a constant |
| `&(j + k)` | Invalid | `j + k` is not an object suitable for this operation |
| `&rvar` | Invalid if `rvar` is declared `register` | The address of a register-declared object cannot be taken |

**Connection with `scanf()`:**
```c
int age;
scanf("%d", &age);
```

`scanf()` needs the address of `age` so that it can store the entered integer in the correct memory location.

---

## 4. Pointer Variables

A pointer variable stores a memory address.

### 4.1 Declaration

**General syntax:**
```c
data_type *pointer_name;
```

Examples:
```c
int *iptr;
float *fptr;
char *cptr;
```

| Declaration | Meaning |
|---|---|
| `int *iptr;` | Pointer to an integer |
| `float *fptr;` | Pointer to a float |
| `char *cptr;` | Pointer to a character |

The data type before `*` specifies the pointer's base type.

#### Important distinction
```c
int *ptr;
```

This declares `ptr` as a pointer to an integer. It does not allocate an integer object for `ptr` to point to.

**Why specify the pointer's data type?**

The pointer's base type determines how the pointed-to object is interpreted and how pointer arithmetic operates.

On many modern systems, pointers to different object types have the same size, but this is not guaranteed for every C implementation.

### 4.2 Declaring ordinary and pointer variables together

```c
char *cptr, ch1, ch2;
```

Here:
- `cptr` is a pointer to `char`.
- `ch1` and `ch2` are ordinary `char` variables.

The `*` applies to the individual declarator, not automatically to every variable in the declaration.

---

## 5. Assigning Addresses to Pointers

A pointer can be assigned the address of a compatible variable using the address operator.

**Example:**
```c
int age = 30;
int *iptr;
iptr = &age;
```

Now, `iptr` stores the address of `age`.

Conceptually:
```text
age = 30
Address of age = 6080

iptr = 6080
       |
       v
    +------+
    | age  |
    |  30  |
    +------+
```A pointer variable stores a memory address.

The addresses in this diagram are illustrative.

### 5.1 Initializing a pointer during declaration

```c
int age = 30;
int *iptr = &age;
```

The variable must be declared before its address is used in this initializer.

### 5.2 Assigning one pointer to another

```c
int age = 30;
int *iptr = &age;
int *p1;
p1 = iptr;
```

Both `iptr` and `p1` now point to `age`.

### 5.3 Initializing a pointer to `NULL`

```c
int *ptr = NULL;
```

`NULL` represents a null pointer constant.

A null pointer does not point to an object or function. It should not be dereferenced.

**Important:** An ordinary, uninitialized automatic pointer may contain an indeterminate value. Always initialize a pointer before using it.

---

## 6. Dereferencing Pointer Variables

The indirection operator `*` accesses the object pointed to by a pointer. It is also called the **dereferencing operator**.

**Example:**
```c
int age = 30;
int *ptr = &age;
printf("%d", *ptr);
```

Output:
```text
30
```

Here:
- `ptr` stores the address of `age`.
- `*ptr` accesses the value of `age`.
The `*` used in a declaration and the `*` used for dereferencing have different roles.
- Therefore, `*ptr` evaluates to `30`.

### 6.1 Modifying a variable through a pointer

```c
int age = 30;
int *ptr = &age;
*ptr = 50;
printf("%d", age);
```

Output:
```text
50
```

Changing `*ptr` changes `age` because `ptr` points to `age`.

### 6.2 Equivalent expressions

Suppose:
```c
int a = 10;
int *p = &a;
```

| Pointer expression | Equivalent operation |
|---|---|
| `*p = 9;` | `a = 9;` |
| `(*p)++;` | `a++;` |
| `x = *p + 10;` | `x = a + 10;` |
| `scanf("%d", p);` | `scanf("%d", &a);` |

The final equivalence assumes `p` points to `a`.

### 6.3 Address and dereferencing relationship

If `ptr` points to `age`, `*ptr` accesses the object at the address stored in `ptr`.

Similarly:
```c
*(&age)
```
is equivalent to accessing `age`.

**Remember:**
- `&age` means the address of `age`.
- `*ptr` means the object pointed to by `ptr`, assuming `ptr` is valid.

The `*` used in a declaration and the `*` used for dereferencing have different roles.

---

## 7. Pointer Size and Dereferenced Data Size

The size of a pointer and the size of the object it points to are different concepts.

```c
char ch = 'A';
int a = 10;
double d = 18.24;

char *p1 = &ch;
int *p2 = &a;
double *p3 = &d;
```

On a typical system:

| Expression | Meaning | Typical size |
|---|---|---:|
| `sizeof(p1)` | Size of the pointer | 8 bytes on a typical 64-bit system |
| `sizeof(*p1)` | Size of the pointed-to `char` | 1 byte |
| `sizeof(p2)` | Size of the pointer | 8 bytes on a typical 64-bit system |
| `sizeof(*p2)` | Size of the pointed-to `int` | Commonly 4 bytes |
| `sizeof(p3)` | Size of the pointer | 8 bytes on a typical 64-bit system |
| `sizeof(*p3)` | Size of the pointed-to `double` | Commonly 8 bytes |

These are typical values, not universal guarantees.

**Core concept:** `sizeof(ptr)` gives the size of the pointer itself, whereas `sizeof(*ptr)` gives the size of the pointed-to object type.

---

## 8. Pointer Arithmetic

Pointer arithmetic allows certain arithmetic operations on pointers.

The main operations are:
1. Adding an integer to a pointer.
2. Subtracting an integer from a pointer.
3. Incrementing a pointer.
4. Decrementing a pointer.
5. Subtracting one compatible pointer from another.

Pointer arithmetic is scaled according to the size of the pointer's base type.

### 8.1 Incrementing a pointer

Suppose:
```c
int *ptr;
```

and `ptr` contains address `1000`. Assuming `sizeof(int) == 4`:

```c
ptr++;
```

The new pointer value advances by four bytes, to address `1004`. It does not simply advance to address `1001`.

**Formula:**

`New address = Old address + (number of elements × sizeof(pointed-to type))`

This formula applies to valid pointer arithmetic within an array.

### 8.2 Pointer arithmetic examples

Suppose the initial pointer values are:
- Character pointer: `1000`
- Integer pointer: `4000`
- Double pointer: `5000`

Assume `sizeof(char) = 1`, `sizeof(int) = 4`, and `sizeof(double) = 8`.

| Operation | Calculation | New address |
|---|---|---:|
| `char_ptr++` | `1000 + 1` | 1001 |
| `char_ptr--` | `1001 - 1` | 1000 |
| `int_ptr++` | `4000 + 4` | 4004 |
| `int_ptr += 2` | `4004 + 2 × 4` | 4012 |
| `double_ptr++` | `5000 + 8` | 5008 |
| `double_ptr -= 3` | `5008 - 3 × 8` | 4984 |

These calculations illustrate the scaling rule. In actual C programs, pointer arithmetic must stay within the applicable array bounds, including the permitted one-past-the-end position.

### 8.3 Pointer arithmetic does not move the variable

If a pointer is incremented, its stored address changes. The original variable itself does not move.

```c
int a = 10;
int *ptr = &a;
ptr++;
```

The pointer advances to the next integer-sized position conceptually, but this does not relocate `a`. Since `a` is a standalone object rather than an element of an array, using the resulting pointer to access an object is not valid.

### 8.4 Subtracting two pointers

If two pointers point to elements of the same array, subtracting them gives the number of elements between their positions.

```c
int arr[10];
int *p1 = &arr[0];
int *p2 = &arr[5];

printf("%td", p2 - p1);
```

Output:
```text
5
```

The result represents the difference in array elements, not the difference in bytes.

### 8.5 Invalid pointer arithmetic

The following operations are invalid:
- Adding two pointers.
- Multiplying two pointers.
- Dividing two pointers.
- Multiplying a pointer by a number.
- Dividing a pointer by a number.
- Adding a floating-point or double value to a pointer.

---

## 9. Precedence of Dereferencing and Increment/Decrement

Understanding operator precedence is essential when working with pointer expressions. Consider an integer pointer `ptr` pointing to a valid integer.

### 9.1 `*ptr++`

```c
x = *ptr++;
```

This is equivalent to:
```c
x = *ptr;
ptr++;
```

The current pointed-to value is assigned to `x`, and then the pointer advances.

### 9.2 `*++ptr`

```c
x = *++ptr;
```

This is equivalent to:
```c
ptr++;
x = *ptr;
```

The pointer advances first, and then the value at the new position is assigned to `x`.

### 9.3 `++*ptr`

```c
x = ++*ptr;
```

This is equivalent in effect to:
```c
++(*ptr);
x = *ptr;
```

The value stored in the pointed-to object is incremented first, and the updated value is assigned to `x`. The pointer itself does not move.

### 9.4 `(*ptr)++`

```c
x = (*ptr)++;
```

This is equivalent in effect to:
```c
x = *ptr;
(*ptr)++;
```

The original pointed-to value is assigned to `x`, and then that value is incremented in memory. The pointer itself does not move.

### Comparison table

| Expression | What changes? | When is the value read? |
|---|---|---|
| `*ptr++` | Pointer advances | Before pointer advancement |
| `*++ptr` | Pointer advances | After pointer advancement |
| `++*ptr` | Pointed-to value increases | After incrementing the value |
| `(*ptr)++` | Pointed-to value increases | Before incrementing the value |


The pointer expressions must refer to valid objects whenever they are dereferenced.

---

## 10. Pointer Comparisons

Relational and equality operators can be used with pointers, subject to C's rules.

### 10.1 Equality operators

The operators are:
- `==` — equal to
- `!=` — not equal to

Example:
```c
int a = 10;
int *p1 = &a;
int *p2 = &a;

if (p1 == p2)
{
    printf("Both point to the same object");
}
```

Output:
```text
Both point to the same object
```

Both pointers contain the address of the same object.

### 10.2 Relational operators

The operators are:
- `<` — less than
- `>` — greater than
- `<=` — less than or equal to
- `>=` — greater than or equal to

These comparisons are meaningful and defined when the pointers satisfy the applicable C rules, particularly when they point into the same array object or to its one-past-the-end position.

Example:
```c
int arr[5];
int *p1 = &arr[1];
int *p2 = &arr[3];

if (p1 < p2)
{
    printf("p1 points to an earlier element");
}
```

## 11. Pointer to Pointer
* Pointer to Pointer is also called as double pointer, is a pointer varialble  that stores the address of another pointer variable
1. Variable: Stores a value.
2. Pointer : Stores the address of the variable
3. pointer to pointer : Stores of the address of the pointer
* This is generally used while passing pointer to functions.
> syntax: data_type **pptr;
* here variable *pptr* is a pointer to pointer and it can point to a pointer pointing to a variable of type data_type.
* The double asterisk is used to inform the compiler that this is a double pointer.
```c
int a = 5;
int *pa = &a;
int **ppa =  &pa;
```
* type of variable a is int,
* type of variable pa is (int *). pointer to int.
* type of variable ppa is (int **) or pointer to pointer to int.

*** how to we access the value of a by using double pointer? ***
- **ppa -> this gives the value of a
- *ppa  -> this gives the value of pa
- ppa   -> this gives the value of ppa

## 12. Pointer and One Dimensional Arrays

