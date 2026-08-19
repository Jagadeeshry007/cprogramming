# Local, Global and static variables

High Address
┌──────────────────────┐
│        Stack         │ ← local automatic variables
│          ↓           │
├──────────────────────┤
│                      │
│        Heap          │ ← malloc(), calloc(), new
│          ↑           │
├──────────────────────┤
│   BSS / .bss         │ ← zero-initialized globals/statics
├──────────────────────┤
│   Data / .data       │ ← initialized globals/statics
├──────────────────────┤
│   Read-only Data     │ ← string literals, const data
├──────────────────────┤
│   Text / Code        │ ← program instructions
└──────────────────────┘
Low Address

## Local variable
x is a local automatic variable.

Stack
┌──────────────┐
│ x = 10       │
└──────────────┘
It exists while foo() is executing.

## Global variable
This is an important one:

void foo()
{
    static int x = 10;
}

Although x is local in scope, it has static storage duration.

So it is not stored on the stack.

.data
┌──────────────┐
│ x = 10       │
└──────────────┘

## static variable

```c
void counter()
{
    static int count = 0;
    count++;
    printf("%d\n", count);
}
```
Calling:

counter();  → 1
counter();  → 2
counter();  → 3

count remains alive between function calls because it isn't a stack variable.

* the variable can have external linkage and can be accessed from another source file using **extern** 
* when global and static variables declared and initialized. They are stored in .data section
* when global is uninitialised and static are initialised to zero. then they will be stored in .bss section
* Interestingly, functions are implicitly extern unless declared static.
