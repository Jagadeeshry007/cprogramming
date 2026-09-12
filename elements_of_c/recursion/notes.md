# Recursion
- Recursion is a process where the problem is solved by repeating the same process.
- Recursion is used to solve a bigger problem by breaking them into smaller problem. 
Smaller problems are solved and their solution is applied to find the final solution of the original program.
- A recursive function should be capable of calling itself.
```c
int main(void)
{
    -------
    rec();
    -------
}/*End of main()*/
void rec()
{
    -------
    rec(); //recursive call
    -------
}/*End of rec();
```
- recursive function calls itself and this process will go on infinetely.
- so we need to stop the function by writing a terminating condition which is also called as base case.

## Writing a recursive function.
- Before writing the recursive function we should be able to think the smaller version of the problem.

### two main steps to write recursive function.
1. Identification of the base case and its solution i.e the case where solution can be achieved without any recursion
2. Identification of the general case or the recursive case i.e. the case in which recursivecall will be made.

- identifying the base case is very important because the function will keep on calling itself infinitely.

- each recursive call should take us closer to the base case.

- the number of times that a function calls itself is known as the recursive depth of that function.

- the recursion has two phases
1. winding phase.
2. unwinding phase.

