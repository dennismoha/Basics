#include <stdio.h>
#include <stdbool.h>

#define LENGTH = 10;
#define HEIGHT = 5;



int main(void){
    const float  AREA = LENGTH * HEIGHT
    float item1 = 5.75
    float item2 = 10.75
    // %.1 decimal precision. how many decime places
    printf("float item1 %.2f \n", item1) // .2f means to 2 decimal places 

    // %1 minimum field width
        printf("float item1 $%8.f \n", item1) // .8f means to 8 shift the decimal places  from the dollar sign
        printf("float item1 $%-8.f \n", item1) // .-8f means to 8 shift the decimal places  from the dollar sign on the opposite direction
    // %- = left align   
    

    
   
    printf("the name of yoru school is %s :\n", school);
    printf(" your gpa is %f \n", gpa);
    return(0);

}