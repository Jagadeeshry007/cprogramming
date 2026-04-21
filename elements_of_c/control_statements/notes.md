if else

syntax:
if (expression){
    statement1;
    statemettN;
} else{
    statement2;
}
statement4;
statement5;


Nesting if else

syntax:
if (expression1){
    statement1;
    if(expression2)
        statment2;
    else
        statement3;
}

Dabgling else problem:

if(expression)
    if(expression2)
    {
        statement1;
    }
    else
        statement2;

Else if ladder:
if()
    statement1
else
    if()
        statement2
    else
        if()
            .....

Loops:

while
syntax:
while(){
    statemet1;
    ....
}

do while
syntax:
do{
    statements1;
    ...
} while()

Main difference between while and do while is that, conditional block is executed at least once in do while and may not execute even once in while loop.

for loop
syntax:

for (expression1;expression2;expression3)
    statement1;

for(expression1; expression2; expression3){
    statement1;
    statement2;
    .........

}
expression1: initialisation of the loop variables
expression2: condition check
expression3: update of the loop variables