#include <stdio.h>
#include <string.h> 

/*
    while loop first checks if the conditions and execute the block if condition is true    
    Then executes the code inside the while block
    otherwise the code in the block is skipped if the condition is false
*/

int main(void){
    char name[25];

    printf("\n What's your name ?\n");
    fgets(name, 25, stdin);
    name[strlen(name)-1] ='\0' ; // add this here to remove the null

    while(strlen(name)== 0){ // first check the conditions and execute the block if condition is true      
        printf("\n What's your name ? \n");
        fgets(name, 25, stdin);
        name[strlen(name)-1] ='\0';
    }
    printf("the string length is %ld \n", strlen(name));
    printf("my name is %s ", name);
    return 0;

}