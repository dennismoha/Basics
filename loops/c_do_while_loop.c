#include <stdio.h>
#include <string.h> 

/*
    do while loop always executes a block of code once, then checks the condition
    If the condition is true we loop again untill the condition is false
*/

int main(void){
    char name[25];

    printf("\n What's your name ?\n");
    fgets(name, 25, stdin);
    name[strlen(name)-1] ='\0' ; // add this here to remove the null

    do{     
        printf("\n What's your name ? \n");
        fgets(name, 25, stdin);
        name[strlen(name)-1] ='\0';
    }while(strlen(name) < 2);
    printf("the string length is %ld \n", strlen(name));
    printf("my name is %s ", name);
    return 0;

}