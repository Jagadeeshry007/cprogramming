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

## Return statement
- Return is used as an immediate exit from the called function to the calling function and returns a value to the calling function.
- Return is used anywhere inside the function
- ` return; `-> it is used only in the void function or ` return (expression);`-> it returns a expression
- if no return statement is there then program executes till the end of the closing braces. this is called the calling of the function.
- expression returned is generally of the same type as specified in the function definition.
- if the return type is different from the function definition then compiler to try to convert it to the appropriate type as specified in the func defn
- If the return type is not void and no value is returned the value will be undefined or garbage value
- A function can only return only one value

## Function parameters and Arguments

- These parameters are like the other local variables of the function which are created when the function call starts and destroyed when the function ends.
- the parameters are automatically initiated with the values of the corresponding arguments of the function call
- changes of the parameters doesn't affect the actual arguments.
- `call-by-value` -> It is the process of passing the value from actual argument to the parameters without affecting the actual arguments.
- `call-by-refrence` -> It is the process where the values of the actual argument changes by changing the values of the parameter
- The number of the arguments not equal to the number of parameters in the definition then the behaviour is undefined
- If there is a type mismatch between the argument and parameter then compiler tries to convert the argument to the the specified parameter. Otherwise, a garbage value is passed

## Order of Evaluation of Function Arguments

- The order of evaluation of arguments and subexpressions within the arguments are unspecified. 
- It is better to avoid these types of argument expressions.

## Function of Declaration
- A func declaration is used to give a specific information to the compiler about the function so that it can check the func calls
- If definition of the called function is placed before the calling function then there is no need of declaration.

## main() function
* refer textbook

- > function declaration - **By the compiler**
- > function definition - **By the programmer**
- > function call - **By the operating system**

## Library functions

- > function declaration - **By the .h files header files**
- > function definition - **predefined, or precompiled**
- > function call - **By the programmer**

## Local, Global and Static variables

### Local variables
- the variables which are defined within the body of a function or a block are local to that function so there are called as local variables

### Global variables
- refer example6.c
- whenever there is a conflict between global and local variable, local variable takes precedence

### Static variables
- static type var_name;
