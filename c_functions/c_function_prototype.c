#include <stdio.h>

/*
    A function prototype is a function declaration without a body and declared before main();
    It ensures that calls to a function are made with the correct arguments

    The reason we have function prototype is because many c compilers don't check for parameter matching.
    Missing arguments will result in unexpected behavior;
    The function prototype will cause the compiler to flag an error if arguments are missing
*/

// function prototype
void hello(char[], int);


int main(void){
    char name[] = "Bro";
    int age = 21;
    hello(name, age);
    return(0);

}

void hello(char name[], int age){
    printf("hello. Your name is %s \n", name);
    printf("You are %d years old ", age);
}

