# Functions
- Function is a subprogram which performs a specific task

## Advantages of Functions
- Functions divide a program into smaller, task-specific parts, making it easier to organize and manage.
- Functions avoids the repitition of code and they can be easily called wherever.
- The program becomes understandble, modifiable, and easy to test and debug.

## types of functions
- library functions.
- user defined functions.

## User defined functions
1. function definitions
2. function declaration
3. function call

### function definition
- The general syntax of the function definition
  ```c 
  return_type func_name(parameter declaration) // function header
  {
    local variable declarations;
    statements;
    ----------                             // body of the function
    ----------
    return(expression)
  } 
  ```
- returns the value specified
- void -> returns nothing
- if no return type is specified then int is assumed but it's not a good practice.
- parameter declarations - mentions the type and name of the parameter
- these parameters are also known as formal parameters
- a function can have any number of parameters or even no parameter
- the variables inside function are local variables of that function.
- body of function = C statements + optional return statement
- a function definition cannot be placed inside another function definition

### Function call

`func_name(arg1,arg2, arg3,......)`
- arg1, arg2 are called actual arguments
- argument can be any expression, constants, variables or any function
- If a function is called in a main function then main function will be calling function.

#### the process of calling function:
- when a function is called then the control passes to the calling function and compiler allocates storage space for the parameters of the function defn
- actual arg are assigned to the formal parameters
- if the arg and parameters are having type mismatch, then default conversions take place before assigning the value to the parameter
- function body is executed till it encountered any return statement if there is no return statement then it runs till the closing brace is executed.
- for further process explanation refer p6.4

- the function call cannot be write in left hand of an assignment operator
