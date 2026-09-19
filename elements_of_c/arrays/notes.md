# Arrays - Study Notes
## introduction to arrays
- Definition: An array is a collection of similar data-type items. Each item is called an element
- Naming & indexing : Elements share the same variable name and are differentiated by an index number called a **subscript**
- Zero-based indexing : In C, subscripts always start at 0. An array of side N has indices ranging from 0 to N-1.
- Dimensions:
    1. 1-d arrays: have one subscript (known as vectors).
    2. 2-d arrays: Have two subscripts (known as matrices).
    - multidimensional Arrays: Have three or more subscripts.

## One-Dimensional(1-D)Arrays
Declaration
- Syntax: data_type_array_name[size]:
- The size must be positive integer constant or constant integer expression.
- EXample: int age[100];, float salary[15];, char grade[20];

Initialization Rules
- Default Values: Local arrays contain garbage values; 
- Explicit Syntax: int marks[5] = {50, 85, 70, 65, 95};
- Omitting Size: If size if skipped, the compiler sizes the array by the count of initializers (e.g., int marks[] = {1,2,3}; sets size to 3).
- Partial initializers: Providing more initializers than the declared size causes a compiler error.
- Array Copying: An array cannot be directly assigned to another(e.g., b=a; is invalid). Elements must be copied element-by-element using a loop.

## 1-D arrays and functions.
- Passing individual Elements:
    - Behave like standard simple variables.
    - Passed by value (changes inside the function do not affect the original element)

- Passing the Entire Array:
    - Call syntax: Pass only the array name without brackets(e.g., func(arr);).
    - Function Header: Declared as void func(intv[])
    - call by refrence Nature: the function receives direct access to the original memory block. Modifications made inside the function directly alter the original array.

## Two-Dimensional (2-D) Arrays

Declaration & Layout
- Syntax: data_type array_name[rowsize][columnsize];
- Total Elements: rowsize x columnsize.
- Example: int arr[4][5]; contains 20 elements, accessed from arr[0][0] to arr[3][4].

Processing
- processed using nested for loops: outer loop handles rows (i), inner loop handles columns(i)

Initialization rules
- Can be initialized linearly or grouped bv rows using inner braces:
```c 
int mat[4][3] = {
    {11, 12, 13}, /*Row 0 */
    {14, 15, 16},/*Row 1 */
    {17, 18, 19},/*Row 2 */
    {20, 21, 22},/*Row 3 */
};
```
- Unspecified entries: Default to 0.
- Dimension Rule: Omitting the first dimension(rows) is allowed during initialization, but the second dimensioi (columns) is mandatory (e.g., int mat[][3] = {...} is valid).

## Multidimensional Arrays: (3-D and above)
- A 3-D array can be viewed as an array of 2-D arrays.
- Example: int arr[2][4][3]: represents two 2-D arrays, each with 4 rows and 3 columns (total: 2x4x3=24 elements).
- Subscript variations: The last subscript changes most frequently, while the first subscript changes least frequently in memory order.
- Passing to functions: Only the first (leftmost) dimension may be omitted in parameter declarations; all subsequent dimensions are strictly required(e.g., void func(int arr[][4][3])).

## Introduction to strings
- Representation: Strings in C are 1-D arrays of type char, terminated by a null character ('/0', ASCII value 0).
- initialization forms:
    - Explicit null: char str[10] = {'i', 'n', 'd', 'i', 'a', '\0'};
    - string literal: char str[10] = "India";(automatically appends '\0')
- I/O Operations: Read and printed via scanf("%s", str)/printf("%s", str) or using gets()/ puts()

