#include <stdio.h>
#include <math.h>



int main(void){
    printf("\n Enter a letter grade : ");
    char grade;
    scanf("%c", &grade);

    switch(grade){
        case 'A':   
                printf("Perfect !\n");
                break;
        case 'B':
                printf("you did good! \n");
                break;
        default:
                printf("keep on pushing \n");
    }
    return(0);

}