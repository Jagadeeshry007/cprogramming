// Function types

// Function with no arguments and no return value
void f1(){
  printf("This is a function that takes no arguments and no return value");   
}

// Function with no arguments and  return value
int f2(){
  printf("This is a function that takes no arguments and int return value")
    return 0;
}

// Function with arguments and no return value
void f3(int a, double b){

  printf("This is a function that takes arguments and no return value")   
  printf("a: %d, b: %f");
}

// Function with arguments and no return value
void f4(int a, double b){
  printf("This is a function that takes arguments and return value")   
  printf("a: %d, b: %f");
  return a+b;
}