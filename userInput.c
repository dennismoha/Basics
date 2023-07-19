#include <stdio.h>
#include <stdbool.h>

/*
    limitation to scanf is that inputs with a space eg  in "hello world" only hello word is picked
    To counter this we use fgets(variableName, arrayLength, stdin)
*/


int main(void){
    int age;
    char name[25];

    printf("And what is your name ? \n");
    // scanf("%s" , name);
    fgets(name, 25, stdin);

    printf("what is your age ? \n");
    scanf("%d" , &age);
  
    printf("your age is %d ", age);
    
   
    printf(" your name  is %s \n ", name);
   
    return(0);

}